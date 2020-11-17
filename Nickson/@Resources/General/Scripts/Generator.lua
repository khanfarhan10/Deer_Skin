-- Structure of generateFileFromSource:
---- SourceFile=
---- TargetFile=
---- Number=
function generateFileFromSource()
	local sourceFile = io.open(SKIN:MakePathAbsolute(SELF:GetOption("SourceFile")), "r")
	local textInFile = sourceFile:read("*all")
	sourceFile:close()
	
	local targetFile = io.open(SKIN:MakePathAbsolute(SELF:GetOption("TargetFile")), "w")
	
	for i = 1, SELF:GetNumberOption("Number") do
		local text = textInFile:gsub("<n>", i)
		targetFile:write(text)
	end
	targetFile:close()
end

-- Structure of generateFilesFromSource:
---- SourceFile=
---- TargetFolder=
---- TargetFileName=
---- Number=
function generateFilesFromSource()
	local targetFolder = SELF:GetOption("TargetFolder")
	local targetFileName = SELF:GetOption("TargetFileName")
	
	local sourceFile = io.open(SKIN:MakePathAbsolute(SELF:GetOption("SourceFile")), "r")
	local textInFile = sourceFile:read("*all")
	sourceFile:close()
	
	os.execute('rd /s /q "' .. targetFolder .. '"')
	os.execute("mkdir " .. targetFolder)
	
	for i = 1, SELF:GetNumberOption("Number") do
		os.execute("mkdir " .. targetFolder .. "\\" .. targetFileName .. i)
		local targetFile = io.open(SKIN:MakePathAbsolute(targetFolder .. "\\" .. targetFileName .. i .. "\\" .. targetFileName .. i .. ".ini"), "w")
		local text = textInFile:gsub("<n>", i)
		targetFile:write(text)
		targetFile:close()
	end
end

-- Structure of generateVariableFile:
---- TargetFolder=
---- TargetFileName=
---- Number=
---- Option=
---- DefaultValue
function generateVariableFile()
	local file = SKIN:MakePathAbsolute(SELF:GetOption("TargetFolder") .. "\\" .. SELF:GetOption("TargetFileName") .. ".inc")
	local number = SELF:GetNumberOption("Number")
	local lineCount = -1
	for line in io.lines(file) do
		lineCount = lineCount + 1
	end

	if lineCount < number then
		local targetFile = io.open(file, "a")
		local text = {}
		
		table.insert(text, "")
		for i = 1 + lineCount, number do
			table.insert(text, SELF:GetOption("Option") .. i .. "=" .. SELF:GetOption("DefaultValue"))
		end
		targetFile:write(table.concat(text, "\n"))
		targetFile:close()
	elseif lineCount > number then
		local text = {}
		for line in io.lines(file) do
			table.insert(text, line)
		end
		for i = 1, lineCount - number do
			table.remove(text)
		end
		local targetFile = io.open(file, "w")
		targetFile:write(table.concat(text, "\n"))
		targetFile:close()
	end
end
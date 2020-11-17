-- Structure of Script Measure:
---- IncFile=
---- (Optional) Index=
---- Number=
---- SectionName=
---- OptionN=
---- ValueN=
function Initialize()
	local index = SELF:GetNumberOption("Index")
	local number = SELF:GetNumberOption("Number")

	local file = io.open(SKIN:MakePathAbsolute(SELF:GetOption("IncFile")), "w")
	
	local t = {}
	
	for i = index, number+index-1 do
		table.insert(t, "[" .. doSub(SELF:GetOption("SectionName"), i) .. "]")
		local j = 0
		
		while true do
			local option = SELF:GetOption("Option" .. j)
			local value = SELF:GetOption("Value" .. j)
			if option == "" then
				break
			elseif option == "Formula" then
				table.insert(t, option .. "=" .. doSubSmooth(value, i, number))
			else
				table.insert(t, option .. "=" .. doSub(value, i))
			end
			j = j + 1
		end
		
		table.insert(t, "")
	end
	
	file:write(table.concat(t, "\n"))
	file:close()
end

-- first if:
-- SomeText%% -> SomeText0, SomeText1, ...
-- second if:
-- [Start=5,Inc=10] -> 5, 15, 25, ...
-- third if:
-- before[]<SomeText>after -> before[SomeText]after
-- elseif:
-- beforeSomeText[]after -> [beforeSomeTextafter]
function doSub(value, i)
	local val = value
	if string.match(val, "%%%%") then
		val = val:gsub("%%%%", i)
	end
	if string.match(val, "%[Start=%d+,Inc=%d+%]") then
		local start = tonumber(string.match(val, "Start=(%d+)"))
		local inc = tonumber(string.match(val, "Inc=(%d+)"))
		val = start + inc * i
	end
	if string.match(val, "%[%]%b<>") then
		val = val:gsub("%[%]", "")
		val = val:gsub("<", "[")
		val = val:gsub(">", "]")
	elseif string.match(val, "%[%]") then
		val = "[" .. val:gsub("%[%]", "") .. "]"
	end
	return val
end

function doSubSmooth(value, i, number)
	local x = value
	if i == 0 then
		x = x:gsub("%%%%%-1", i)
	else
		x = x:gsub("%%%%%-1", i-1)
	end
	
	if i == number-1 then
		x = x:gsub("%%%%%+1", i)
	else
		x = x:gsub("%%%%%+1", i+1)
	end
	
	x = x:gsub("%%%%", i)
	return x
end

-- sub to remove {the curly braces}, then add (parentheses), then parse it
function parseFormula(formula)
	return SKIN:ParseFormula("(" .. formula:sub(2, -2) .. ")")
end

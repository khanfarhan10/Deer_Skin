function Update()
	GrassPollen = SKIN:GetMeasure('GrassPollenCategory'):GetStringValue()
	TreePollen = SKIN:GetMeasure('TreePollenCategory'):GetStringValue()
	RagWeedPollen = SKIN:GetMeasure('RagweedPollenCategory'):GetStringValue()
	
	GrassIndex = SKIN:GetMeasure('GrassPollenIndex'):GetValue()
	TreeIndex = SKIN:GetMeasure('TreePollenIndex'):GetValue()
	RagWeedIndex = SKIN:GetMeasure('RagweedPollenIndex'):GetValue()

	if (GrassIndex == 0) and (TreeIndex == 0) and (RagWeedIndex == 0) then
		Phrase = "No pollen"
	elseif (GrassIndex >= TreeIndex and GrassIndex >= RagWeedIndex) then
		Phrase = GrassPollen .. " levels of grass pollen"
	elseif (TreeIndex >= GrassIndex and TreeIndex >= RagWeedIndex) then
		Phrase = TreePollen .. " levels of tree pollen"
	elseif (RagWeedIndex >= GrassIndex and RagWeedIndex >= TreeIndex) then
		Phrase = RagWeedPollen .. " levels of ragweed pollen"
	end
	
	return Phrase
	
end
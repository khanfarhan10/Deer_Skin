function Update()
	SunrMeasure = SKIN:GetMeasure('SunriseTime'):GetStringValue()
	SunsMeasure = SKIN:GetMeasure('SunsetTime'):GetStringValue()
	NowMeasure = SKIN:GetMeasure('CurrentTime'):GetStringValue()
	HourSunr, MinuteSunr, SecondSunr = string.match(SunrMeasure, '^(.*):(.*):(.*)$')
	HourSuns, MinuteSuns, SecondSuns = string.match(SunsMeasure, '^(.*):(.*):(.*)$')
	HourNow, MinuteNow, SecondNow = string.match(NowMeasure, '^(.*):(.*):(.*)$')
	
	NowTimeStamp=HourNow * 3600 + MinuteNow * 60 + SecondNow
	SunrTimeStamp= HourSunr * 3600 + MinuteSunr *60 + SecondSunr
	SunsTimeStamp= HourSuns * 3600 + MinuteSuns *60 + SecondSuns
	HardSunrTime= SunrTimeStamp - 1800
	HardSunsTime= SunsTimeStamp + 1800
	
	if (NowTimeStamp < HardSunrTime) then
		TimeDay = -1
	elseif (NowTimeStamp < SunrTimeStamp) then
		TimeDay = math.sin((NowTimeStamp - HardSunrTime)*(math.pi/2)/1800)-1
	elseif (NowTimeStamp < SunsTimeStamp) then
		TimeDay = math.sin((NowTimeStamp - SunrTimeStamp)*math.pi/(SunsTimeStamp - SunrTimeStamp))
	elseif (NowTimeStamp < HardSunsTime) then
		TimeDay = math.cos((NowTimeStamp - SunsTimeStamp)*(math.pi/2)/1800) - 1
	elseif (NowTimeStamp > HardSunsTime) then
		TimeDay = - 1
	end
	
	return TimeDay
end
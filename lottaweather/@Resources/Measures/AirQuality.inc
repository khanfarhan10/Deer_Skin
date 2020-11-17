[AirQualityParent]
Measure=WebParser
Group=Parents
URL=[WebParserParent]
StringIndex=8
Disabled=1
RegExp=(?siU).*\\"primaryPollutant\\":\\"(.*)\\",.*\\"amount\\":(.*),.*\\"amount\\":(.*),.*\\"amount\\":(.*),.*\\"amount\\":(.*),.*\\"amount\\":(.*),.*

[PrimaryPollutant]
Measure=WebParser
URL=[AirQualityParent]
StringIndex=1
Substitute="PM2.5":"PM25"
UpdateDivider=-1
Group=Children

[NO2Name]
Measure=String
String=Nitrogen Dioxide

[NO2Amount]
Measure=WebParser
URL=[AirQualityParent]
StringIndex=2
UpdateDivider=-1
Group=Children

[O3Name]
Measure=String
String=Ozone

[O3Amount]
Measure=WebParser
URL=[AirQualityParent]
StringIndex=3
UpdateDivider=-1
Group=Children

[SO2Name]
Measure=String
String=Sulphur Dioxide

[SO2Amount]
Measure=WebParser
URL=[AirQualityParent]
StringIndex=4
UpdateDivider=-1
Group=Children

[PM25Name]
Measure=String
String=Fine Particulate Matter

[PM25Amount]
Measure=WebParser
URL=[AirQualityParent]
StringIndex=5
UpdateDivider=-1
Group=Children

[PM10Name]
Measure=String
String=Coarse Particulate Matter

[PM10Amount]
Measure=WebParser
URL=[AirQualityParent]
StringIndex=6
UpdateDivider=-1
Group=Children

[AirQualityScript]
Measure=Script
ScriptFile=#@#Scripts/AirQuality.lua
UpdateDivider=-1
Group=Children

[AirQualityPhrase]
Measure=String
String=[&AirQualityScript:airQualityPhrase([&[&PrimaryPollutant]Amount], '[&PrimaryPollutant]')] levels of [&[&PrimaryPollutant]Name]
DynamicVariables=1
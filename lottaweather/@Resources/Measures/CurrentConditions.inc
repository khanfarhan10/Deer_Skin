[CurrentWeatherParent]
Measure=WebParser
Group=Parents
URL=[WebParserParent]
StringIndex=4
Disabled=1
RegExp=(?siU)units:(.*)\\".*\\"iconCode\\":(.*),.*\\"precip6Hour\\":(.*),.*\\"pressureAltimeter\\":(.*),.*\\"pressureTendencyTrend\\":\\"(.*)\\",.*\\"relativeHumidity\\":(.*),.*\\"sunriseTimeLocal\\":.*T(.*)[\+|\-]{1}.*\\"sunsetTimeLocal\\":.*T(.*)[\+|\-]{1}.*\\"temperature\\":(.*),.*\\"temperatureFeelsLike\\":(.*),.*\\"uvDescription\\":\\"(.*)\\",.*\\"windDirection\\":(.*),.*\\"windSpeed\\":(.*),.*\\"wxPhraseLong\\":\\"(.*)\\",
FinishAction=[!EnableMeasureGroup SunrSuns]

[TemperatureUnit]
Measure=WebParser
URL=[CurrentWeatherParent]
StringIndex=1
Substitute="m":"C","h":"C","e":"F"
UpdateDivider=-1
Group=Children

[WindUnit]
Measure=WebParser
URL=[CurrentWeatherParent]
StringIndex=1
Substitute="m":"k","h":"k","k":"km/h","e":"mph"
UpdateDivider=-1
Group=Children

[PressureUnit]
Measure=WebParser
URL=[CurrentWeatherParent]
StringIndex=1
Substitute="m":"k","h":"k","k":"hPa","e":"in"
UpdateDivider=-1
Group=Children

[CurrentIconCode]
Measure=WebParser
URL=[CurrentWeatherParent]
StringIndex=2
UpdateDivider=-1
Group=Children

[Next6HourPrecip]
Measure=WebParser
URL=[CurrentWeatherParent]
StringIndex=3
UpdateDivider=-1
Group=Children

[CurrentPressure]
Measure=WebParser
URL=[CurrentWeatherParent]
StringIndex=4
UpdateDivider=-1
Group=Children

[CurrentPressureAngle]
Measure=Calc
Formula=(([CurrentPressure] < 100) ? (([CurrentPressure] - 28.92) * 90) : (([CurrentPressure] - 983) * 3))
DynamicVariables=1
Disabled=1
Group=SunrSuns

[CurrentPressureTrend]
Measure=WebParser
URL=[CurrentWeatherParent]
StringIndex=5
UpdateDivider=-1
Group=Children

[CurrentHumidity]
Measure=WebParser
URL=[CurrentWeatherParent]
StringIndex=6
MinValue=0
MaxValue=100
UpdateDivider=-1
Group=Children

[SunriseTime]
Measure=WebParser
URL=[CurrentWeatherParent]
StringIndex=7
UpdateDivider=-1
Group=Children

[SunsetTime]
Measure=WebParser
URL=[CurrentWeatherParent]
StringIndex=8
UpdateDivider=-1
Group=Children

[TimeDayScript]
Measure=Script
Group=SunrSuns
UpdateDivider=150
ScriptFile=#@#Scripts/TimeDay.lua
Disabled=1

[CurrentTemp]
Measure=WebParser
URL=[CurrentWeatherParent]
StringIndex=9
UpdateDivider=-1
Group=Children

[CurrentFLikeTemp]
Measure=WebParser
URL=[CurrentWeatherParent]
StringIndex=10
UpdateDivider=-1
Group=Children

[CurrentUV]
Measure=WebParser
URL=[CurrentWeatherParent]
StringIndex=11
UpdateDivider=-1
Group=Children

[CurrentWindDirection]
Measure=WebParser
URL=[CurrentWeatherParent]
StringIndex=12
UpdateDivider=-1
Group=Children

[CurrentWindCalc]
;This only exists to avoid the log being filled with errors when you first load the skin
Measure=Calc
Formula=[CurrentWindDirection]
DynamicVariables=1
Disabled=1
Group=SunrSuns

[CurrentWindSpeed]
Measure=WebParser
URL=[CurrentWeatherParent]
StringIndex=13
UpdateDivider=-1
Group=Children

[CurrentWeather]
Measure=WebParser
URL=[CurrentWeatherParent]
StringIndex=14
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children
; =================================================
; @Include template file to populate all
; Current day Weather information from Weather.com
;==================================================

[@CurrentAll]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=#URLcurrent#
RegExp=(?siU)^(.*)$
UpdateRate=#UpdateRate#
;Debug=2
;Debug2File=#@#Current.txt

; Parent for "Current Conditions".

[@CurrentParent]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentAll]
StringIndex=0
RegExp=#Current#
LogSubstringErrors=0

; Children for "Current Conditions".

[@CurrentLocationName]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=0
RegExp=#LocationName#
StringIndex2=1
DecodeCharacterReference=1


[@CurrentTemperatureUnit]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=0
RegExp=#TempUnit#
StringIndex2=1

[@CurrentObservationText]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=1

[@CurrentObservationTime]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=2

[@CurrentIcon]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=3




[@CurrentTemperature]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=4

[@CurrentTemperatureSymbol]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=5

[@CurrentConditions]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=6
DecodeCharacterReference=1


[@CurrentFeelsLikeText]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=7

[@CurrentFeelsLike]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=8

[@CurrentFeelsLikeSymbol]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=9

[@CurrentTemperatureHigh]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=10

[@CurrentTemperatureHighSymbol]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=11

[@CurrentTemperatureLow]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=12
; Note that after some point in the afternoon, there will 
; be NO Low Temperature returned. The High Temperature
; returned will then be the "low" from the current time until
; midnight of the same day.
; This can be tested with: 
; IfMatch=^$
DynamicVariables=1
IfMatch=^$
IfMatchAction=[!SetOption MeterTemp1 Text "-- / %1%2"]
IfNotMatchAction=[!SetOption MeterTemp1 Text "%1%2 / %3%4"]

[@CurrentTemperatureLowSymbol]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=13

[@CurrentTitle]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=14

[@CurrentWindText]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=15

[@CurrentWindDirection]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=16
RegExpSubstitute=1
Substitute="(?iU)^(.*) .*$":"\1"

[@CurrentWind]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=16
RegExpSubstitute=1
Substitute="(?iU)^.*([\d]+ .*)$":"\1"

[@CurrentHumidityText]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=17

[@CurrentHumidity]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=18

[@CurrentHumidiySymbol]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=19

[@CurrentDewPointText]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=20

[@CurrentDewPoint]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=21

[@CurrentDewPointSymbol]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=22

[@CurrentPressureText]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=23

[@CurrentPressure]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=24


[@CurrentPressureChange]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=0
RegExp=#PressureArrow#
StringIndex2=1
LogSubstringErrors=0



[@CurrentVisibilityText]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=25

[@CurrentVisibilityDistance]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=26

; Parent for Sunrise / Sunset

[@CurrentSunParent]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentAll]
StringIndex=0
RegExp=#SunRiseSet#
LogSubstringErrors=0

; Children for "Sunrise/Sunset"

[@CurrentSunriseText]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentSunParent]
StringIndex=1

[@CurrentSunrise]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentSunParent]
StringIndex=2

[@CurrentSunsetText]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentSunParent]
StringIndex=3

[@CurrentSunset]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentSunParent]
StringIndex=4

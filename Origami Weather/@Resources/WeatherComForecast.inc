; ===================================================
; @Include template file to populate all
; 8-Day Forecast Weather information from Weather.com
;====================================================

[@ForecastAll]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=#URLForecast#
RegExp=(?siU)^(.*)$
UpdateRate=#UpdateRate#
;Debug=2
;Debug2File=#@#EightDay.txt

; Parent for the 8-day Forecast

[@ForecastParent]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastAll]
StringIndex=0
RegExp=#Forecast#
LogSubstringErrors=0

; Children for the 8-day Forecast
; Day "1" is "Today". It will not include "high" and "low" temperatures. Use "current" for that.

[@ForecastDay1Name]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=1


[@ForecastDay1Icon]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=2

[@ForecastDay1Date]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=3


[@ForecastDay1Conditions]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=4


[@ForecastDay1Precipitation]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=5

[@ForecastDay1PrecipitationSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=6

[@ForecastDay2Name]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=7


[@ForecastDay2Icon]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=8

[@ForecastDay2Date]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=9


[@ForecastDay2Conditions]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=10


[@ForecastDay2High]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=11

[@ForecastDay2HighSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=12

[@ForecastDay2Low]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=13

[@ForecastDay2LowSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=14

[@ForecastDay2Precipitation]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=15

[@ForecastDay2PrecipitationSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=16

[@ForecastDay3Name]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=17


[@ForecastDay3Icon]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=18

[@ForecastDay3Date]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=19


[@ForecastDay3Conditions]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=20


[@ForecastDay3High]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=21

[@ForecastDay3HighSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=22

[@ForecastDay3Low]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=23

[@ForecastDay3LowSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=24

[@ForecastDay3Precipitation]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=25

[@ForecastDay3PrecipitationSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=26

[@ForecastDay4Name]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=27


[@ForecastDay4Icon]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=28

[@ForecastDay4Date]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=29


[@ForecastDay4Conditions]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=30


[@ForecastDay4High]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=31

[@ForecastDay4HighSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=32

[@ForecastDay4Low]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=33

[@ForecastDay4LowSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=34

[@ForecastDay4Precipitation]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=35

[@ForecastDay4PrecipitationSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=36

[@ForecastDay5Name]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=37


[@ForecastDay5Icon]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=38

[@ForecastDay5Date]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=39


[@ForecastDay5Conditions]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=40


[@ForecastDay5High]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=41

[@ForecastDay5HighSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=42

[@ForecastDay5Low]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=43

[@ForecastDay5LowSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=44

[@ForecastDay5Precipitation]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=45

[@ForecastDay5PrecipitationSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=46

[@ForecastDay6Name]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=47


[@ForecastDay6Icon]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=48

[@ForecastDay6Date]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=49


[@ForecastDay6Conditions]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=50


[@ForecastDay6High]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=51

[@ForecastDay6HighSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=52

[@ForecastDay6Low]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=53

[@ForecastDay6LowSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=54

[@ForecastDay6Precipitation]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=55

[@ForecastDay6PrecipitationSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=56

[@ForecastDay7Name]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=57


[@ForecastDay7Icon]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=58

[@ForecastDay7Date]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=59


[@ForecastDay7Conditions]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=60


[@ForecastDay7High]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=61

[@ForecastDay7HighSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=62

[@ForecastDay7Low]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=63

[@ForecastDay7LowSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=64

[@ForecastDay7Precipitation]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=65

[@ForecastDay7PrecipitationSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=66

[@ForecastDay8Name]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=67


[@ForecastDay8Icon]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=68

[@ForecastDay8Date]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=69


[@ForecastDay8Conditions]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=70


[@ForecastDay8High]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=71

[@ForecastDay8HighSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=72

[@ForecastDay8Low]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=73

[@ForecastDay8LowSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=74

[@ForecastDay8Precipitation]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=75

[@ForecastDay8PrecipitationSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=76

; Parent for the 8-day Forecast Details Text

[@ForecastDetailsParent]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastAll]
StringIndex=0
RegExp=#DetailsForecast#
LogSubstringErrors=0

; Children for the 8-day Forecast Details Text

[@ForecastDay1Details]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastDetailsParent]
StringIndex=1

[@ForecastDay2Details]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastDetailsParent]
StringIndex=2

[@ForecastDay3Details]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastDetailsParent]
StringIndex=3

[@ForecastDay4Details]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastDetailsParent]
StringIndex=4

[@ForecastDay5Details]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastDetailsParent]
StringIndex=5

[@ForecastDay6Details]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastDetailsParent]
StringIndex=6

[@ForecastDay7Details]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastDetailsParent]
StringIndex=7

[@ForecastDay8Details]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastDetailsParent]
StringIndex=8

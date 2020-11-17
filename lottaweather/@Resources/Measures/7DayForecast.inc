[7DayForecastParent]
Measure=WebParser
Group=Parents
URL=[WebParserParent]
StringIndex=6
Disabled=1
RegExp=(?siU)\\"dayOfWeek\\":\[\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\".*\\"moonPhase\\":\[\\"(.*)\\",.*\\"moonPhaseDay\\":\[(.*),.*\\"cloudCover\\":\[(.*),(.*),.*\\"iconCode\\":\[(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*)\].*\\"precipChance\\":\[(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*)\].*\\"temperature\\":\[(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*)\].*\\"wxPhraseLong\\":\[(.*),(.*),\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\"\].*

[TodayWeekday]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=1
Substitute="Monday":"M","Tuesday":"Tu","Wednesday":"W","Thursday":"Th","Friday":"F","Saturday":"Sa","Sunday":"Su"
UpdateDivider=-1
Group=Children

[Day2Weekday]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=2
Substitute="Monday":"M","Tuesday":"Tu","Wednesday":"W","Thursday":"Th","Friday":"F","Saturday":"Sa","Sunday":"Su"
UpdateDivider=-1
Group=Children

[Day3Weekday]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=3
Substitute="Monday":"M","Tuesday":"Tu","Wednesday":"W","Thursday":"Th","Friday":"F","Saturday":"Sa","Sunday":"Su"
UpdateDivider=-1
Group=Children

[Day4Weekday]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=4
Substitute="Monday":"M","Tuesday":"Tu","Wednesday":"W","Thursday":"Th","Friday":"F","Saturday":"Sa","Sunday":"Su"
UpdateDivider=-1
Group=Children

[Day5Weekday]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=5
Substitute="Monday":"M","Tuesday":"Tu","Wednesday":"W","Thursday":"Th","Friday":"F","Saturday":"Sa","Sunday":"Su"
UpdateDivider=-1
Group=Children

[Day6Weekday]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=6
Substitute="Monday":"M","Tuesday":"Tu","Wednesday":"W","Thursday":"Th","Friday":"F","Saturday":"Sa","Sunday":"Su"
UpdateDivider=-1
Group=Children

[Day7Weekday]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=7
Substitute="Monday":"M","Tuesday":"Tu","Wednesday":"W","Thursday":"Th","Friday":"F","Saturday":"Sa","Sunday":"Su"
UpdateDivider=-1
Group=Children

[Day8Weekday]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=8
Substitute="Monday":"M","Tuesday":"Tu","Wednesday":"W","Thursday":"Th","Friday":"F","Saturday":"Sa","Sunday":"Su"
UpdateDivider=-1
Group=Children

[CurrentMoonPhase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=9
UpdateDivider=-1
Group=Children

[CurrentMoonIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=10
UpdateDivider=-1
Group=Children

[CloudCoverToday]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=11
UpdateDivider=-1
Group=Children

[CloudCoverTonight]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=12
UpdateDivider=-1
Group=Children

[Day1DayIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=13
UpdateDivider=-1
Group=Children

[Day1NightIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=14
UpdateDivider=-1
Group=Children

[Day2DayIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=15
UpdateDivider=-1
Group=Children

[Day2NightIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=16
UpdateDivider=-1
Group=Children

[Day3DayIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=17
UpdateDivider=-1
Group=Children

[Day3NightIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=18
UpdateDivider=-1
Group=Children

[Day4DayIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=19
UpdateDivider=-1
Group=Children

[Day4NightIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=20
UpdateDivider=-1
Group=Children

[Day5DayIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=21
UpdateDivider=-1
Group=Children

[Day5NightIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=22
UpdateDivider=-1
Group=Children

[Day6DayIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=23
UpdateDivider=-1
Group=Children

[Day6NightIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=24
UpdateDivider=-1
Group=Children

[Day7DayIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=25
UpdateDivider=-1
Group=Children

[Day7NightIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=26
UpdateDivider=-1
Group=Children

[Day8DayIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=27
UpdateDivider=-1
Group=Children

[Day8NightIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=28
UpdateDivider=-1
Group=Children

[Day1DayPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=29
Substitute="null":"Low","100":"Very High","10":"Low","20":"Low","30":"Moderate","40":"Moderate","50":"Moderate","60":"High","70":"High","80":"Very High","90":"Very High","0":"Low"
UpdateDivider=-1
Group=Children

[Day1NightPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=30
Substitute="null":"Low","100":"Very High","10":"Low","20":"Low","30":"Moderate","40":"Moderate","50":"Moderate","60":"High","70":"High","80":"Very High","90":"Very High","0":"Low"
UpdateDivider=-1
Group=Children

[Day2DayPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=31
Substitute="null":"Low","100":"Very High","10":"Low","20":"Low","30":"Moderate","40":"Moderate","50":"Moderate","60":"High","70":"High","80":"Very High","90":"Very High","0":"Low"
UpdateDivider=-1
Group=Children

[Day2NightPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=32
Substitute="null":"Low","100":"Very High","10":"Low","20":"Low","30":"Moderate","40":"Moderate","50":"Moderate","60":"High","70":"High","80":"Very High","90":"Very High","0":"Low"
UpdateDivider=-1
Group=Children

[Day3DayPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=33
Substitute="null":"Low","100":"Very High","10":"Low","20":"Low","30":"Moderate","40":"Moderate","50":"Moderate","60":"High","70":"High","80":"Very High","90":"Very High","0":"Low"
UpdateDivider=-1
Group=Children

[Day3NightPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=34
Substitute="null":"Low","100":"Very High","10":"Low","20":"Low","30":"Moderate","40":"Moderate","50":"Moderate","60":"High","70":"High","80":"Very High","90":"Very High","0":"Low"
UpdateDivider=-1
Group=Children

[Day4DayPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=35
Substitute="null":"Low","100":"Very High","10":"Low","20":"Low","30":"Moderate","40":"Moderate","50":"Moderate","60":"High","70":"High","80":"Very High","90":"Very High","0":"Low"
UpdateDivider=-1
Group=Children

[Day4NightPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=36
Substitute="null":"Low","100":"Very High","10":"Low","20":"Low","30":"Moderate","40":"Moderate","50":"Moderate","60":"High","70":"High","80":"Very High","90":"Very High","0":"Low"
UpdateDivider=-1
Group=Children

[Day5DayPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=37
Substitute="null":"Low","100":"Very High","10":"Low","20":"Low","30":"Moderate","40":"Moderate","50":"Moderate","60":"High","70":"High","80":"Very High","90":"Very High","0":"Low"
UpdateDivider=-1
Group=Children

[Day5NightPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=38
Substitute="null":"Low","100":"Very High","10":"Low","20":"Low","30":"Moderate","40":"Moderate","50":"Moderate","60":"High","70":"High","80":"Very High","90":"Very High","0":"Low"
UpdateDivider=-1
Group=Children

[Day6DayPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=39
Substitute="null":"Low","100":"Very High","10":"Low","20":"Low","30":"Moderate","40":"Moderate","50":"Moderate","60":"High","70":"High","80":"Very High","90":"Very High","0":"Low"
UpdateDivider=-1
Group=Children

[Day6NightPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=40
Substitute="null":"Low","100":"Very High","10":"Low","20":"Low","30":"Moderate","40":"Moderate","50":"Moderate","60":"High","70":"High","80":"Very High","90":"Very High","0":"Low"
UpdateDivider=-1
Group=Children

[Day7DayPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=41
Substitute="null":"Low","100":"Very High","10":"Low","20":"Low","30":"Moderate","40":"Moderate","50":"Moderate","60":"High","70":"High","80":"Very High","90":"Very High","0":"Low"
UpdateDivider=-1
Group=Children

[Day7NightPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=42
Substitute="null":"Low","100":"Very High","10":"Low","20":"Low","30":"Moderate","40":"Moderate","50":"Moderate","60":"High","70":"High","80":"Very High","90":"Very High","0":"Low"
UpdateDivider=-1
Group=Children

[Day8DayPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=43
Substitute="null":"Low","100":"Very High","10":"Low","20":"Low","30":"Moderate","40":"Moderate","50":"Moderate","60":"High","70":"High","80":"Very High","90":"Very High","0":"Low"
UpdateDivider=-1
Group=Children

[Day8NightPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=44
Substitute="null":"Low","100":"Very High","10":"Low","20":"Low","30":"Moderate","40":"Moderate","50":"Moderate","60":"High","70":"High","80":"Very High","90":"Very High","0":"Low"
UpdateDivider=-1
Group=Children

[Day1DayTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=45
UpdateDivider=-1
Group=Children

[Day1NightTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=46
RegExpSubstitute=1
UpdateDivider=-1
Group=Children

[Day2DayTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=47
UpdateDivider=-1
Group=Children

[Day2NightTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=48
UpdateDivider=-1
Group=Children

[Day3DayTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=49
UpdateDivider=-1
Group=Children

[Day3NightTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=50
UpdateDivider=-1
Group=Children

[Day4DayTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=51
UpdateDivider=-1
Group=Children

[Day4NightTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=52
UpdateDivider=-1
Group=Children

[Day5DayTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=53
UpdateDivider=-1
Group=Children

[Day5NightTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=54
UpdateDivider=-1
Group=Children

[Day6DayTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=55
UpdateDivider=-1
Group=Children

[Day6NightTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=56
UpdateDivider=-1
Group=Children

[Day7DayTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=57
UpdateDivider=-1
Group=Children

[Day7NightTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=58
UpdateDivider=-1
Group=Children

[Day8DayTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=59
UpdateDivider=-1
Group=Children

[Day8NightTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=60
UpdateDivider=-1
Group=Children

[Day1DayPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=61
Substitute='"':""
UpdateDivider=-1
Group=Children

[Day1NightPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=62
Substitute='"':""
UpdateDivider=-1
Group=Children

[Day2DayPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=63
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day2NightPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=64
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day3DayPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=65
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day3NightPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=66
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day4DayPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=67
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day4NightPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=68
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day5DayPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=69
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day5NightPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=70
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day6DayPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=71
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day6NightPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=72
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day7DayPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=73
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day7NightPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=74
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day8DayPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=75
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day8NightPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=76
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children
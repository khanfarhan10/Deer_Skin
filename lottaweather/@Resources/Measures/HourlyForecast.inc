[HourlyForecastParent]
Measure=WebParser
Group=Parents
URL=[WebParserParent]
StringIndex=3
Disabled=1
RegExp=(?siU).*\\"cloudCover\\":\[(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*\\"iconCode\\":\[(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*\\"precipChance\\":\[(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*\\"temperature\\":\[(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*,(.*),.*\\"validTimeLocal\\":\[.*T(.*):.*T.*T(.*):.*T.*T(.*):.*T.*T(.*):.*T.*T(.*):.*T.*T(.*):.*T.*T(.*):.*T.*T(.*):.*T.*T(.*):.*T.*T(.*):.*T.*T(.*):.*T.*T(.*):.*T.*\\"wxPhraseLong\\":\[\\"(.*)\\",.*,\\"(.*)\\",.*,\\"(.*)\\",.*,\\"(.*)\\",.*,\\"(.*)\\",.*,\\"(.*)\\",.*,\\"(.*)\\",.*,\\"(.*)\\",.*,\\"(.*)\\",.*,\\"(.*)\\",.*,\\"(.*)\\",.*,\\"(.*)\\",.*
FinishAction=[!EnableMeasureGroup Rain]

[1hCloudCover]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=1
UpdateDivider=-1
Group=Children

[3hCloudCover]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=2
UpdateDivider=-1
Group=Children

[5hCloudCover]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=3
UpdateDivider=-1
Group=Children

[7hCloudCover]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=4
UpdateDivider=-1
Group=Children

[9hCloudCover]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=5
UpdateDivider=-1
Group=Children

[11hCloudCover]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=6
UpdateDivider=-1
Group=Children

[13hCloudCover]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=7
UpdateDivider=-1
Group=Children

[15hCloudCover]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=8
UpdateDivider=-1
Group=Children

[17hCloudCover]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=9
UpdateDivider=-1
Group=Children

[19hCloudCover]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=10
UpdateDivider=-1
Group=Children

[21hCloudCover]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=11
UpdateDivider=-1
Group=Children

[23hCloudCover]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=12
UpdateDivider=-1
Group=Children

[1hIcon]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=13
UpdateDivider=-1
Group=Children

[3hIcon]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=14
UpdateDivider=-1
Group=Children

[5hIcon]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=15
UpdateDivider=-1
Group=Children

[7hIcon]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=16
UpdateDivider=-1
Group=Children

[9hIcon]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=17
UpdateDivider=-1
Group=Children

[11hIcon]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=18
UpdateDivider=-1
Group=Children

[13hIcon]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=19
UpdateDivider=-1
Group=Children

[15hIcon]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=20
UpdateDivider=-1
Group=Children

[17hIcon]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=21
UpdateDivider=-1
Group=Children

[19hIcon]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=22
UpdateDivider=-1
Group=Children

[21hIcon]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=23
UpdateDivider=-1
Group=Children

[23hIcon]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=24
UpdateDivider=-1
Group=Children

[1hQPF]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=25
UpdateDivider=-1
Group=Children

[3hQPF]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=26
UpdateDivider=-1
Group=Children

[5hQPF]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=27
UpdateDivider=-1
Group=Children

[7hQPF]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=28
UpdateDivider=-1
Group=Children

[9hQPF]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=29
UpdateDivider=-1
Group=Children

[11hQPF]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=30
UpdateDivider=-1
Group=Children

[13hQPF]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=31
UpdateDivider=-1
Group=Children

[15hQPF]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=32
UpdateDivider=-1
Group=Children

[17hQPF]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=33
UpdateDivider=-1
Group=Children

[19hQPF]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=34
UpdateDivider=-1
Group=Children

[21hQPF]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=35
UpdateDivider=-1
Group=Children

[23hQPF]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=36
UpdateDivider=-1
Group=Children

[1hTemp]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=37
UpdateDivider=-1
Group=Children

[3hTemp]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=38
UpdateDivider=-1
Group=Children

[5hTemp]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=39
UpdateDivider=-1
Group=Children

[7hTemp]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=40
UpdateDivider=-1
Group=Children

[9hTemp]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=41
UpdateDivider=-1
Group=Children

[11hTemp]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=42
UpdateDivider=-1
Group=Children

[13hTemp]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=43
UpdateDivider=-1
Group=Children

[15hTemp]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=44
UpdateDivider=-1
Group=Children

[17hTemp]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=45
UpdateDivider=-1
Group=Children

[19hTemp]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=46
UpdateDivider=-1
Group=Children

[21hTemp]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=47
UpdateDivider=-1
Group=Children

[23hTemp]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=48
UpdateDivider=-1
Group=Children

[1hHour]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=49
UpdateDivider=-1
Group=Children

[3hHour]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=50
UpdateDivider=-1
Group=Children

[5hHour]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=51
UpdateDivider=-1
Group=Children

[7hHour]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=52
UpdateDivider=-1
Group=Children

[9hHour]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=53
UpdateDivider=-1
Group=Children

[11hHour]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=54
UpdateDivider=-1
Group=Children

[13hHour]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=55
UpdateDivider=-1
Group=Children

[15hHour]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=56
UpdateDivider=-1
Group=Children

[17hHour]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=57
UpdateDivider=-1
Group=Children

[19hHour]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=58
UpdateDivider=-1
Group=Children

[21hHour]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=59
UpdateDivider=-1
Group=Children

[23hHour]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=60
UpdateDivider=-1
Group=Children

[1hPhrase]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=61
UpdateDivider=-1
Group=Children

[3hPhrase]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=62
UpdateDivider=-1
Group=Children

[5hPhrase]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=63
UpdateDivider=-1
Group=Children

[7hPhrase]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=64
UpdateDivider=-1
Group=Children

[9hPhrase]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=65
UpdateDivider=-1
Group=Children

[11hPhrase]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=66
UpdateDivider=-1
Group=Children

[13hPhrase]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=67
UpdateDivider=-1
Group=Children

[15hPhrase]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=68
UpdateDivider=-1
Group=Children

[17hPhrase]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=69
UpdateDivider=-1
Group=Children

[19hPhrase]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=70
UpdateDivider=-1
Group=Children

[21hPhrase]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=71
UpdateDivider=-1
Group=Children

[23hPhrase]
Measure=WebParser
URL=[HourlyForecastParent]
StringIndex=72
UpdateDivider=-1
Group=Children
[AlertsCheck]
Measure=WebParser
Group=Parents
URL=[WebParserParent]
StringIndex=2
Disabled=1
RegExp=(?siU)\\"status\\":(.*),.*

[AnyAlerts]
Measure=WebParser
URL=[AlertsCheck]
StringIndex=1
IfCondition= AnyAlerts = 200
IfTrueAction=[!EnableMeasure AlertsParent][!SetVariable AlertsHide 0][!SetVariable AlertsOffset 70]
IfFalseAction=[!DisableMeasure AlertsParent][!SetVariable AlertsHide 1][!SetVariable AlertsOffset 0]
IfConditionMode=1

[AlertsParent]
Measure=WebParser
Group=Alerts
URL=[WebParserParent]
StringIndex=2
RegExp=(?siU).*\\"phenomena\\":\\"(.*)\\",.*\\"eventDescription\\":\\"(.*)\\",.*\\"severity\\":\\"(.*)\\",.*\\"expireTimeLocal\\":\\"(\d{4}-\d{2}-\d{2})T(\d{2}).*
FinishAction=[!EnableMeasure ExpiryDateMeasure]

[AlertPhenomena]
Measure=WebParser
Group=Alerts
URL=[AlertsParent]
StringIndex=1
Substitute="THT":"Heat","TTS":"Thunderstorm","FL":"Flood","WI":"Wind","GA":"Wind","TDS":"Thunderstorm","EH":"Heat","HW":"High Wave","HT":"Heat","DFG":"Fog"
ErrorString=""

[AlertSeverity]
Measure=WebParser
Group=Alerts
URL=[AlertsParent]
StringIndex=3
ErrorString="No"

[AlertExpiryDate]
Measure=WebParser
Group=Alerts
URL=[AlertsParent]
StringIndex=4

[AlertExpiryTime]
Measure=WebParser
Group=Alerts
URL=[AlertsParent]
StringIndex=5
Substitute="00":"Midnight","12":"Noon"

[ExpiryDateMeasure]
Measure=Time
TimeStamp=[AlertExpiryDate]
TimeStampFormat=%Y-%m-%d
Format=%A
Disabled=1
DynamicVariables=1
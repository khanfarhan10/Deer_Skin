[LocationParent]
Measure=WebParser
Group=Parents
URL=[WebParserParent]
StringIndex=1
Disabled=1
RegExp=(?siU).*\\"adminDistrict\\":(.*),.*\\"country\\":\\"(.*)\\",.*\\"displayName\\":\\"(.*)\\",.*\\"placeId\\":\\"(.*)\\",.*

[CountryName]
Measure=WebParser
URL=[LocationParent]
StringIndex=2
UpdateDivider=-1
Group=Children

[DistrictName]
Measure=WebParser
URL=[LocationParent]
StringIndex=1
Substitute='"':"","\":"","null":"[CountryName]","\u002F":"/","\u005C":"\","\u003C":"<","\u003E":">"
DynamicVariables=1
UpdateDivider=-1
Group=Children

[CityName]
Measure=WebParser
URL=[LocationParent]
StringIndex=3
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[CityID]
Measure=WebParser
URL=[LocationParent]
StringIndex=4
UpdateDivider=-1
Group=Children
[PollenParent]
Measure=WebParser
Group=Parents
URL=[WebParserParent]
StringIndex=9
Disabled=1
RegExp=(?siU).*\\"grassPollenIndex\\".*\[(.*),.*\\"grassPollenCategory\\".*\\"(.*)\\".*\\"treePollenIndex\\".*\[(.*),.*\\"treePollenCategory\\".*\\"(.*)\\".*\\"ragweedPollenIndex\\".*\[(.*),.*\\"ragweedPollenCategory\\".*\\"(.*)\\".*
FinishAction=[!EnableMeasure PollenPhraseScript]

[GrassPollenIndex]
Measure=WebParser
URL=[PollenParent]
StringIndex=1
UpdateDivider=-1
Group=Children

[GrassPollenCategory]
Measure=WebParser
URL=[PollenParent]
StringIndex=2
UpdateDivider=-1
Group=Children

[TreePollenIndex]
Measure=WebParser
URL=[PollenParent]
StringIndex=3
UpdateDivider=-1
Group=Children

[TreePollenCategory]
Measure=WebParser
URL=[PollenParent]
StringIndex=4
UpdateDivider=-1
Group=Children

[RagweedPollenIndex]
Measure=WebParser
URL=[PollenParent]
StringIndex=5
UpdateDivider=-1
Group=Children

[RagweedPollenCategory]
Measure=WebParser
URL=[PollenParent]
StringIndex=6
UpdateDivider=-1
Group=Children

[PollenPhraseScript]
Measure=Script
UpdateDivider=150
Disabled=1
ScriptFile=#@#Scripts/PollenPhrase.lua
UpdateDivider=-1
Group=Children
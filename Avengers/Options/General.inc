;Background ====================

[MeterBackgroundTop]
Meter=image
Imagename=#@#\Images\Options\Options1.png
x=15
Antialias=1

;Tab Buttons ===============

[MeterTabButtonTopMiddle]
Meter=button
buttonimage="#@#\Images\Options\Tab Button.png"
y=141
x=35
Antialias=1
ButtonCommand= [!WriteKeyValue Variables Tab "Large Launchers"][!Refresh]

[MeterTabButtonBottomMiddle]
Meter=button
buttonimage="#@#\Images\Options\Tab Button.png"
y=100r
x=r
Antialias=1
ButtonCommand= [!WriteKeyValue Variables Tab "Small Launchers"][!Refresh]

[MeterTabButtonBottom]
Meter=button
buttonimage="#@#\Images\Options\Tab Button.png"
y=100r
x=r
Antialias=1
ButtonCommand= [!WriteKeyValue Variables Tab "Folders"][!Refresh]

;Frame Content =========================

[GeneralTitle]
meter = string
text = GENERAL
meterstyle = titlestyle
x=107
y=116
antialias = 1

;Music Player ==============================

[MusicPlayer]
meter = string
text = MUSIC PLAYER
meterstyle = subtitlestyle
x=110
y=170

[MusicLabel]
meter = string
text = Player code
meterstyle = labelstyle
x=110
y=195


[MusicSubLabel]
meter = string
text = (For a full list of supported music players and #CRLF#their respective player codes, check the NowPlaying #CRLF#plugin section of the Rainmeter manual)
meterstyle = labelstyle
x=110
y=220


[MusicBackground]
meter= button
buttonimage=#@#\Images\Options\textbackground.png
x=175
y=194
ButtonCommand=!CommandMeasure "MeasureGeneral" "ExecuteBatch 14"
AntiAlias=1

[MusicText]
Meter = string
MeterStyle=TextStyle
Text="#player#"
x=20r
y=1r

;HDD =============================

[HDD]
meter = string
text = HDD 
meterstyle = subtitlestyle
x=410
y=170

[HDDLabel]
meter = string
text = Primary Drive Letter
meterstyle = labelstyle
x=410
y=195

[HDDSubLabel]
meter = string
text = (Percent of HDD that is full is #CRLF#displayed on outer ring of the #CRLF#Time skin)
meterstyle = labelstyle
x=410
y=220

[HDDBackground]
meter= IMAGE
ImageName=#@#\Images\Options\HDDbackground.png
x=520
y=194
TooltipText=Must contain the colon e.g. "C:"
LeftMouseUpAction=!CommandMeasure "MeasureGeneral" "ExecuteBatch 13"
AntiAlias=1

[HDDText]
Meter = string
MeterStyle=TextStyle
Text="#drive#"
x=7r
y=1r


; Website Launchers ======================

[WebsiteLaunchers]
meter = string
text = WEBSITE LAUNCHERS
meterstyle = titlestyle
x=107
y=295

[Web1Launcher]
meter = string
text = WEBSITE 1
meterstyle = subtitlestyle
x=110
y=355

[Web2Launcher]
meter = string
text = WEBSITE 2
meterstyle = subtitlestyle
x=245r
y=r

[Web3Launcher]
meter = string
text = WEBSITE 3
meterstyle = subtitlestyle
x=-245r
y=103r

[Web4Launcher]
meter = string
text = WEBSITE 4
meterstyle = subtitlestyle
x=245r
y=r

[Web5Launcher]
meter = string
text = WEBSITE 5
meterstyle = subtitlestyle
x=-245r
y=103r

[Web6Launcher]
meter = string
text = WEBSITE 6
meterstyle = subtitlestyle
x=245r
y=r


;Web Launcher 1 ===================

[Web1TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=185
y=380
ButtonCommand=!CommandMeasure "MeasureGeneral" "ExecuteBatch 1"
AntiAlias=1

[Web1TitleLabel]
meter=string
meterstyle=labelstyle
text = Website Name
x=110
y=1r

[Web1TitleText]
Meter = string
MeterStyle=TextStyle
Text="#WN1#"
x=205
y=r

[Web1PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=185
y=20r
ButtonCommand=!CommandMeasure "MeasureGeneral" "ExecuteBatch 2"
AntiAlias=1

[Web1PathLabel]
meter=string
MeterStyle=labelstyle
text = Web Address
x=110
y=1r

[Web1PathText]
meter = string
Meterstyle = textstyle
Text="#WA1#"
x=205
y=r

;Web Launcher 2 ===================

[Web2TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=430
y=-22r
ButtonCommand=!CommandMeasure "MeasureGeneral" "ExecuteBatch 3"
AntiAlias=1

[Web2TitleLabel]
meter=string
meterstyle=labelstyle
text = Website Name
x=355
y=1r

[Web2TitleText]
Meter = string
MeterStyle=TextStyle
Text="#WN2#"
x=450
y=r

[Web2PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=430
y=20r
ButtonCommand=!CommandMeasure "MeasureGeneral" "ExecuteBatch 4"
AntiAlias=1

[Web2PathLabel]
meter=string
MeterStyle=labelstyle
text = Web Address
x=355
y=1r

[Web2PathText]
meter = string
Meterstyle = textstyle
Text="#WA2#"
x=450
y=r

;Web Launcher 3 ===================

[Web3TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=185
y=80r
ButtonCommand=!CommandMeasure "MeasureGeneral" "ExecuteBatch 5"
AntiAlias=1

[Web3TitleLabel]
meter=string
meterstyle=labelstyle
text = Website Name
x=110
y=1r

[Web3TitleText]
Meter = string
MeterStyle=TextStyle
Text="#WN3#"
x=205
y=r

[Web3PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=185
y=20r
ButtonCommand=!CommandMeasure "MeasureGeneral" "ExecuteBatch 6"
AntiAlias=1

[Web3PathLabel]
meter=string
MeterStyle=labelstyle
text = Web Address
x=110
y=1r

[Web3PathText]
meter = string
Meterstyle = textstyle
Text="#WA3#"
x=205
y=r

;Web Launcher 4 ===================

[Web4TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=430
y=-22r
ButtonCommand=!CommandMeasure "MeasureGeneral" "ExecuteBatch 7"
AntiAlias=1

[Web4TitleLabel]
meter=string
meterstyle=labelstyle
text = Website Name
x=355
y=1r

[Web4TitleText]
Meter = string
MeterStyle=TextStyle
Text="#WN4#"
x=450
y=r

[Web4PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=430
y=20r
ButtonCommand=!CommandMeasure "MeasureGeneral" "ExecuteBatch 8"
AntiAlias=1

[Web4PathLabel]
meter=string
MeterStyle=labelstyle
text = Web Address
x=355
y=1r

[Web4PathText]
meter = string
Meterstyle = textstyle
Text="#WA4#"
x=450
y=r

;Web Launcher 5 ===================

[Web5TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=185
y=80r
ButtonCommand=!CommandMeasure "MeasureGeneral" "ExecuteBatch 9"
AntiAlias=1

[Web5TitleLabel]
meter=string
meterstyle=labelstyle
text = Website Name
x=110
y=1r

[Web5TitleText]
Meter = string
MeterStyle=TextStyle
Text="#WN5#"
x=205
y=r

[Web5PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=185
y=20r
ButtonCommand=!CommandMeasure "MeasureGeneral" "ExecuteBatch 10"
AntiAlias=1

[Web5PathLabel]
meter=string
MeterStyle=labelstyle
text = Web Address
x=110
y=1r

[Web5PathText]
meter = string
Meterstyle = textstyle
Text="#WA5#"
x=205
y=r

;Web Launcher 6 ===================

[Web6TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=430
y=-22r
ButtonCommand=!CommandMeasure "MeasureGeneral" "ExecuteBatch 11"
AntiAlias=1

[Web6TitleLabel]
meter=string
meterstyle=labelstyle
text = Website Name
x=355
y=1r

[Web6TitleText]
Meter = string
MeterStyle=TextStyle
Text="#WN6#"
x=450
y=r

[Web6PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=430
y=20r
ButtonCommand=!CommandMeasure "MeasureGeneral" "ExecuteBatch 12"
AntiAlias=1

[Web6PathLabel]
meter=string
MeterStyle=labelstyle
text = Web Address
x=355
y=1r

[Web6PathText]
meter = string
Meterstyle = textstyle
Text="#WA6#"
x=450
y=r

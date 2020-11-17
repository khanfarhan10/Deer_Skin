;Background ====================

[MeterBackgroundTopMiddle]
Meter=image
Imagename=#@#\Images\Options\Options2.png
x=15
Antialias=1


;Tab Buttons ===============

[MeterTabButtonTop]
Meter=button
buttonimage="#@#\Images\Options\Tab Button.png"
y=41
x=35
Antialias=1
ButtonCommand=[!WriteKeyValue Variables Tab "General"][!Refresh]

[MeterTabButtonBottomMiddle]
Meter=button
buttonimage="#@#\Images\Options\Tab Button.png"
y=241
x=r
Antialias=1
ButtonCommand= [!WriteKeyValue Variables Tab "Small Launchers"][!Refresh]

[MeterTabButtonBottom]
Meter=button
buttonimage="#@#\Images\Options\Tab Button.png"
y=341
x=r
Antialias=1
ButtonCommand= [!WriteKeyValue Variables Tab "Folders"][!Refresh]


;Frame Content =========================

[LargeLaunchersTitle]
meter = string
text = LARGE LAUNCHERS CONFIGURATION
meterstyle = titlestyle
x=107
y=116

[LargeLauncher1]
meter = string
text = LAUNCHER 1
meterstyle = subtitlestyle
x=110
y=170

[LargeLauncher2]
meter = string
text = LAUNCHER 2
meterstyle = subtitlestyle
x=r
y=81r

[LargeLauncher3]
meter = string
text = LAUNCHER 3
meterstyle = subtitlestyle
x=r
y=81r

[LargeLauncher4]
meter = string
text = LAUNCHER 4
meterstyle = subtitlestyle
x=r
y=81r

[LargeLauncher5]
meter = string
text = LAUNCHER 5
meterstyle = subtitlestyle
x=r
y=81r

[LargeLauncher6]
meter = string
text = LAUNCHER 6
meterstyle = subtitlestyle
x=r
y=81r


;Large Launcher 1 =================================

[LargeLauncher1TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=199
ButtonCommand=!CommandMeasure "MeasureLargeLauncher" "ExecuteBatch 1"
AntiAlias=1

[LargeLauncher1TitleLabel]
meter=string
meterstyle=labelstyle
text = Name of application
x=115
y=200

[LargeLauncher1TitleText]
Meter = string
MeterStyle=TextStyle
Text="#LLT1#"
x=268
y=r

[LargeLauncher1PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=219
ButtonCommand= ["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "LLP1" "#config#" "#LLP1#"][!Refresh *]
AntiAlias=1

[LargeLauncher1PathLabel]
meter=string
MeterStyle=labelstyle
text = Application path
x=115
y=220

[LargeLauncher1PathText]
meter = string
Meterstyle = textstyle
Text="#LLP1#"
x=268
y=r

[LargeLauncher1IconBackground]
meter= Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=520
y=200
ButtonCommand= ["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "LLI1" "#config#" "#LLI1#"][!Refresh *]
AntiAlias=1

[LargeLauncher1IconLabel]
meter=string
MeterStyle=labelstyle
text = Choose an icon
stringalign = center
x=475
y=212

[LargeLauncher1Icon]
meter= IMAGE
imagename = #LLI1#
x=525
y=205
w=30
h=30
antialias = 1


;Large Launcher 2 ==============================

[LargeLauncher2TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=280
ButtonCommand=!CommandMeasure "MeasureLargeLauncher" "ExecuteBatch 2"
AntiAlias=1

[LargeLauncher2TitleLabel]
meter=string
meterstyle=labelstyle
text = Name of application
x=115
y=281

[LargeLauncher2TitleText]
Meter = string
MeterStyle=TextStyle
Text="#LLT2#"
x=268
y=r

[LargeLauncher2PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=300
ButtonCommand= ["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "LLP2" "#config#" "#LLP2#"][!Refresh *]
AntiAlias=1

[LargeLauncher2PathLabel]
meter=string
MeterStyle=labelstyle
text = Application path
x=115
y=301

[LargeLauncher2PathText]
meter = string
Meterstyle = textstyle
Text="#LLP2#"
x=268
y=r

[LargeLauncher2IconBackground]
meter= Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=520
y=281
ButtonCommand= ["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "LLI2" "#config#" "#LLI2#"][!Refresh *]
AntiAlias=1

[LargeLauncher2IconLabel]
meter=string
MeterStyle=labelstyle
text = Choose an icon
stringalign = center
x=475
y=293

[LargeLauncher2Icon]
meter= IMAGE
imagename = #LLI2#
x=525
y=286
w=30
h=30
antialias = 1


; Large Launcher 3 =============================

[LargeLauncher3TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=361
ButtonCommand=!CommandMeasure "MeasureLargeLauncher" "ExecuteBatch 3"
AntiAlias=1

[LargeLauncher3TitleLabel]
meter=string
meterstyle=labelstyle
text = Name of application
x=115
y=362

[LargeLauncher3TitleText]
Meter = string
MeterStyle=TextStyle
Text="#LLT3#"
x=268
y=r

[LargeLauncher3PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=381
ButtonCommand= ["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "LLP3" "#config#" "#LLP3#"][!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Large Launchers"]
AntiAlias=1

[LargeLauncher3PathLabel]
meter=string
MeterStyle=labelstyle
text = Application path
x=115
y=382

[LargeLauncher3PathText]
meter = string
Meterstyle = textstyle
Text="#LLP3#"
x=268
y=r

[LargeLauncher3IconBackground]
meter= Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=520
y=362
ButtonCommand= ["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "LLI3" "#config#" "#LLI3#"][!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Large Launchers"]
AntiAlias=1

[LargeLauncher3IconLabel]
meter=string
MeterStyle=labelstyle
text = Choose an icon
stringalign = center
x=475
y=374

[LargeLauncher3Icon]
meter= IMAGE
imagename = #LLI3#
x=525
y=367
h=30
w=30
antialias = 1


;Large Launcher 4 ===========================

[LargeLauncher4TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=442
ButtonCommand=!CommandMeasure "MeasureLargeLauncher" "ExecuteBatch 4"
AntiAlias=1

[LargeLauncher4TitleLabel]
meter=string
meterstyle=labelstyle
text = Name of application
x=115
y=443

[LargeLauncher4TitleText]
Meter = string
MeterStyle=TextStyle
Text="#LLT4#"
x=268
y=r

[LargeLauncher4PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=462
ButtonCommand= ["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "LLP4" "#config#" "#LLP4#"][!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Large Launchers"]
AntiAlias=1

[LargeLauncher4PathLabel]
meter=string
MeterStyle=labelstyle
text = Application path
x=115
y=463

[LargeLauncher4PathText]
meter = string
Meterstyle = textstyle
Text="#LLP4#"
x=268
y=r

[LargeLauncher4IconBackground]
meter= Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=520
y=443
ButtonCommand= ["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "LLI4" "#config#" "#LLI4#"][!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Large Launchers"]
AntiAlias=1

[LargeLauncher4IconLabel]
meter=string
MeterStyle=labelstyle
text = Choose an icon
stringalign = center
x=475
y=455

[LargeLauncher4Icon]
meter= IMAGE
imagename = #LLI4#
x=525
y=448
h=30
w=30
antialias = 1


;Large Launcher 5 ===========================

[LargeLauncher5TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=523
ButtonCommand=!CommandMeasure "MeasureLargeLauncher" "ExecuteBatch 5"
AntiAlias=1

[LargeLauncher5TitleLabel]
meter=string
meterstyle=labelstyle
text = Name of application
x=115
y=524

[LargeLauncher5TitleText]
Meter = string
MeterStyle=TextStyle
Text="#LLT5#"
x=268
y=r

[LargeLauncher5PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=543
ButtonCommand= ["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "LLP5" "#config#" "#LLP5#"][!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Large Launchers"]
AntiAlias=1

[LargeLauncher5PathLabel]
meter=string
MeterStyle=labelstyle
text = Application path
x=115
y=544

[LargeLauncher5PathText]
meter = string
Meterstyle = textstyle
Text="#LLP5#"
x=268
y=r

[LargeLauncher5IconBackground]
meter= Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=520
y=524
ButtonCommand= ["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "LLI5" "#config#" "#LLI5#"][!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Large Launchers"]
AntiAlias=1

[LargeLauncher5IconLabel]
meter=string
MeterStyle=labelstyle
text = Choose an icon
stringalign = center
x=475
y=536

[LargeLauncher5Icon]
meter= IMAGE
imagename = #LLI5#
x=525
y=529
h=30
w=30
antialias = 1


;Large Launcher 6 ====================================

[LargeLauncher6TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=604
ButtonCommand=!CommandMeasure "MeasureLargeLauncher" "ExecuteBatch 6"
AntiAlias=1

[LargeLauncher6TitleLabel]
meter=string
meterstyle=labelstyle
text = Name of application
x=115
y=605

[LargeLauncher6TitleText]
Meter = string
MeterStyle=TextStyle
Text="#LLT6#"
x=268
y=r

[LargeLauncher6PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=624
ButtonCommand= ["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "LLP6" "#config#" "#LLP6#"][!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Large Launchers"]
AntiAlias=1

[LargeLauncher6PathLabel]
meter=string
MeterStyle=labelstyle
text = Application path
x=115
y=625

[LargeLauncher6PathText]
meter = string
Meterstyle = textstyle
Text="#LLP6#"
x=268
y=r

[LargeLauncher6IconBackground]
meter= Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=520
y=605
ButtonCommand=["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "LLI6" "#config#" "#LLI6#"][!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Large Launchers"]
AntiAlias=1

[LargeLauncher6IconLabel]
meter=string
MeterStyle=labelstyle
text = Choose an icon
stringalign = center
x=475
y=617

[LargeLauncher6Icon]
meter= IMAGE
imagename = #LLI6#
x=525
y=610
h=30
w=30
antialias = 1

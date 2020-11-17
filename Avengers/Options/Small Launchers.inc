;Background ====================

[MeterBackgroundBottomMiddle]
Meter=image
Imagename=#@#\Images\Options\Options3.png
x=15
Antialias=1


;Tab Buttons ===============

[MeterTabButtonTop]
Meter=button
buttonimage="#@#\Images\Options\Tab Button.png"
y=41
x=35
Antialias=1
ButtonCommand= [!WriteKeyValue Variables Tab "General"][!Refresh]

[MeterTabButtonTopMiddle]
Meter=button
buttonimage="#@#\Images\Options\Tab Button.png"
y=100r
x=r
Antialias=1
ButtonCommand= [!WriteKeyValue Variables Tab "Large Launchers"][!Refresh]

[MeterTabButtonBottom]
Meter=button
buttonimage="#@#\Images\Options\Tab Button.png"
y=341
x=r
Antialias=1
ButtonCommand= [!WriteKeyValue Variables Tab "Folders"][!Refresh]


;Frame Content =========================

[SmallLaunchersTitle]
meter = string
text = SMALL LAUNCHERS CONFIGURATION
meterstyle = titlestyle
x=107
y=116

[SmallLauncher1]
meter = string
text = LAUNCHER 1
meterstyle = subtitlestyle
x=110
y=170

[SmallLauncher2]
meter = string
text = LAUNCHER 2
meterstyle = subtitlestyle
x=r
y=81r

[SmallLauncher3]
meter = string
text = LAUNCHER 3
meterstyle = subtitlestyle
x=r
y=81r

[SmallLauncher4]
meter = string
text = LAUNCHER 4
meterstyle = subtitlestyle
x=r
y=81r

[SmallLauncher5]
meter = string
text = LAUNCHER 5
meterstyle = subtitlestyle
x=r
y=81r

[SmallLauncher6]
meter = string
text = LAUNCHER 6
meterstyle = subtitlestyle
x=r
y=81r


; Small Launcher 1 ==============================

[SmallLauncher1TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=199
ButtonCommand=!CommandMeasure "MeasureSmallLauncher" "ExecuteBatch 1"
Antialias=1

[SmallLauncher1TitleLabel]
meter=string
meterstyle=labelstyle
text = Name of application
x=115
y=200

[SmallLauncher1TitleText]
Meter = string
MeterStyle=TextStyle
Text="#SLT1#"
x=268
y=r

[SmallLauncher1PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=219
ButtonCommand=["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "SLP1" "#config#" "#SLP1#"][!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers"]
Antialias=1

[SmallLauncher1PathLabel]
meter=string
MeterStyle=labelstyle
text = Application path
x=115
y=220

[SmallLauncher1PathText]
meter = string
Meterstyle = textstyle
Text="#SLP1#"
x=268
y=r

[SmallLauncher1IconBackground]
meter= Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=520
y=200
ButtonCommand=["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "SLI1" "#config#" "#SLI1#"][!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers"]
Antialias=1

[SmallLauncher1IconLabel]
meter=string
MeterStyle=labelstyle
text = Choose an icon
stringalign = center
x=475
y=212

[SmallLauncher1Icon]
meter= IMAGE
imagename = #SLI1#
x=525
y=205
w=30
h=30
antialias = 1


;Small Launcher 2 ==============================

[SmallLauncher2TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=280
ButtonCommand=!CommandMeasure "MeasureSmallLauncher" "ExecuteBatch 2"
Antialias=1

[SmallLauncher2TitleLabel]
meter=string
meterstyle=labelstyle
text = Name of application
x=115
y=281

[SmallLauncher2TitleText]
Meter = string
MeterStyle=TextStyle
Text="#SLT2#"
x=268
y=r

[SmallLauncher2PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=300
ButtonCommand=["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "SLP2" "#config#" "#SLP2#"][!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers"]
Antialias=1

[SmallLauncher2PathLabel]
meter=string
MeterStyle=labelstyle
text = Application path
x=115
y=301

[SmallLauncher2PathText]
meter = string
Meterstyle = textstyle
Text="#SLP2#"
x=268
y=r

[SmallLauncher2IconBackground]
meter= Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=520
y=281
ButtonCommand=["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "SLI2" "#config#" "#SLI2#"][!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers"]
Antialias=1

[SmallLauncher2IconLabel]
meter=string
MeterStyle=labelstyle
text = Choose an icon
stringalign = center
x=475
y=293

[SmallLauncher2Icon]
meter= IMAGE
imagename = #SLI2#
x=525
y=286
w=30
h=30
antialias = 1


; Small Launcher 3 =============================

[SmallLauncher3TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=361
ButtonCommand=!CommandMeasure "MeasureSmallLauncher" "ExecuteBatch 3"
Antialias=1

[SmallLauncher3TitleLabel]
meter=string
meterstyle=labelstyle
text = Name of application
x=115
y=362

[SmallLauncher3TitleText]
Meter = string
MeterStyle=TextStyle
Text="#SLT3#"
x=268
y=r

[SmallLauncher3PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=381
ButtonCommand= ["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "SLP3" "#config#" "#SLP3#"][!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers"]
Antialias=1

[SmallLauncher3PathLabel]
meter=string
MeterStyle=labelstyle
text = Application path
x=115
y=382

[SmallLauncher3PathText]
meter = string
Meterstyle = textstyle
Text="#SLP3#"
x=268
y=r

[SmallLauncher3IconBackground]
meter= Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=520
y=362
ButtonCommand= ["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "SLI3" "#config#" "#SLI3#"][!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers"]
Antialias=1

[SmallLauncher3IconLabel]
meter=string
MeterStyle=labelstyle
text = Choose an icon
stringalign = center
x=475
y=374

[SmallLauncher3Icon]
meter= IMAGE
imagename = #SLI3#
x=525
y=367
h=30
w=30
antialias = 1


;Small Launcher 4 ===========================

[SmallLauncher4TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=442
ButtonCommand=!CommandMeasure "MeasureSmallLauncher" "ExecuteBatch 4"
Antialias=1

[SmallLauncher4TitleLabel]
meter=string
meterstyle=labelstyle
text = Name of application
x=115
y=443

[SmallLauncher4TitleText]
Meter = string
MeterStyle=TextStyle
Text="#SLT4#"
x=268
y=r

[SmallLauncher4PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=462
ButtonCommand= ["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "SLP4" "#config#" "#SLP4#"][!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers"]
Antialias=1

[SmallLauncher4PathLabel]
meter=string
MeterStyle=labelstyle
text = Application path
x=115
y=463

[SmallLauncher4PathText]
meter = string
Meterstyle = textstyle
Text="#SLP4#"
x=268
y=r

[SmallLauncher4IconBackground]
meter= Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=520
y=443
ButtonCommand= ["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "SLI4" "#config#" "#SLI4#"][!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers"]
Antialias=1

[SmallLauncher4IconLabel]
meter=string
MeterStyle=labelstyle
text = Choose an icon
stringalign = center
x=475
y=455

[SmallLauncher4Icon]
meter= IMAGE
imagename = #SLI4#
x=525
y=448
h=30
w=30
antialias = 1


;Small Launcher 5 ===========================

[SmallLauncher5TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=523
ButtonCommand=!CommandMeasure "MeasureSmallLauncher" "ExecuteBatch 5"
Antialias=1

[SmallLauncher5TitleLabel]
meter=string
meterstyle=labelstyle
text = Name of application
x=115
y=524

[SmallLauncher5TitleText]
Meter = string
MeterStyle=TextStyle
Text="#SLT5#"
x=268
y=r

[SmallLauncher5PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=543
ButtonCommand= ["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "SLP5" "#config#" "#SLP5#"][!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers"]
Antialias=1

[SmallLauncher5PathLabel]
meter=string
MeterStyle=labelstyle
text = Application path
x=115
y=544

[SmallLauncher5PathText]
meter = string
Meterstyle = textstyle
Text="#SLP5#"
x=268
y=r

[SmallLauncher5IconBackground]
meter= Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=520
y=524
ButtonCommand= ["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "SLI5" "#config#" "#SLI5#"][!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers"]
Antialias=1

[SmallLauncher5IconLabel]
meter=string
MeterStyle=labelstyle
text = Choose an icon
stringalign = center
x=475
y=536

[SmallLauncher5Icon]
meter= IMAGE
imagename = #SLI5#
x=525
y=529
h=30
w=30
antialias = 1


;Small Launcher 6 ====================================

[SmallLauncher6TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=604
ButtonCommand=!CommandMeasure "MeasureSmallLauncher" "ExecuteBatch 6"
Antialias=1

[SmallLauncher6TitleLabel]
meter=string
meterstyle=labelstyle
text = Name of application
x=115
y=605

[SmallLauncher6TitleText]
Meter = string
MeterStyle=TextStyle
Text="#SLT6#"
x=268
y=r

[SmallLauncher6PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=246
y=624
ButtonCommand= ["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "SLP6" "#config#" "#SLP6#"][!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers"]
Antialias=1

[SmallLauncher6PathLabel]
meter=string
MeterStyle=labelstyle
text = Application path
x=115
y=625

[SmallLauncher6PathText]
meter = string
Meterstyle = textstyle
Text="#SLP6#"
x=268
y=r

[SmallLauncher6IconBackground]
meter= Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=520
y=605
ButtonCommand=["#@#Addons\RainFile\RainFile.exe" "File" "Variables" "SLI6" "#config#" "#SLI6#"][!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers"]
Antialias=1

[SmallLauncher6IconLabel]
meter=string
MeterStyle=labelstyle
text = Choose an icon
stringalign = center
x=475
y=617

[SmallLauncher6Icon]
meter= IMAGE
imagename = #SLI6#
x=525
y=610
h=30
w=30
antialias = 1

;Background ====================

[MeterBackgroundBottom]
Meter=image
Imagename=#@#\Images\Options\Options4.png
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

[MeterTabButtonTopMiddle]
Meter=button
buttonimage="#@#\Images\Options\Tab Button.png"
y=100r
x=r
Antialias=1
ButtonCommand=[!WriteKeyValue Variables Tab "Large Launchers"][!Refresh]

[MeterTabButtonBottomMiddle]
Meter=button
buttonimage="#@#\Images\Options\Tab Button.png"
y=100r
x=r
Antialias=1
ButtonCommand=[!WriteKeyValue Variables Tab "Small Launchers"][!Refresh]


;Frame Content =========================

[FoldersTitle]
meter = string
text = FOLDER SHORTCUTS
meterstyle = titlestyle
x=107
y=116

[FolderLauncher1]
meter = string
text = FOLDER 1
meterstyle = subtitlestyle
x=110
y=165

[FolderLauncher2]
meter = string
text = FOLDER 2
meterstyle = subtitlestyle
x=r
y=71r

[FolderLauncher3]
meter = string
text = FOLDER 3
meterstyle = subtitlestyle
x=r
y=71r

[FolderLauncher4]
meter = string
text = FOLDER 4
meterstyle = subtitlestyle
x=r
y=71r

[FolderLauncher5]
meter = string
text = FOLDER 5
meterstyle = subtitlestyle
x=r
y=71r

[FolderLauncher6]
meter = string
text = FOLDER 6
meterstyle = subtitlestyle
x=r
y=71r

[FolderLauncher7]
meter = string
text = FOLDER 7
meterstyle = subtitlestyle
x=r
y=71r

;Folder Images =======================

[Folder1Image]
meter=image
imagename=#@#\Images\Options\Folder1.png
y=192
x=470
AntiAlias=1

[Folder2Image]
meter=image
imagename=#@#\Images\Options\Folder2.png
y=71r
x=r
AntiAlias=1

[Folder3Image]
meter=image
imagename=#@#\Images\Options\Folder3.png
y=71r
x=r
AntiAlias=1

[Folder4Image]
meter=image
imagename=#@#\Images\Options\Folder4.png
y=71r
x=r
AntiAlias=1

[Folder5Image]
meter=image
imagename=#@#\Images\Options\Folder5.png
y=71r
x=r
AntiAlias=1

[Folder6Image]
meter=image
imagename=#@#\Images\Options\Folder6.png
y=71r
x=r
AntiAlias=1

[Folder7Image]
meter=image
imagename=#@#\Images\Options\Folder7.png
y=71r
x=r
AntiAlias=1

;Folder Shortcut 1================

[Folder1TitleLabel]
meter=string
meterstyle=labelstyle
text = Folder Name
x=115
y=190

[Folder1TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=1r
y=16r
ButtonCommand=!CommandMeasure "MeasureFolder" "ExecuteBatch 1"
AntiAlias=1

[Folder1TitleText]
Meter = string
MeterStyle=TextStyle
Text="#FLN1#"
x=20r
y=1r

[Folder1PathLabel]
meter=string
MeterStyle=labelstyle
text = Folder Path
x=140r
y=-17r

[Folder1PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=1r
y=16r
ButtonCommand=["#@#Addons\RainFile\RainFile.exe" "Folder" "Variables" "FLP1" "#config#" "#FLP1#"][!Refresh *]
AntiAlias=1

[Folder1PathText]
meter = string
Meterstyle = textstyle
Text="#FLP1#"
x=20r
y=1r

;Folder Shortcut 2================

[Folder2TitleLabel]
meter=string
meterstyle=labelstyle
text = Folder Name
x=115
y=54r

[Folder2TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=1r
y=16r
ButtonCommand=!CommandMeasure "MeasureFolder" "ExecuteBatch 2"
AntiAlias=1

[Folder2TitleText]
Meter = string
MeterStyle=TextStyle
Text="#FLN2#"
x=20r
y=1r

[Folder2PathLabel]
meter=string
MeterStyle=labelstyle
text = Folder Path
x=140r
y=-17r

[Folder2PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=1r
y=16r
ButtonCommand=["#@#Addons\RainFile\RainFile.exe" "Folder" "Variables" "FLP2" "#config#" "#FLP2#"][!Refresh *]
AntiAlias=1

[Folder2PathText]
meter = string
Meterstyle = textstyle
Text="#FLP2#"
x=20r
y=1r

;Folder Shortcut 3================

[Folder3TitleLabel]
meter=string
meterstyle=labelstyle
text = Folder Name
x=115
y=54r

[Folder3TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=1r
y=16r
ButtonCommand=!CommandMeasure "MeasureFolder" "ExecuteBatch 3"
AntiAlias=1

[Folder3TitleText]
Meter = string
MeterStyle=TextStyle
Text="#FLN3#"
x=20r
y=1r

[Folder3PathLabel]
meter=string
MeterStyle=labelstyle
text = Folder Path
x=140r
y=-17r

[Folder3PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=1r
y=16r
ButtonCommand=["#@#Addons\RainFile\RainFile.exe" "Folder" "Variables" "FLP3" "#config#" "#FLP3#"][!Refresh *]
AntiAlias=1

[Folder3PathText]
meter = string
Meterstyle = textstyle
Text="#FLP3#"
x=20r
y=1r

;Folder Shortcut 4================

[Folder4TitleLabel]
meter=string
meterstyle=labelstyle
text = Folder Name
x=115
y=54r

[Folder4TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=1r
y=16r
ButtonCommand=!CommandMeasure "MeasureFolder" "ExecuteBatch 4"
AntiAlias=1

[Folder4TitleText]
Meter = string
MeterStyle=TextStyle
Text="#FLN4#"
x=20r
y=1r

[Folder4PathLabel]
meter=string
MeterStyle=labelstyle
text = Folder Path
x=140r
y=-17r

[Folder4PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=1r
y=16r
ButtonCommand=["#@#Addons\RainFile\RainFile.exe" "Folder" "Variables" "FLP4" "#config#" "#FLP4#"][!Refresh *]
AntiAlias=1

[Folder4PathText]
meter = string
Meterstyle = textstyle
Text="#FLP4#"
x=20r
y=1r

;Folder Shortcut 5================

[Folder5TitleLabel]
meter=string
meterstyle=labelstyle
text = Folder Name
x=115
y=54r

[Folder5TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=1r
y=16r
ButtonCommand=!CommandMeasure "MeasureFolder" "ExecuteBatch 5"
AntiAlias=1

[Folder5TitleText]
Meter = string
MeterStyle=TextStyle
Text="#FLN5#"
x=20r
y=1r

[Folder5PathLabel]
meter=string
MeterStyle=labelstyle
text = Folder Path
x=140r
y=-17r

[Folder5PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=1r
y=16r
ButtonCommand=["#@#Addons\RainFile\RainFile.exe" "Folder" "Variables" "FLP5" "#config#" "#FLP5#"][!Refresh *]
AntiAlias=1

[Folder5PathText]
meter = string
Meterstyle = textstyle
Text="#FLP5#"
x=20r
y=1r

;Folder Shortcut 6================

[Folder6TitleLabel]
meter=string
meterstyle=labelstyle
text = Folder Name
x=115
y=54r

[Folder6TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=1r
y=16r
ButtonCommand=!CommandMeasure "MeasureFolder" "ExecuteBatch 6"
AntiAlias=1

[Folder6TitleText]
Meter = string
MeterStyle=TextStyle
Text="#FLN6#"
x=20r
y=1r

[Folder6PathLabel]
meter=string
MeterStyle=labelstyle
text = Folder Path
x=140r
y=-17r

[Folder6PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=1r
y=16r
ButtonCommand=["#@#Addons\RainFile\RainFile.exe" "Folder" "Variables" "FLP6" "#config#" "#FLP6#"][!Refresh *]
AntiAlias=1

[Folder6PathText]
meter = string
Meterstyle = textstyle
Text="#FLP6#"
x=20r
y=1r

;Folder Shortcut 7================

[Folder7TitleLabel]
meter=string
meterstyle=labelstyle
text = Folder Name
x=115
y=54r

[Folder7TextBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=1r
y=16r
ButtonCommand=!CommandMeasure "MeasureFolder" "ExecuteBatch 7"
AntiAlias=1

[Folder7TitleText]
Meter = string
MeterStyle=TextStyle
Text="#FLN7#"
x=20r
y=1r

[Folder7PathLabel]
meter=string
MeterStyle=labelstyle
text = Folder Path
x=140r
y=-17r

[Folder7PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\Textbackground.png
x=1r
y=16r
ButtonCommand=["#@#Addons\RainFile\RainFile.exe" "Folder" "Variables" "FLP7" "#config#" "#FLP7#"][!Refresh *]
AntiAlias=1

[Folder7PathText]
meter = string
Meterstyle = textstyle
Text="#FLP7#"
x=20r
y=1r
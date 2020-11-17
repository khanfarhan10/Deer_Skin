[Variables]

; --------------------General--------------------

;default=8,8,15
MainColor=8,8,15

;default=3,90,200
SecondColor=3,90,200

;default=170,170,170
ThirdColor=170,170,170

;default=200
Transparency=20

Filled=0,0,0
Transparent=0,0,0,0

;default=B612 Mono
;Font=Source Code Pro
;Font=Roboto Mono
Font=B612 Mono

FontSizeXXL=40
FontSizeXL=30
FontSizeL=20
FontSizeM=15
FontSizeS=10

;default=En
Language=En

@include=#@#General\Languages\#Language#.inc

; --------------------Settings--------------------

;default=322
S_Height=322

;default=572
S_Width=572

; --------------------Drives--------------------

;default=1
DriveCount=1

@include2=#@#Drives\VariablesDrive.inc

; --------------------Visualizer--------------------

;default=50
BarCount=50

;default=1
BarMinHeight=1

;default=200
BarHeight=200

;default=20
BarWidth=20

;default=10
BarGap=10

;default=0
BarRadius=0

;default=8,8,15
VisualizerColor=8,8,15

;default=200
VisualizerTransparency=200

; --------------------Weather--------------------

;Find your location code: https://weather.com/. The code will be in the URL, as example: https://weather.com/weather/today/l/[LOCATION]
Location=652bf144592eeaf1762eaea1df736dee65d9d279a498beaf217ed34657dc8c50

;Fahrenheit = "TempUnit=F"
;Celcius = "TempUnit=M"
TempUnit=M

; --------------------Cutout--------------------

;Place cutout in here: @Resources\Cutout
Cutout=Nature.png

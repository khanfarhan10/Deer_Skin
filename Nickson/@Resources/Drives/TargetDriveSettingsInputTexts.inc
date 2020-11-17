[MeasureDrive1]
Measure=Plugin
Plugin=InputText
X=[MeterDrive1Value:X]
Y=[MeterDrive1Value:Y]
H=[MeterDrive1Value:H]
W=[MeterDrive1Value:W]
AntiAlias=1
DefaultValue=#Drive1#
FontColor=170,170,170
FontFace=B612 Mono
FontSize=15
SolidColor=3,90,200
Command1=[!WriteKeyValue Variables Drive1 "$UserInput$" "C:\Users\20nic\Documents\Rainmeter\Skins\Nickson\@Resources\Drives\VariablesDrive.inc"][!Refresh][!Refresh "Nickson\Drives\Drive1"]

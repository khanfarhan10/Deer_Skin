[MeterDrive1Label]
Meter=String
Container=ContainerDrive1
MeterStyle=StyleLabel
Text=#LabelDrive# 1

[MeterDrive1Value]
Meter=String
X=140R
Container=ContainerDrive1
MeterStyle=StyleValueSmall
Text=#Drive1#
LeftMouseUpAction=[!CommandMeasure MeasureDrive1 "ExecuteBatch ALL"]


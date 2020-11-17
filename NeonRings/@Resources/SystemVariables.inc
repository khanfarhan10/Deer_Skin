; =============================
; Neon Rings System Styles
; =============================

[Variables]
; Ring diameter
XX=100
YY=100
RAD=70
UDiam=#XX#,#YY#,#RAD#
CircleLineStart=(#RAD#-2)
CircleLineLength=(#RAD#+2)

; Colours
None=0,0,0,0
White=255,255,255
OffWhite=#White#,245
Translucent=#White#,170
GlowColor1=255,10,160
GlowColor2=65,190,255


; STYLES

; Glowing rings
[GlowStyle1]
Shape=Ellipse #UDiam# | Fill Color #None# | StrokeWidth 6 | Stroke LinearGradient Gradient1
Shape2=Ellipse #UDiam# | StrokeWidth 8 | Extend Rings1
Shape3=Ellipse #UDiam# | StrokeWidth 10 | Extend Rings1
Shape4=Ellipse #UDiam# | StrokeWidth 12 | Extend Rings1
Shape5=Ellipse #UDiam# | StrokeWidth 14 | Extend Rings1
Shape6=Ellipse #UDiam# | StrokeWidth 16 | Extend Rings1
Shape7=Ellipse #UDiam# | StrokeWidth 18 | Extend Rings1
Shape8=Ellipse #UDiam# | StrokeWidth 20 | Extend Rings1
Shape9=Ellipse #UDiam# | StrokeWidth 22 | Extend Rings1
Shape10=Ellipse #UDiam# | StrokeWidth 24 | Extend Rings1
Shape11=Ellipse #UDiam# | StrokeWidth 26 | Extend Rings1
Rings1=Fill Color #None# | Stroke LinearGradient Gradient2
Gradient1=270 | #GlowColor1#,80 ; 0.0 | #GlowColor2#,80 ; 1.0
Gradient2=270 | #GlowColor1#,20 ; 0.0 | #GlowColor2#,20 ; 1.0
AntiAlias=1

; Reverse colour glowing rings
[GlowStyle2]
Shape=Ellipse #UDiam# | Fill Color #None# | StrokeWidth 6 | Stroke LinearGradient Gradient3
Shape2=Ellipse #UDiam# | StrokeWidth 8 | Extend Rings2
Shape3=Ellipse #UDiam# | StrokeWidth 10 | Extend Rings2
Shape4=Ellipse #UDiam# | StrokeWidth 12 | Extend Rings2
Shape5=Ellipse #UDiam# | StrokeWidth 14 | Extend Rings2
Shape6=Ellipse #UDiam# | StrokeWidth 16 | Extend Rings2
Shape7=Ellipse #UDiam# | StrokeWidth 18 | Extend Rings2
Shape8=Ellipse #UDiam# | StrokeWidth 20 | Extend Rings2
Shape9=Ellipse #UDiam# | StrokeWidth 22 | Extend Rings2
Shape10=Ellipse #UDiam# | StrokeWidth 24 | Extend Rings2
Shape11=Ellipse #UDiam# | StrokeWidth 26 | Extend Rings2
Rings2=Fill Color #None# | Stroke LinearGradient Gradient4
Gradient3=90 | #GlowColor1#,80 ; 0.0 | #GlowColor2#,80 ; 1.0
Gradient4=90 | #GlowColor1#,20 ; 0.0 | #GlowColor2#,20 ; 1.0
AntiAlias=1

; White background ring for glowing style
[CircleBgGlowStyle]
Shape=Ellipse #UDiam# | Fill Color #None# | StrokeWidth 2 | Stroke Color #Translucent#
AntiAlias=1

; Gradient coloured background ring for non-glowing style
[CircleBgSolidStyle1]
Shape=Ellipse #UDiam# | Fill Color #None# | StrokeWidth 4 | Stroke LinearGradient Gradient5
Gradient5=270 | #GlowColor1# ; 0.0 | #GlowColor2# ; 1.0
AntiAlias=1

; Reverse coloured background ring for non-glowing style
[CircleBgSolidStyle2]
Shape=Ellipse #UDiam# | Fill Color #None# | StrokeWidth 4 | Stroke LinearGradient Gradient6
Gradient6=90 | #GlowColor1# ; 0.0 | #GlowColor2# ; 1.0
AntiAlias=1

; Measuring circle, follows percentage value
[CircleStyle]
;W=#CanvasSize#
;H=#CanvasSize#
X=#XX#
Y=#YY#
StartAngle=(Rad(270))
RotationAngle=(Rad(360))
LineStart=#CircleLineStart#
LineLength=#CircleLineLength#
Solid=1
LineColor=#OffWhite#
AntiAlias=1

; Name label (e.g. "CPU", "RAM", etc.)
[LabelStyle]
FontFace=LEMON MILK
FontSize=26
FontColor=#White#
FontWeight=500
InlineSetting=CharacterSpacing | 6 | 6
X=#XX#
Y=#YY#
StringAlign=CenterCenter
AntiAlias=1

; Percentage value label
[PercentStyle]
FontFace=Aquatico
FontSize=10
FontColor=#White#
FontWeight=500
InlineSetting=CharacterSpacing | 2 | 2
X=#XX#
Y=(#YY#+(#RAD#*0.75))
StringAlign=CenterCenter
AntiAlias=1

; Free gigabytes label (if enabled)
[GigsStyle]
FontFace=Aquatico
FontSize=10
FontColor=#White#
FontWeight=500
InlineSetting=CharacterSpacing | 2 | 2
X=#XX#
Y=-5r
StringAlign=CenterCenter
AntiAlias=1
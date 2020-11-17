; =============================
; Neon Rings Weather Styles
; =============================

[Variables]

; Image Variables.
ImagePath=#@#Images\WeatherIcons

; Symbol Variables
Degrees=°

; Colours
None=0,0,0,0
GlowColor1=255,10,160
GlowColor2=65,190,255
Pink=255,10,160,255
Blue=65,190,255,255
White=255,255,255
OffWhite=#White#,200
Translucent=#White#,170
Grey=230,230,230,190
DarkGrey=80,80,80,190
LGrey=200,200,200,100

; Main ring diameter
RAD=50
XX=150
YY=150

; Forecast ring diameters
YY2=(#YY#+175)
YY3=(#YY2#+120)
YY4=(#YY3#+120)
YY5=(#YY4#+120)
YY6=(#YY5#+120)
RAD2=(#RAD#/2)
Diam1=#XX#,#YY2#,#RAD2#
Diam2=#XX#,#YY3#,#RAD2#
Diam3=#XX#,#YY4#,#RAD2#
Diam4=#XX#,#YY5#,#RAD2#
Diam5=#XX#,#YY6#,#RAD2#

; Rain position
XXR=(#XX#-((#RAD2#-5)/2))

; Sunrise
Width=(#RAD#*1.5)
Height=(#RAD#/2)
Xorigin=(#XX#-(#RAD#*0.75))
Yorigin=(#YY#-(#RAD#*0.25))
Ycorner=(#YY#-(#RAD#*0.75))
SXorigin=50
SYorigin=100
Xend=(#XX#+(#RAD#*0.75))
Yend=(#YY#-(#RAD#*0.25))
Xrad=#RAD#
Yrad=(#RAD#*1.5)


; ================
; STYLES
; ================

; Main style
[MeterMainStyle]
StringAlign=CenterCenter
FontColor=#White#
FontSize=10
FontFace=LEMON MILK
InlineSetting=CharacterSpacing | 1 | 1
AntiAlias=1

; Glow for main ring
[GlowMainStyle]
Shape=Ellipse #XX#,#YY#,#RAD# | Fill Color #None# | StrokeWidth 6 | Stroke LinearGradient Gradient1
Shape2=Ellipse #XX#,#YY#,#RAD# | StrokeWidth 8 | Extend Rings3
Shape3=Ellipse #XX#,#YY#,#RAD# | StrokeWidth 10 | Extend Rings3
Shape4=Ellipse #XX#,#YY#,#RAD# | StrokeWidth 12 | Extend Rings3
Shape5=Ellipse #XX#,#YY#,#RAD# | StrokeWidth 14 | Extend Rings3
Shape6=Ellipse #XX#,#YY#,#RAD# | StrokeWidth 16 | Extend Rings3
Shape7=Ellipse #XX#,#YY#,#RAD# | StrokeWidth 18 | Extend Rings3
Shape8=Ellipse #XX#,#YY#,#RAD# | StrokeWidth 20 | Extend Rings3
Shape9=Ellipse #XX#,#YY#,#RAD# | StrokeWidth 22 | Extend Rings3
Shape10=Ellipse #XX#,#YY#,#RAD# | StrokeWidth 24 | Extend Rings3
Shape11=Ellipse #XX#,#YY#,#RAD# | StrokeWidth 26 | Extend Rings3
Rings3=Fill Color #None# | Stroke LinearGradient Gradient2
Gradient1=270 | #GlowColor1#,80 ; 0.0 | #GlowColor2#,80 ; 1.0
Gradient2=270 | #GlowColor1#,20 ; 0.0 | #GlowColor2#,20 ; 1.0
AntiAlias=1

; Glow for forecast rings
[GlowForecastStyle]
Rings4=Fill Color #None# | Stroke LinearGradient Gradient1
Rings5=Fill Color #None# | Stroke LinearGradient Gradient2
Gradient1=270 | #GlowColor1#,80 ; 0.0 | #GlowColor2#,80 ; 1.0
Gradient2=270 | #GlowColor1#,20 ; 0.0 | #GlowColor2#,20 ; 1.0
AntiAlias=1

; White background ring
[GlowHighlightStyle]
Highlight=Fill Color #None# | StrokeWidth 2 | Stroke Color #Translucent#
AntiAlias=1

; Day styles
[ForecastLabel]
StringAlign=CenterCenter
X=#XX#
FontFace=LEMON MILK
FontSize=9
FontColor=#White#,220
InlineSetting=CharacterSpacing | 1 | 1
DynamicVariables=1
StringEffect=None
FontEffectColor=#GlowColor1#,100
AntiAlias=1

[ForecastIconStyle]
H=30
X=(#XX#-15)
ImagePath=#ImagePath#\
ImageTint=#White#,220
AntiAlias=1

[ForecastHighStyle]
X=((#XX#-#RAD2#)+20)
FontFace=LEMON MILK
FontSize=8
FontColor=#GlowColor1#
InlineSetting=CharacterSpacing | 0 | 1
StringAlign=CenterCenter
AntiAlias=1

[ForecastLowStyle]
X=((#XX#+#RAD2#)-20)
FontFace=LEMON MILK
FontSize=8
FontColor=#GlowColor2#
InlineSetting=CharacterSpacing | 1 | 0
StringAlign=CenterCenter
AntiAlias=1

[RainBarStyle]
X=#XXR#
W=(#RAD2#-5)
H=3
BarColor=#GlowColor2#,255
SolidColor=#LGrey#,255
BarOrientation=Horizontal

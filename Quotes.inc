; Automatically Generated File - please do not edit
[QuoteStockSymbol1]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=[MeasureStockName1]
ToolTipType=1
ToolTipTitle=#stock1#
ToolTipIcon=Info
ToolTipText=[MeasureStockName1] #CRLF#[MeasureStockURL1]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL1]"]
[QuoteStockPrice1]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice1
[UpDownSteady1]
Measure=Calc
Formula=MeasureStockPriceChange1
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange1" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer1" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_1" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange1" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer1" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_1" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange1" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer1" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_1" "ImageName" "#@#Down.png"]

[UpDownImage_1]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange1]
MeasureName=MeasureStockPriceChange1
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer1]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent1:/1,2]%)

[QuoteStockSymbol2]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=[MeasureStockName2]
ToolTipType=1
ToolTipTitle=#stock2#
ToolTipIcon=Info
ToolTipText=[MeasureStockName2] #CRLF#[MeasureStockURL2]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL2]"]
[QuoteStockPrice2]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice2
[UpDownSteady2]
Measure=Calc
Formula=MeasureStockPriceChange2
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange2" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer2" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_2" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange2" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer2" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_2" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange2" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer2" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_2" "ImageName" "#@#Down.png"]

[UpDownImage_2]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange2]
MeasureName=MeasureStockPriceChange2
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer2]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent2:/1,2]%)

[QuoteStockSymbol3]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=[MeasureStockName3]
ToolTipType=1
ToolTipTitle=#stock3#
ToolTipIcon=Info
ToolTipText=[MeasureStockName3] #CRLF#[MeasureStockURL3]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL3]"]
[QuoteStockPrice3]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice3
[UpDownSteady3]
Measure=Calc
Formula=MeasureStockPriceChange3
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange3" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer3" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_3" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange3" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer3" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_3" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange3" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer3" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_3" "ImageName" "#@#Down.png"]

[UpDownImage_3]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange3]
MeasureName=MeasureStockPriceChange3
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer3]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent3:/1,2]%)

[QuoteStockSymbol4]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=[MeasureStockName4]
ToolTipType=1
ToolTipTitle=#stock4#
ToolTipIcon=Info
ToolTipText=[MeasureStockName4] #CRLF#[MeasureStockURL4]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL4]"]
[QuoteStockPrice4]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice4
[UpDownSteady4]
Measure=Calc
Formula=MeasureStockPriceChange4
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange4" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer4" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_4" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange4" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer4" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_4" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange4" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer4" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_4" "ImageName" "#@#Down.png"]

[UpDownImage_4]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange4]
MeasureName=MeasureStockPriceChange4
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer4]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent4:/1,2]%)

[QuoteStockSymbol5]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=[MeasureStockName5]
ToolTipType=1
ToolTipTitle=#stock5#
ToolTipIcon=Info
ToolTipText=[MeasureStockName5] #CRLF#[MeasureStockURL5]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL5]"]
[QuoteStockPrice5]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice5
[UpDownSteady5]
Measure=Calc
Formula=MeasureStockPriceChange5
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange5" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer5" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_5" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange5" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer5" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_5" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange5" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer5" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_5" "ImageName" "#@#Down.png"]

[UpDownImage_5]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange5]
MeasureName=MeasureStockPriceChange5
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer5]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent5:/1,2]%)

[QuoteStockSymbol6]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=[MeasureStockName6]
ToolTipType=1
ToolTipTitle=#stock6#
ToolTipIcon=Info
ToolTipText=[MeasureStockName6] #CRLF#[MeasureStockURL6]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL6]"]
[QuoteStockPrice6]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice6
[UpDownSteady6]
Measure=Calc
Formula=MeasureStockPriceChange6
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange6" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer6" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_6" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange6" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer6" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_6" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange6" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer6" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_6" "ImageName" "#@#Down.png"]

[UpDownImage_6]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange6]
MeasureName=MeasureStockPriceChange6
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer6]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent6:/1,2]%)

[QuoteStockSymbol7]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=[MeasureStockName7]
ToolTipType=1
ToolTipTitle=#stock7#
ToolTipIcon=Info
ToolTipText=[MeasureStockName7] #CRLF#[MeasureStockURL7]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL7]"]
[QuoteStockPrice7]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice7
[UpDownSteady7]
Measure=Calc
Formula=MeasureStockPriceChange7
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange7" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer7" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_7" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange7" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer7" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_7" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange7" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer7" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_7" "ImageName" "#@#Down.png"]

[UpDownImage_7]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange7]
MeasureName=MeasureStockPriceChange7
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer7]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent7:/1,2]%)

[QuoteStockSymbol8]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=[MeasureStockName8]
ToolTipType=1
ToolTipTitle=#stock8#
ToolTipIcon=Info
ToolTipText=[MeasureStockName8] #CRLF#[MeasureStockURL8]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL8]"]
[QuoteStockPrice8]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice8
[UpDownSteady8]
Measure=Calc
Formula=MeasureStockPriceChange8
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange8" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer8" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_8" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange8" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer8" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_8" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange8" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer8" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_8" "ImageName" "#@#Down.png"]

[UpDownImage_8]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange8]
MeasureName=MeasureStockPriceChange8
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer8]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent8:/1,2]%)

[QuoteStockSymbol9]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=[MeasureStockName9]
ToolTipType=1
ToolTipTitle=#stock9#
ToolTipIcon=Info
ToolTipText=[MeasureStockName9] #CRLF#[MeasureStockURL9]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL9]"]
[QuoteStockPrice9]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice9
[UpDownSteady9]
Measure=Calc
Formula=MeasureStockPriceChange9
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange9" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer9" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_9" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange9" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer9" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_9" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange9" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer9" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_9" "ImageName" "#@#Down.png"]

[UpDownImage_9]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange9]
MeasureName=MeasureStockPriceChange9
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer9]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent9:/1,2]%)

[QuoteStockSymbol10]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=[MeasureStockName10]
ToolTipType=1
ToolTipTitle=#stock10#
ToolTipIcon=Info
ToolTipText=[MeasureStockName10] #CRLF#[MeasureStockURL10]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL10]"]
[QuoteStockPrice10]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice10
[UpDownSteady10]
Measure=Calc
Formula=MeasureStockPriceChange10
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange10" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer10" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_10" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange10" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer10" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_10" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange10" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer10" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_10" "ImageName" "#@#Down.png"]

[UpDownImage_10]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange10]
MeasureName=MeasureStockPriceChange10
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer10]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent10:/1,2]%)

[QuoteStockSymbol11]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=[MeasureStockName11]
ToolTipType=1
ToolTipTitle=#stock11#
ToolTipIcon=Info
ToolTipText=[MeasureStockName11] #CRLF#[MeasureStockURL11]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL11]"]
[QuoteStockPrice11]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice11
[UpDownSteady11]
Measure=Calc
Formula=MeasureStockPriceChange11
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange11" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer11" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_11" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange11" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer11" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_11" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange11" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer11" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_11" "ImageName" "#@#Down.png"]

[UpDownImage_11]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange11]
MeasureName=MeasureStockPriceChange11
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer11]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent11:/1,2]%)

[QuoteStockSymbol12]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=[MeasureStockName12]
ToolTipType=1
ToolTipTitle=#stock12#
ToolTipIcon=Info
ToolTipText=[MeasureStockName12] #CRLF#[MeasureStockURL12]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL12]"]
[QuoteStockPrice12]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice12
[UpDownSteady12]
Measure=Calc
Formula=MeasureStockPriceChange12
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange12" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer12" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_12" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange12" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer12" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_12" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange12" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer12" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_12" "ImageName" "#@#Down.png"]

[UpDownImage_12]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange12]
MeasureName=MeasureStockPriceChange12
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer12]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent12:/1,2]%)

[QuoteStockSymbol13]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=[MeasureStockName13]
ToolTipType=1
ToolTipTitle=#stock13#
ToolTipIcon=Info
ToolTipText=[MeasureStockName13] #CRLF#[MeasureStockURL13]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL13]"]
[QuoteStockPrice13]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice13
[UpDownSteady13]
Measure=Calc
Formula=MeasureStockPriceChange13
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange13" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer13" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_13" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange13" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer13" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_13" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange13" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer13" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_13" "ImageName" "#@#Down.png"]

[UpDownImage_13]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange13]
MeasureName=MeasureStockPriceChange13
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer13]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent13:/1,2]%)

[QuoteStockSymbol14]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=[MeasureStockName14]
ToolTipType=1
ToolTipTitle=#stock14#
ToolTipIcon=Info
ToolTipText=[MeasureStockName14] #CRLF#[MeasureStockURL14]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL14]"]
[QuoteStockPrice14]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice14
[UpDownSteady14]
Measure=Calc
Formula=MeasureStockPriceChange14
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange14" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer14" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_14" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange14" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer14" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_14" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange14" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer14" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_14" "ImageName" "#@#Down.png"]

[UpDownImage_14]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange14]
MeasureName=MeasureStockPriceChange14
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer14]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent14:/1,2]%)

[QuoteStockSymbol15]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=[MeasureStockName15]
ToolTipType=1
ToolTipTitle=#stock15#
ToolTipIcon=Info
ToolTipText=[MeasureStockName15] #CRLF#[MeasureStockURL15]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL15]"]
[QuoteStockPrice15]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice15
[UpDownSteady15]
Measure=Calc
Formula=MeasureStockPriceChange15
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange15" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer15" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_15" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange15" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer15" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_15" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange15" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer15" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_15" "ImageName" "#@#Down.png"]

[UpDownImage_15]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange15]
MeasureName=MeasureStockPriceChange15
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer15]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent15:/1,2]%)

[QuoteStockSymbol16]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=[MeasureStockName16]
ToolTipType=1
ToolTipTitle=#stock16#
ToolTipIcon=Info
ToolTipText=[MeasureStockName16] #CRLF#[MeasureStockURL16]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL16]"]
[QuoteStockPrice16]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice16
[UpDownSteady16]
Measure=Calc
Formula=MeasureStockPriceChange16
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange16" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer16" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_16" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange16" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer16" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_16" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange16" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer16" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_16" "ImageName" "#@#Down.png"]

[UpDownImage_16]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange16]
MeasureName=MeasureStockPriceChange16
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer16]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent16:/1,2]%)

[QuoteStockSymbol17]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=[MeasureStockName17]
ToolTipType=1
ToolTipTitle=#stock17#
ToolTipIcon=Info
ToolTipText=[MeasureStockName17] #CRLF#[MeasureStockURL17]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL17]"]
[QuoteStockPrice17]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice17
[UpDownSteady17]
Measure=Calc
Formula=MeasureStockPriceChange17
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange17" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer17" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_17" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange17" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer17" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_17" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange17" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer17" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_17" "ImageName" "#@#Down.png"]

[UpDownImage_17]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange17]
MeasureName=MeasureStockPriceChange17
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer17]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent17:/1,2]%)

[QuoteStockSymbol18]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=[MeasureStockName18]
ToolTipType=1
ToolTipTitle=#stock18#
ToolTipIcon=Info
ToolTipText=[MeasureStockName18] #CRLF#[MeasureStockURL18]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL18]"]
[QuoteStockPrice18]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice18
[UpDownSteady18]
Measure=Calc
Formula=MeasureStockPriceChange18
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange18" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer18" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_18" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange18" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer18" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_18" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange18" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer18" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_18" "ImageName" "#@#Down.png"]

[UpDownImage_18]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange18]
MeasureName=MeasureStockPriceChange18
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer18]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent18:/1,2]%)

[QuoteStockSymbol19]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=AUD [\x00BB] USD
ToolTipType=1
ToolTipTitle=#stock19#
ToolTipIcon=Info
ToolTipText=[MeasureStockName19] #CRLF#[MeasureStockURL19]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL19]"]
[QuoteStockPrice19]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice19
[UpDownSteady19]
Measure=Calc
Formula=MeasureStockPriceChange19
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange19" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer19" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_19" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange19" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer19" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_19" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange19" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer19" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_19" "ImageName" "#@#Down.png"]

[UpDownImage_19]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange19]
MeasureName=MeasureStockPriceChange19
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer19]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent19:/1,2]%)

[QuoteStockSymbol20]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=USD [\x00BB] AUD
ToolTipType=1
ToolTipTitle=#stock20#
ToolTipIcon=Info
ToolTipText=[MeasureStockName20] #CRLF#[MeasureStockURL20]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL20]"]
[QuoteStockPrice20]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice20
[UpDownSteady20]
Measure=Calc
Formula=MeasureStockPriceChange20
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange20" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer20" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_20" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange20" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer20" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_20" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange20" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer20" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_20" "ImageName" "#@#Down.png"]

[UpDownImage_20]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange20]
MeasureName=MeasureStockPriceChange20
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer20]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent20:/1,2]%)

[QuoteStockSymbol21]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=AUD [\x00BB] JPY
ToolTipType=1
ToolTipTitle=#stock21#
ToolTipIcon=Info
ToolTipText=[MeasureStockName21] #CRLF#[MeasureStockURL21]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL21]"]
[QuoteStockPrice21]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice21
[UpDownSteady21]
Measure=Calc
Formula=MeasureStockPriceChange21
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange21" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer21" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_21" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange21" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer21" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_21" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange21" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer21" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_21" "ImageName" "#@#Down.png"]

[UpDownImage_21]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange21]
MeasureName=MeasureStockPriceChange21
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer21]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent21:/1,2]%)

[QuoteStockSymbol22]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=JPY [\x00BB] AUD
ToolTipType=1
ToolTipTitle=#stock22#
ToolTipIcon=Info
ToolTipText=[MeasureStockName22] #CRLF#[MeasureStockURL22]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL22]"]
[QuoteStockPrice22]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice22
[UpDownSteady22]
Measure=Calc
Formula=MeasureStockPriceChange22
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange22" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer22" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_22" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange22" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer22" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_22" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange22" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer22" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_22" "ImageName" "#@#Down.png"]

[UpDownImage_22]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange22]
MeasureName=MeasureStockPriceChange22
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer22]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent22:/1,2]%)

[QuoteStockSymbol23]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=AUD [\x00BB] NZD
ToolTipType=1
ToolTipTitle=#stock23#
ToolTipIcon=Info
ToolTipText=[MeasureStockName23] #CRLF#[MeasureStockURL23]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL23]"]
[QuoteStockPrice23]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice23
[UpDownSteady23]
Measure=Calc
Formula=MeasureStockPriceChange23
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange23" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer23" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_23" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange23" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer23" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_23" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange23" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer23" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_23" "ImageName" "#@#Down.png"]

[UpDownImage_23]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange23]
MeasureName=MeasureStockPriceChange23
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer23]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent23:/1,2]%)

[QuoteStockSymbol24]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=NZD [\x00BB] AUD
ToolTipType=1
ToolTipTitle=#stock24#
ToolTipIcon=Info
ToolTipText=[MeasureStockName24] #CRLF#[MeasureStockURL24]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL24]"]
[QuoteStockPrice24]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice24
[UpDownSteady24]
Measure=Calc
Formula=MeasureStockPriceChange24
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange24" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer24" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_24" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange24" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer24" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_24" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange24" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer24" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_24" "ImageName" "#@#Down.png"]

[UpDownImage_24]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange24]
MeasureName=MeasureStockPriceChange24
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer24]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent24:/1,2]%)

[QuoteStockSymbol25]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=AUD [\x00BB] GBP
ToolTipType=1
ToolTipTitle=#stock25#
ToolTipIcon=Info
ToolTipText=[MeasureStockName25] #CRLF#[MeasureStockURL25]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL25]"]
[QuoteStockPrice25]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice25
[UpDownSteady25]
Measure=Calc
Formula=MeasureStockPriceChange25
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange25" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer25" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_25" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange25" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer25" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_25" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange25" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer25" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_25" "ImageName" "#@#Down.png"]

[UpDownImage_25]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange25]
MeasureName=MeasureStockPriceChange25
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer25]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent25:/1,2]%)

[QuoteStockSymbol26]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=GBP [\x00BB] AUD
ToolTipType=1
ToolTipTitle=#stock26#
ToolTipIcon=Info
ToolTipText=[MeasureStockName26] #CRLF#[MeasureStockURL26]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL26]"]
[QuoteStockPrice26]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice26
[UpDownSteady26]
Measure=Calc
Formula=MeasureStockPriceChange26
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange26" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer26" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_26" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange26" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer26" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_26" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange26" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer26" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_26" "ImageName" "#@#Down.png"]

[UpDownImage_26]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange26]
MeasureName=MeasureStockPriceChange26
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer26]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent26:/1,2]%)

[QuoteStockSymbol27]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=[MeasureStockName27]
ToolTipType=1
ToolTipTitle=#stock27#
ToolTipIcon=Info
ToolTipText=[MeasureStockName27] #CRLF#[MeasureStockURL27]
DynamicVariables=1
LeftMouseUpAction=!Execute ["[MeasureStockURL27]"]
[QuoteStockPrice27]
Meter=STRING
MeterStyle= sTextRight | sColorSet1
x=#Col2XPos#
MeasureName=MeasureStockPrice27
[UpDownSteady27]
Measure=Calc
Formula=MeasureStockPriceChange27
IfAboveValue=0
IfAboveAction=[!SetOption "LabelChange27" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer27" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_27" "ImageName" "#@#Up.png"]
IfEqualValue=0
IfEqualAction=[!SetOption "LabelChange27" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer27" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_27" "ImageName" "#@#Steady.png"]
IfBelowValue=0
IfBelowAction=[!SetOption "LabelChange27" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer27" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_27" "ImageName" "#@#Down.png"]

[UpDownImage_27]
Meter=Image
ImageName=#@#Steady.png
x=#Col3XPos#
y=1r
Group=2
[LabelChange27]
MeasureName=MeasureStockPriceChange27
Meter=STRING
MeterStyle= sTextRight 
FontColor=#ColorSteady#
x=#Col4XPos#
Text=%1
[LabelChangePer27]
Meter=STRING
MeterStyle=sTextRight 
FontColor=#ColorSteady#
x=#Col5XPos#
Text=([MeasureStockPriceChangePerCent27:/1,2]%)


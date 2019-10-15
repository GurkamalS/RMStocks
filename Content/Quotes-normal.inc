; Automatically Generated File - please do not edit
[QuoteStockSymbol1]
Meter=STRING
MeterStyle=sTextLeft
ClipString=2
W=#Col1Width#
H=#Col1Height#
X=#Col1XPos#
Y=0R
Text=#stock1#
ToolTipType=1
ToolTipTitle=#stock1#
ToolTipIcon=Info
ToolTipText=[MeasureStockName1] #CRLF#https://www.google.com/finance?q=#stock1# #CRLF#Last Update: [MeasureStockUpdateTime1]
DynamicVariables=1
LeftMouseUpAction=["https://www.google.com/finance?q=#stock1#]
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
Text=#stock2#
ToolTipType=1
ToolTipTitle=#stock2#
ToolTipIcon=Info
ToolTipText=[MeasureStockName2] #CRLF#https://www.google.com/finance?q=#stock2# #CRLF#Last Update: [MeasureStockUpdateTime2]
DynamicVariables=1
LeftMouseUpAction=["https://www.google.com/finance?q=#stock2#]
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
Text=#stock3#
ToolTipType=1
ToolTipTitle=#stock3#
ToolTipIcon=Info
ToolTipText=[MeasureStockName3] #CRLF#https://www.google.com/finance?q=#stock3# #CRLF#Last Update: [MeasureStockUpdateTime3]
DynamicVariables=1
LeftMouseUpAction=["https://www.google.com/finance?q=#stock3#]
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
Text=#stock4#
ToolTipType=1
ToolTipTitle=#stock4#
ToolTipIcon=Info
ToolTipText=[MeasureStockName4] #CRLF#https://www.google.com/finance?q=#stock4# #CRLF#Last Update: [MeasureStockUpdateTime4]
DynamicVariables=1
LeftMouseUpAction=["https://www.google.com/finance?q=#stock4#]
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
Text=#stock5#
ToolTipType=1
ToolTipTitle=#stock5#
ToolTipIcon=Info
ToolTipText=[MeasureStockName5] #CRLF#https://www.google.com/finance?q=#stock5# #CRLF#Last Update: [MeasureStockUpdateTime5]
DynamicVariables=1
LeftMouseUpAction=["https://www.google.com/finance?q=#stock5#]
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
Text=#stock6#
ToolTipType=1
ToolTipTitle=#stock6#
ToolTipIcon=Info
ToolTipText=[MeasureStockName6] #CRLF#https://www.google.com/finance?q=#stock6# #CRLF#Last Update: [MeasureStockUpdateTime6]
DynamicVariables=1
LeftMouseUpAction=["https://www.google.com/finance?q=#stock6#]
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
Text=#stock7#
ToolTipType=1
ToolTipTitle=#stock7#
ToolTipIcon=Info
ToolTipText=[MeasureStockName7] #CRLF#https://www.google.com/finance?q=#stock7# #CRLF#Last Update: [MeasureStockUpdateTime7]
DynamicVariables=1
LeftMouseUpAction=["https://www.google.com/finance?q=#stock7#]
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
Text=#stock8#
ToolTipType=1
ToolTipTitle=#stock8#
ToolTipIcon=Info
ToolTipText=[MeasureStockName8] #CRLF#https://www.google.com/finance?q=#stock8# #CRLF#Last Update: [MeasureStockUpdateTime8]
DynamicVariables=1
LeftMouseUpAction=["https://www.google.com/finance?q=#stock8#]
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
Text=#stock9#
ToolTipType=1
ToolTipTitle=#stock9#
ToolTipIcon=Info
ToolTipText=[MeasureStockName9] #CRLF#https://www.google.com/finance?q=#stock9# #CRLF#Last Update: [MeasureStockUpdateTime9]
DynamicVariables=1
LeftMouseUpAction=["https://www.google.com/finance?q=#stock9#]
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
Text=#stock10#
ToolTipType=1
ToolTipTitle=#stock10#
ToolTipIcon=Info
ToolTipText=[MeasureStockName10] #CRLF#https://www.google.com/finance?q=#stock10# #CRLF#Last Update: [MeasureStockUpdateTime10]
DynamicVariables=1
LeftMouseUpAction=["https://www.google.com/finance?q=#stock10#]
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
Text=#stock11#
ToolTipType=1
ToolTipTitle=#stock11#
ToolTipIcon=Info
ToolTipText=[MeasureStockName11] #CRLF#https://www.google.com/finance?q=#stock11# #CRLF#Last Update: [MeasureStockUpdateTime11]
DynamicVariables=1
LeftMouseUpAction=["https://www.google.com/finance?q=#stock11#]
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
Text=#stock12#
ToolTipType=1
ToolTipTitle=#stock12#
ToolTipIcon=Info
ToolTipText=[MeasureStockName12] #CRLF#https://www.google.com/finance?q=#stock12# #CRLF#Last Update: [MeasureStockUpdateTime12]
DynamicVariables=1
LeftMouseUpAction=["https://www.google.com/finance?q=#stock12#]
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
Text=#stock13#
ToolTipType=1
ToolTipTitle=#stock13#
ToolTipIcon=Info
ToolTipText=[MeasureStockName13] #CRLF#https://www.google.com/finance?q=#stock13# #CRLF#Last Update: [MeasureStockUpdateTime13]
DynamicVariables=1
LeftMouseUpAction=["https://www.google.com/finance?q=#stock13#]
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
Text=#stock14#
ToolTipType=1
ToolTipTitle=#stock14#
ToolTipIcon=Info
ToolTipText=[MeasureStockName14] #CRLF#https://www.google.com/finance?q=#stock14# #CRLF#Last Update: [MeasureStockUpdateTime14]
DynamicVariables=1
LeftMouseUpAction=["https://www.google.com/finance?q=#stock14#]
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
Text=#stock15#
ToolTipType=1
ToolTipTitle=#stock15#
ToolTipIcon=Info
ToolTipText=[MeasureStockName15] #CRLF#https://www.google.com/finance?q=#stock15# #CRLF#Last Update: [MeasureStockUpdateTime15]
DynamicVariables=1
LeftMouseUpAction=["https://www.google.com/finance?q=#stock15#]
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


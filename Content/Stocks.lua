function Initialize()
	VariantWidth = SKIN:GetVariable('Variant', 'Ticker')-- can be Ticker, Stocks, or Wide
	end

	numStocks = 0
	numUpdates = 0
	local i = 0
	Stocks = ReadStocks()
--	numStocks = 8 -- for testing

	while i < numStocks do
		i = i + 1
		SKIN:Bang('!SetVariable', 'Stock'..i, Stocks[i])
--		print('Assigning variable Stock'..i..' = '..Stocks[i])
	end
	SKIN:Bang('!SetVariable', 'NumberOfStocks', numStocks)

	WriteMeasures()
	WriteQuotes()--improve this

end -- function Initialize

function Update()
numUpdates = numUpdates + 1
	SKIN:Bang('!SetVariable', 'NumUpdates', numUpdates)
end -- function Update

function ReadStocks()
	local FileP = SKIN:MakePathAbsolute('@Resources\\Stocks.txt')--oops, I had moved it.
--	print('Reading Stocks file at ' ..FileP )

	local File = io.open(FileP, 'r')
	if not File then
		print('ReadFile: unable to open file at ' ..FileP )
		return
	end


	local contents = {}
	for Line in File:lines() do
		if Line ~= '' then
			table.insert(contents, Line)
			numStocks = numStocks + 1
		end
	end

	File:close()
	print('ReadStocks(): Read in '..numStocks..' stocks from file '..FilePath..'.')
	return(contents)
end

function WriteMeasures()

	local i = 0
	local FilePath = SKIN:MakePathAbsolute('@Resources\\Measures.inc')--Don't move that either

	-- OPEN FILE
	print('WriteMeasures: Opening file for writing at '..FilePath)
	local f = io.open(FilePath, 'w')

	-- ERROR CHECKING
	if not f then
		error print('WriteMeasures: Unable to open file at '..FilePath)
		return
	end


	f:write('; Automatically Generated File - please do not edit. Refer to the lua\n')
	while i < numStocks do
		i = i + 1
		f:write('\n')
		f:write('[MeasureStock'..i..']\n')
		f:write('Measure=Plugin\n')
		f:write('Plugin=Plugins\\WebParser.dll\n')-- see note below
		f:write('!Delay 5000\n')
--		f:write('Debug=2\n')
		f:write('URL='..i..'#\n')-- google api prvents standard calls. Remove that, switch to iex
--		f:write('RegExp=(?siU).*<meta itemprop="name".*content="(.*)".*<meta itemprop="url".*content="(.*)".*<meta itemprop="price".*content="(.*)".*<meta itemprop="priceChange".*content="(.*)".*<meta itemprop="priceChangePercent".*content="(.*)".*\n')
--
		f:write('UpdateRate=100\n')--iex api allows far faster updates
		f:write('DynamicVariables=1\n')
-- Stock 'long' name
		f:write('[MeasureStockName'..i..']\n')
		f:write('Measure=Plugin\n')
		f:write('Plugin=Plugins\\WebParser.dll\n')-- is this even necessary? New rainmeter standards preclude this
		f:write('URL=[MeasureStock'..i..']\n')
		f:write('StringIndex=1\n')
-- Stock price
		f:write('[MeasureStockPrice'..i..']\n')
		f:write('Measure=Plugin\n')
		f:write('Plugin=Plugins\\WebParser.dll\n')--see note above
		f:write('URL=[MeasureStock'..i..']\n')
		f:write('StringIndex=2\n')
-- Stock price change
		f:write('[MeasureStockPriceChange'..i..']\n')
		f:write('Measure=Plugin\n')
		f:write('Plugin=Plugins\\WebParser.dll\n')
		f:write('URL=[MeasureStock'..i..']\n')
		f:write('StringIndex=3\n')
-- Stock price change percent
		f:write('[MeasureStockPriceChangePerCent'..i..']\n')
		f:write('Measure=Plugin\n')
		f:write('Plugin=Plugins\\WebParser.dll\n')
		f:write('URL=[MeasureStock'..i..']\n')--IEX doesn't offer intraday, and how should this respond when the market is closed?
		f:write('StringIndex=4\n')
-- Stock last update time
		f:write('[MeasureStockUpdateTime'..i..']\n')
		f:write('Measure=Plugin\n')
		f:write('Plugin=Plugins\\WebParser.dll\n')
		f:write('URL=[MeasureStock'..i..']\n')
		f:write('StringIndex=5\n')
	end
	f:close()
end

function WriteQuotes()

	local i = 0
	local currency = 0-- 0 is USD
	local FilePath

	VariantWidth = SKIN:GetVariable('Variant', 'Normal')
	end


local FilePath = SKIN:MakePathAbsolute('@Resources\\Quotes.inc')

	-- OPEN FILE
	print('WriteQuotes Opening file for writing at '..FilePath)
	local f = io.open(FilePath, 'w')

	-- ERROR CHECKING
	if not f then
		print('WriteQuotes: Unable to open file at '..FilePath)
		return
	end


	f:write('; Automatically Generated File - please do not edit\n')
	while i < numStocks do
		i = i + 1
		f:write('[QuoteStockSymbol'..i..']\n')
		f:write('Meter=STRING\n')
		f:write('MeterStyle=sTextLeft\n')
		f:write('ClipString=2\n')
		f:write('W=#Col1Width#\n')
		f:write('H=#Col1Height#\n')
		f:write('X=#Col1XPos#\n')
		f:write('Y=0R\n')

		currency = 0
		currency = string.find(Stocks[i], 'CURRENCY:', 1, plain)
		if currency == 1 then
			f:write('Text='..string.sub(Stocks[i],10, 12)..' [\\x00BB] '..string.sub(Stocks[i],-3)..'\n')

		else
			if string.find (VariantWidth, 'Wide', 1, plain) then
				f:write('Text=[MeasureStockName'..i..']\n')
			else
				f:write('Text=#stock'..i..'#\n')
			end
		end
--		f:write('Text=[MeasureStockName'..i..']\n')
		f:write('ToolTipType=1\n')
		f:write('ToolTipTitle=#stock'..i..'#\n')
		f:write('ToolTipIcon=Info\n')
		f:write('ToolTipText=[MeasureStockName'..i..'] #CRLF#https://www.google.com/finance?q=#stock'..i..'# #CRLF#Last Update: [MeasureStockUpdateTime'..i..']\n')
		f:write('DynamicVariables=1\n')
		f:write('LeftMouseUpAction=["https://www.google.com/finance?q=#stock'..i..'#]\n')
		f:write('[QuoteStockPrice'..i..']\n')
		f:write('Meter=STRING\n')
		f:write('MeterStyle= sTextRight | sColorSet1\n')
		f:write('x=#Col2XPos#\n')
		f:write('MeasureName=MeasureStockPrice'..i..'\n')
		f:write('[UpDownSteady'..i..']\n')
		f:write('Measure=Calc\n')
		f:write('Formula=MeasureStockPriceChange'..i..'\n')
		f:write('IfAboveValue=0\n')
		f:write('IfAboveAction=[!SetOption "LabelChange'..i..'" "FontColor" "#ColorUp#"] [!SetOption "LabelChangePer'..i..'" "FontColor" "#ColorUp#"] [!SetOption "UpDownImage_'..i..'" "ImageName" "#@#Up.png"]\n')
		f:write('IfEqualValue=0\n')
		f:write('IfEqualAction=[!SetOption "LabelChange'..i..'" "FontColor" "#ColorSteady#"] [!SetOption "LabelChangePer'..i..'" "FontColor" "#ColorSteady#"][!SetOption "UpDownImage_'..i..'" "ImageName" "#@#Steady.png"]\n')
		f:write('IfBelowValue=0\n')
		f:write('IfBelowAction=[!SetOption "LabelChange'..i..'" "FontColor" "#ColorDown#"] [!SetOption "LabelChangePer'..i..'" "FontColor" "#ColorDown#"] [!SetOption "UpDownImage_'..i..'" "ImageName" "#@#Down.png"]\n')
		f:write('\n')
		f:write('[UpDownImage_'..i..']\n')
		f:write('Meter=Image\n')
		f:write('ImageName=#@#Steady.png\n')
		f:write('x=#Col3XPos#\n')
		f:write('y=1r\n')
		f:write('Group=2\n')
		f:write('[LabelChange'..i..']\n')
		f:write('MeasureName=MeasureStockPriceChange'..i..'\n')
		f:write('Meter=STRING\n')
		f:write('MeterStyle= sTextRight \n')
		f:write('FontColor=#ColorSteady#\n')
		f:write('x=#Col4XPos#\n')
		f:write('Text=%1\n')
		f:write('[LabelChangePer'..i..']\n')
		f:write('Meter=STRING\n')
		f:write('MeterStyle=sTextRight \n')
		f:write('FontColor=#ColorSteady#\n')
		f:write('x=#Col5XPos#\n')
		f:write('Text=([MeasureStockPriceChangePerCent'..i..':/1,2]%)\n')
		f:write('\n')
	end
	f:close()

end

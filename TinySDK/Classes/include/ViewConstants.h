//
//  ViewConstants.h
//  Breeze
//
//  Created by  on 12-7-18.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#pragma mark -
#pragma mark hsml
static NSString * const tTml			=	@"tml";
static NSString * const aTmlCacheID	=	@"id";
static NSString * const aTmlCache		=	@"cache";
static NSString * const vTrue			=	@"true";
static NSString * const vFalse			=	@"false";

#pragma mark head
static NSString * const tHead			=	@"head";

#pragma mark style
static NSString * const tStyle			=	@"style";
static NSString * const aStyleSrc		=	@"src";
static NSString * const aStyleHref		=	@"href";


#pragma mark script
static NSString * const tScript			=	@"script";
static NSString * const aScriptType     =   @"type";

#pragma mark include
static NSString * const tInclude		=	@"include";
static NSString * const aFile           =	@"file";

#pragma mark -
#pragma mark common attribute
static NSString * const aCommonID		=	@"id";
static NSString * const aCommonName		=	@"name";
static NSString * const aCommonStyle	=	@"style";
static NSString * const aCommonClass	=	@"class";
static NSString * const aCurrentPage	=	@"currentPage";



//control
#pragma mark -
#pragma mark label
static NSString * const tLabel			=	@"label";
static NSString * const aLabelValue		=	@"value";
#pragma mark radio
static NSString *const tRadio           =   @"radio";

#pragma mark checkBox
static NSString *const tCheckBox        =   @"checkbox";
#pragma mark video
static NSString *const tVideo           =   @"video";

#pragma mark photopgraph
static NSString * const tWaterMarkImage			=	@"watermarkimage";


#pragma mark text
static NSString * const tText			=	@"text";
static NSString * const tRichText		=	@"richtext";
static NSString * const aCommonTitle = @"title";


#pragma mark button
static NSString * const tButton			=	@"button";
static NSString * const aButtonOnclick	=	@"onclick";
static NSString * const aBadge          =	@"badge";

#pragma mark image
static NSString * const tImage			=	@"img";
static NSString * const aImageSrc		=	@"src";
static NSString * const aImageType		=	@"type";
static NSString * const aImageTypeAffix	=	@"affix";
static NSString * const aImageZoom		=	@"zoom";

#pragma mark input
static NSString * const tInput			=	@"input";
static NSString * const aValue			=	@"value";
static NSString * const aTip			=	@"tip";
static NSString * const aInputType		=	@"type";
static NSString * const aInputRegex		=	@"regex";
static NSString * const aInputTypePassword	=	@"password";
static NSString * const aPasswordLength   = @"length";
static NSString * const aPasswordDivider   = @"divider";
static NSString * const aPasswordShowDone   = @"showDone";



static NSString * const aInputTypeStrength	=	@"strength";
static NSString * const aInputTypeEmail	=	@"email";
static NSString * const aInputTypeMobile=	@"mobile";
static const int aInputTypeMobileLength	=	11;

static const int nInputTypeMobileTag    =   0x10000004;
static const int nInputTypePasswordTag    =   0x80000001;

static NSString * const aInputTypeCard	=	@"card";
static const int nInputTypeCardTag		=	0x10000001;
static const int aInputTypeCardLength	=	18;
static NSString * const aInputTypeDigital=	@"digital";
static NSString * const aRequired		=	@"required";
static NSString * const aDisable		=	@"disable";
static NSString * const aEncrypt		=	@"encrypt";
static NSString * const aModulus        =	@"modulus";
static NSString * const aExponent       =	@"exponent";
static NSString * const aShowClearButton   =	@"showClearButton";



static NSString * const wInputDefault	=	@"                    ";//20 blank

static NSString * const tNumber			=	@"number";
static const int nNumberInputTag		=	0x10000002;
static NSString * const tPassword		=	@"password";
static NSString * const tAmount		    =	@"amount";
static NSString * const aRange          =   @"range";

static const int nInputTypeDigitalTag		=	0x10000003;

#pragma mark xselect
static NSString * const tXselect		=	@"xselect";
static NSString * const aXselectSrc     =	@"ds";
static NSString * const aCaption        =	@"caption";

static NSString * const aMaxLength		=	@"maxLength";
static NSString * const aMinLength		=	@"minlen";

static NSString * const aMaxValue		=	@"max";
static NSString * const aMinValue		=	@"min";


#pragma mark switch
static NSString * const tSwitch			=	@"switch";

#pragma mark select
static NSString * const tSelect			=	@"select";
static NSString * const tIselect		=	@"iselect";
static NSString * const tOption			=	@"option";
static NSString * const tCaption		=	@"caption";
static NSString * const tDate			=	@"date";


static NSString * const tWebView		=	@"webview";
static NSString * const tPaging			=	@"paging";
static NSString * const tSegment		=	@"segment";
static NSString * const tChart			=	@"chart";
static NSString * const tMenu			=	@"menu";
static NSString * const tSlider			=	@"slider";
static NSString* const tMap				=	@"map";
static NSString* const tPhotograph      =	@"photograph";


static NSString * const tPop			=	@"popmenu";
static NSString * const tItem			=	@"item";
//container
#pragma mark -
#pragma mark div
static NSString *const tXML             = @"xml";
static NSString * const tBody			=	@"body";
static NSString * const tDiv			=	@"div";
static NSString * const tVbox			=	@"vbox";
static NSString * const tHbox			=	@"hbox";
static NSString * const tVPanel			=	@"vpanel";
static NSString * const tHPanel			=	@"hpanel";

static NSString * const tGroup			=	@"group";

#pragma mark form
static NSString * const tForm			=	@"form";

#pragma mark iframe
static NSString * const tIFrame			=	@"iframe";
static NSString * const aIFrameSrc		=	@"src";

#pragma mark span
static NSString * const tSpan			=	@"span";

#pragma mark table
static NSString * const tTable			=	@"table";
static NSString * const tTh				=	@"th";
static NSString * const tTr				=	@"tr";
static NSString * const tTd				=	@"td";
static NSString * const aTdColspan		=	@"colspan";

#pragma mark mapview
static NSString * const tMapView		=	@"mapview";
static NSString * const aLocation		=	@"showuserlocation";
static NSString * const tLocation       =   @"location";
static NSString * const tShowLocation       =   @"showLocation";


#pragma mark -
#pragma mark event
static NSString * const aOnChange		=	@"onchange";
static NSString * const aOnClose		=	@"onclose";
static NSString * const aOnOpen			=	@"onopen";
static NSString * const aOnClick		=	@"onclick";
static NSString	* const aOnFocus		=	@"onfocus";
static NSString * const aOnBlur			=	@"onblur";
static NSString * const aOnTextChange   =	@"onTextChange";
static NSString * const aOnLoad			=	@"onload";
static NSString * const aLoad		    =	@"load";
static NSString * const aOnDidAppear	=	@"onDidAppear";
static NSString * const aDidAppear		=	@"didAppear";

static NSString * const aOnUnload		=	@"onunload";
static NSString * const aOnTop			=	@"ontop";
static NSString * const aOnBottom		=	@"onbottom";
static NSString * const aOnLeft			=	@"onleft";
static NSString * const aOnRight		=	@"onright";
static NSString * const aOnShake		=	@"onshake";
static NSString * const aOnLocated		=	@"onlocated";
static NSString * const aOnSlideLeft	=	@"onslideleft";
static NSString * const aOnSlideRight	=	@"onslideright";
static NSString * const aOpenKeyBoard   =   @"openKeyBoard";
static NSString * const aCloseKeyBoard   =   @"closeKeyBoard";


#pragma mark citic
static NSString * const tTextarea		=	@"textarea";
static NSString * const tPwdmod			=	@"pwdmod";
static NSString * const tMaplonglat		=	@"maplonglat";
static NSString * const tShmap			=	@"shmap";
static NSString * const tBankmap		=	@"bankmap";
static NSString * const tScrollmenu		=	@"scrollmenu";
static NSString * const tQuicklogin		=	@"quicklogin";
static NSString * const aInputsecu		=	@"securepass";
static NSString * const aInputinte		=	@"integer";

#pragma mark embed
static NSString * const tEmbed          =   @"embed";
static NSString * const tWidget          =   @"widget";
static NSString * const aClassid        =   @"classid";
static NSString * const aType        =   @"type";


#pragma mark shark_sound
static NSString * const aShakeSound        =   @"shake_sound";
#pragma mark function
static NSString *const kJSFunction        =    @"function";
static NSString * const kOnChange         =    @"onchange";
static NSString * const aClick		      =	   @"click";
static NSString * const aChange           =    @"change";
static NSString * const aPaged           =    @"paged";
static NSString * const aSlideable           =    @"slideable";
static NSString * const aScrollBar           =    @"scrollBar";
static NSString * const aDraw		      =	   @"draw";
static NSString * const aTop		      =	   @"top";
static NSString * const aBottom		      =	   @"bottom";
static NSString * const aSelect		      =	   @"select";
static NSString * const aTouchScale           =    @"touchScale";
static NSString * const aGesture           =    @"gesture";
static NSString * const aScale           =    @"scale";




static NSString * const kScroll           =    @"scroll";
static NSString * const ablur		      =	   @"blur";
static NSString * const aTextChange		  =	   @"textChange";
static NSString * const aTextShouldChange		  =	   @"textShouldChange";
static NSString * const afocus		      =	   @"focus";
static NSString * const aTouchesBegan		      =	   @"touchesBegan";
static NSString * const aTouchesMove		      =	   @"touchesMove";
static NSString * const aFling		              =	   @"fling";
static NSString * const aScroll		              =	   @"scroll";
static NSString * const aTouchesEnd		      =	   @"touchesEnd";
static NSString * const aLongPress		      =	   @"longPress";
static NSString * const aTouchUp		      =	   @"touchUp";
static NSString * const aScrolling		      =	   @"scrolling";
static NSString * const aScrollsToTop		      =	   @"scrollsToTop";



#pragma mark scaleType
static NSString * const aScaleType = @"scaleType";
static NSString * const aScaleTypeFitX = @"fitX";
static NSString * const aScaleTypeFitY = @"fitY";
static NSString * const aScaleTypeFitXY = @"fitXY";
static NSString * const aScaleTypeFitCenter = @"fitCenter";


#pragma mark list
static NSString * const tList           = @"list";
static NSString * const tTemplate       = @"template";
static NSString * const tRefreshTop     = @"refreshTop";
static NSString * const tRefreshBottom  = @"refreshBottom";
static NSString * const tStart          = @"start";
static NSString * const tLoading        = @"loading";
static NSString * const tListHead       = @"listHead";


#pragma mark TinyFrame
static NSString * const cFrame = @"TFrame";
static NSString * const cFNavigator = @"TFNavigator";
static NSString * const cFPage = @"TFPage";
static NSString * const cFTabBar = @"TFTabBar";
static NSString * const cFTab = @"TFTab";
static NSString * const cFDrawer = @"TFDrawer";
static NSString * const cFSideBar = @"TFSideBar";

static NSString * const tFrame = @"frame";
static NSString * const tFNavigator = @"navigator";
static NSString * const tFPage = @"page";
static NSString * const tFTabBar = @"tabBar";
static NSString * const tFTab = @"tab";
static NSString * const tFDrawer  = @"drawer";
static NSString * const tFSideBar  = @"sideBar";

#pragma mark Widget
static NSString * const tCalendar = @"calendar";
static NSString * const tTYCalendar = @"TYCalendar";
static NSString * const tCalendarVertical = @"calendarVertical";
static NSString * const tTYMapView = @"TYMapView";
static NSString * const tTYDatalist = @"TYDatalist";
static NSString * const tTYDataTable = @"TYDataTable";
static NSString * const tTYPaging = @"TYPaging";


static NSString * const tDatalist = @"datalist";
static NSString * const tDataTable = @"datatable";

static NSString * const tPHPasswordTextChange = @"PHPasswordTextChange";
static NSString * const tPHPassword = @"PHPassword";
static NSString * const tPHPasswordFocus = @"PHPasswordFocus";
static NSString * const tPHPasswordBlur = @"PHPasswordBlur";









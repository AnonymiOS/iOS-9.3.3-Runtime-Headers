/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:14 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor, UIFont;

@interface StocksStyle : NSObject {

	UIColor* _chartHighlightColor;
	UIFont* _mainFont;
	UIFont* _chartLabelFont;

}
+(id)sharedStyle;
-(id)init;
-(void)resetLocale;
-(id)fontOfSize:(double)arg1 ;
-(id)gainColor;
-(id)lossColor;
-(id)chartHighlightColor;
-(id)lightFontOfSize:(double)arg1 ;
-(id)mediumFontOfSize:(double)arg1 ;
-(id)boldFontOfSize:(double)arg1 ;
@end


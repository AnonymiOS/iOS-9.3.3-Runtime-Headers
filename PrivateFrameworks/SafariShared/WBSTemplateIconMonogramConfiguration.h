/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:20 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@class UIColor;

@interface WBSTemplateIconMonogramConfiguration : NSObject {

	double _fontSize;
	long long _fontWeight;
	double _baselineOffset;
	UIColor* _backgroundColor;
	double _cornerRadius;
	CGSize _iconSize;

}

@property (assign,nonatomic) CGSize iconSize;                        //@synthesize iconSize=_iconSize - In the implementation block
@property (assign,nonatomic) double fontSize;                        //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) long long fontWeight;                   //@synthesize fontWeight=_fontWeight - In the implementation block
@property (assign,nonatomic) double baselineOffset;                  //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) double cornerRadius;                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
+(id)configurationWithBackgroundColor:(id)arg1 ;
+(id)configurationWithIconSize:(CGSize)arg1 fontSize:(double)arg2 fontWeight:(long long)arg3 baselineOffset:(double)arg4 backgroundColor:(id)arg5 cornerRadius:(double)arg6 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(double)baselineOffset;
-(void)setBaselineOffset:(double)arg1 ;
-(void)setFontSize:(double)arg1 ;
-(void)setFontWeight:(long long)arg1 ;
-(double)fontSize;
-(long long)fontWeight;
-(void)setIconSize:(CGSize)arg1 ;
-(CGSize)iconSize;
@end


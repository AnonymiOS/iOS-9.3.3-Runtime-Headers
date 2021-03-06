/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface VTUIStyle : NSObject {

	NSArray* _deviceStringSuffixes;
	NSArray* _deviceImageSuffixes;
	NSString* _deviceClass;
	BOOL _isIpad;
	BOOL _needMoreLineSpacing;
	BOOL _isBuddy;
	BOOL _isHeySiriAlwaysOn;
	long long _enrollmentMode;

}

@property (assign,nonatomic) long long enrollmentMode;              //@synthesize enrollmentMode=_enrollmentMode - In the implementation block
@property (assign,nonatomic) BOOL isBuddy;                          //@synthesize isBuddy=_isBuddy - In the implementation block
@property (assign,nonatomic) BOOL isHeySiriAlwaysOn;                //@synthesize isHeySiriAlwaysOn=_isHeySiriAlwaysOn - In the implementation block
+(id)sharedStyle;
-(void)dealloc;
-(id)init;
-(double)horizontalPadding;
-(id)subtitleFont;
-(BOOL)isBuddy;
-(double)subtitleLineHeight;
-(void)orientationChanged:(id)arg1 ;
-(id)buttonTextColor;
-(void)setIsBuddy:(BOOL)arg1 ;
-(BOOL)isHeySiriAlwaysOn;
-(void)setEnrollmentMode:(long long)arg1 ;
-(id)headerTitleFont;
-(id)VTUIDeviceSpecificString:(id)arg1 ;
-(double)flamesHeight;
-(double)skipButtonBaselineBottomMargin;
-(double)statusLabelVerticalOffsetFromCenter;
-(double)statusLabelMinHeight;
-(double)tickMarkHorizontalSizeRatio;
-(double)radarBtnVerticalPadding;
-(double)radarBtnHorizontalPadding;
-(long long)enrollmentMode;
-(id)deviceDoneImage;
-(id)continueButtonFont;
-(BOOL)footerShouldPinToImage;
-(double)titleBaselineOffsetFromTop;
-(double)subtitle1BaselineOffset;
-(double)subtitle2BaselineOffset;
-(double)continueButtonBaselineOffset;
-(double)imageViewTopOffset;
-(double)imageViewBottomOffsetFromFooter;
-(BOOL)shouldShowFooterLine;
-(id)footerButtonFont;
-(double)footerButtonBaselineFromFooterTop;
-(id)footerTextColor;
-(id)footerLabelFont;
-(double)footerTextBaselineOffsetFromButton;
-(double)footerTextBaselineFromBottom;
-(double)footerHorizontalPadding;
-(id)deviceSetupImage;
-(double)headerTitleLinespacing;
-(void)_createStringSuffixesForDevice;
-(void)_createImageSuffixesForDevice;
-(id)_deviceImageForBaseImageName:(id)arg1 ;
-(double)footerLabelLineHeight;
-(void)setIsHeySiriAlwaysOn:(BOOL)arg1 ;
@end


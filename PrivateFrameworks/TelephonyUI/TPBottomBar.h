/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@interface TPBottomBar : UIView {

	long long _orientation;
	long long _style;

}
+(double)defaultHeight;
+(double)defaultHeightForStyle:(long long)arg1 ;
+(double)defaultHeightForStyle:(long long)arg1 orientation:(long long)arg2 ;
+(long long)fullscreenStyle;
+(long long)overlayStyle;
+(double)defaultHeightForOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(id)initWithDefaultSize;
-(id)initWithDefaultSizeForOrientation:(long long)arg1 ;
-(void)setOrientation:(long long)arg1 updateFrame:(BOOL)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@class UIBezierPath, UIColor;

@interface TPPathView : UIView {

	UIBezierPath* _path;
	UIColor* _fillColor;

}

@property (nonatomic,retain) UIBezierPath * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(UIBezierPath *)path;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)setPath:(UIBezierPath *)arg1 ;
@end


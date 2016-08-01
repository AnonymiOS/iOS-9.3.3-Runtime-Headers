/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompassUI/CompassUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface CalibrationBallView : UIView {

	double _currentAngle;
	UIView* _ballView;
	double _ballRadius;
	double _trackRadius;

}

@property (assign,nonatomic) double trackRadius;                                //@synthesize trackRadius=_trackRadius - In the implementation block
@property (assign,nonatomic) double ballRadius;                                 //@synthesize ballRadius=_ballRadius - In the implementation block
@property (assign,setter=setAngle:,nonatomic) double currentAngle;              //@synthesize currentAngle=_currentAngle - In the implementation block
-(void)layoutSubviews;
-(void)setAngle:(double)arg1 ;
-(id)ballView;
-(id)initWithFrame:(CGRect)arg1 ballRadius:(double)arg2 ;
-(void)setBallRadius:(double)arg1 ;
-(void)setTrackRadius:(double)arg1 ;
-(double)ballRadius;
-(double)trackRadius;
-(double)currentAngle;
@end


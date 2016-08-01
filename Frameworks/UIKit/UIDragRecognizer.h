/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:45 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class UITouch, UIDelayedAction;

@interface UIDragRecognizer : UIGestureRecognizer {

	double _maximumDeviation;
	double _minimumDistance;
	CGPoint _startPosition;
	BOOL _restrictsToAngle;
	double _angle;
	UITouch* _touch;
	UIDelayedAction* _tooSlow;
	double _startAngle;
	double _quietPeriod;
	BOOL _canBeginDrag;
	SEL _checkCanBeginDrag;
	UIDelayedAction* ignoreTouch;

}

@property (assign,nonatomic) BOOL restrictsToAngle;                      //@synthesize restrictsToAngle=_restrictsToAngle - In the implementation block
@property (assign,nonatomic) double angle;                               //@synthesize angle=_angle - In the implementation block
@property (assign,nonatomic) double maximumDeviation;                    //@synthesize maximumDeviation=_maximumDeviation - In the implementation block
@property (assign,nonatomic) double minimumDistance;                     //@synthesize minimumDistance=_minimumDistance - In the implementation block
@property (assign,nonatomic) CGPoint startPosition;                      //@synthesize startPosition=_startPosition - In the implementation block
@property (assign,nonatomic) double startAngle;                          //@synthesize startAngle=_startAngle - In the implementation block
@property (nonatomic,retain) UITouch * touch;                            //@synthesize touch=_touch - In the implementation block
@property (assign,nonatomic) double quietPeriod;                         //@synthesize quietPeriod=_quietPeriod - In the implementation block
@property (assign,nonatomic) BOOL canBeginDrag;                          //@synthesize canBeginDrag=_canBeginDrag - In the implementation block
@property (assign,nonatomic) SEL checkCanBeginDrag;                      //@synthesize checkCanBeginDrag=_checkCanBeginDrag - In the implementation block
@property (nonatomic,retain) UIDelayedAction * ignoreTouch; 
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)startPosition;
-(UITouch *)touch;
-(void)setTouch:(UITouch *)arg1 ;
-(void)_resetGestureRecognizer;
-(void)setCanBeginDrag:(BOOL)arg1 ;
-(void)setMinimumDistance:(double)arg1 ;
-(void)setMaximumDeviation:(double)arg1 ;
-(void)setQuietPeriod:(double)arg1 ;
-(void)setCheckCanBeginDrag:(SEL)arg1 ;
-(void)clearTimer;
-(void)tooSlow:(id)arg1 ;
-(void)setRestrictsToAngle:(BOOL)arg1 ;
-(void)setAngle:(double)arg1 ;
-(void)clearIgnoreTouch;
-(UIDelayedAction *)ignoreTouch;
-(void)setIgnoreTouch:(UIDelayedAction *)arg1 ;
-(void)setStartPosition:(CGPoint)arg1 ;
-(double)quietPeriod;
-(double)angle;
-(double)minimumDistance;
-(BOOL)restrictsToAngle;
-(double)maximumDeviation;
-(SEL)checkCanBeginDrag;
-(BOOL)canBeginDrag;
-(void)setStartAngle:(double)arg1 ;
-(double)startAngle;
@end


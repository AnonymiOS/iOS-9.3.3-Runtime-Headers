/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:44 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UITouch, UIEvent;

@interface UIGestureDelayedTouch : NSObject <NSCopying> {

	UITouch* _touch;
	UITouch* _stateWhenDelayed;
	UITouch* _stateWhenDelivered;
	UIEvent* _event;
	long long _delayCount;
	BOOL _cloneForSecondDelivery;

}

@property (retain) UITouch * touch;                           //@synthesize touch=_touch - In the implementation block
@property (retain) UITouch * stateWhenDelayed;                //@synthesize stateWhenDelayed=_stateWhenDelayed - In the implementation block
@property (retain) UITouch * stateWhenDelivered;              //@synthesize stateWhenDelivered=_stateWhenDelivered - In the implementation block
@property (retain) UIEvent * event;                           //@synthesize event=_event - In the implementation block
@property (assign) BOOL cloneForSecondDelivery;               //@synthesize cloneForSecondDelivery=_cloneForSecondDelivery - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIEvent *)event;
-(void)setEvent:(UIEvent *)arg1 ;
-(UITouch *)touch;
-(void)setTouch:(UITouch *)arg1 ;
-(void)setStateWhenDelayed:(UITouch *)arg1 ;
-(BOOL)cloneForSecondDelivery;
-(long long)decrementDelayCount;
-(void)incrementDelayCount;
-(long long)delayCount;
-(void)saveCurrentTouchState;
-(long long)phaseForDelivery;
-(double)timestampForDelivery;
-(UITouch *)stateWhenDelayed;
-(UITouch *)stateWhenDelivered;
-(void)setStateWhenDelivered:(UITouch *)arg1 ;
-(void)setCloneForSecondDelivery:(BOOL)arg1 ;
@end


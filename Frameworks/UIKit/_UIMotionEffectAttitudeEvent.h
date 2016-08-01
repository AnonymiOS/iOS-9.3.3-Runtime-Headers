/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIMotionEffectEvent.h>

@interface _UIMotionEffectAttitudeEvent : _UIMotionEffectEvent {

	UIEdgeInsets _attitude;

}

@property (nonatomic,readonly) UIEdgeInsets attitude;              //@synthesize attitude=_attitude - In the implementation block
-(UIEdgeInsets)attitude;
-(double)velocityRelativeToPreviousEvent:(id)arg1 ;
-(id)copyWithTimestamp:(double)arg1 ;
-(id)initWithTimestamp:(double)arg1 attitude:(UIEdgeInsets)arg2 ;
@end


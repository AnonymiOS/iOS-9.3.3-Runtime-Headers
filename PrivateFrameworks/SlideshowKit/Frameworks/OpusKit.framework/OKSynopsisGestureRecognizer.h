/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:13 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPinchGestureRecognizer.h>

@interface OKSynopsisGestureRecognizer : UIPinchGestureRecognizer {

	double _lastScale;
	unsigned long long _currentType;
	id _target;
	SEL _action;
	unsigned long long _gestureType;

}

@property (nonatomic,readonly) double progress; 
@property (nonatomic,readonly) unsigned long long gestureType;              //@synthesize gestureType=_gestureType - In the implementation block
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(unsigned long long)gestureType;
-(double)progress;
-(BOOL)shouldCompleteGesture;
-(void)handle:(id)arg1 ;
@end


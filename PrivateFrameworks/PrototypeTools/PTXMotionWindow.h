/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTXMotionWindow : NSObject {

	double _radius;
	double _maxIncrease;
	long long _direction;
	double _effectiveRadius;
	double _center;
	double _upperLimit;
	double _lowerLimit;

}
-(void)reset;
-(double)mappedOffset:(double)arg1 ;
-(void)setIncreaseFactor:(double)arg1 fixingOffset:(double)arg2 ;
-(id)initWithRadius:(double)arg1 maxIncrease:(double)arg2 direction:(long long)arg3 ;
@end


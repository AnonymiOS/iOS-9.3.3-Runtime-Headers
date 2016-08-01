/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:14 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/OKActionPanExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface OKActionPan : OKAction <OKActionPanExports, NSSecureCoding> {

	unsigned long long _direction;
	CGPoint _translation;
	CGPoint _velocity;

}

@property (assign,nonatomic) CGPoint translation;                       //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) CGPoint velocity;                          //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic) unsigned long long direction;              //@synthesize direction=_direction - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)panActionWithState:(unsigned long long)arg1 location:(CGPoint)arg2 touchCount:(unsigned long long)arg3 translation:(CGPoint)arg4 velocity:(CGPoint)arg5 direction:(unsigned long long)arg6 context:(id)arg7 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setVelocity:(CGPoint)arg1 ;
-(CGPoint)velocity;
-(void)setDirection:(unsigned long long)arg1 ;
-(unsigned long long)direction;
-(CGPoint)translation;
-(void)setTranslation:(CGPoint)arg1 ;
@end


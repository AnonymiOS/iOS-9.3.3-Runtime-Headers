/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CUIStyleEffectConfiguration : NSObject <NSCopying> {

	long long _state;
	long long _presentationState;
	long long _value;
	BOOL _useSimplifiedEffect;
	BOOL _foregroundColorShouldTintEffects;

}

@property (assign,nonatomic) long long state;                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long presentationState;                        //@synthesize presentationState=_presentationState - In the implementation block
@property (assign,nonatomic) long long value;                                    //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL useSimplifiedEffect;                           //@synthesize useSimplifiedEffect=_useSimplifiedEffect - In the implementation block
@property (assign,nonatomic) BOOL foregroundColorShouldTintEffects;              //@synthesize foregroundColorShouldTintEffects=_foregroundColorShouldTintEffects - In the implementation block
-(BOOL)useSimplifiedEffect;
-(BOOL)shouldIgnoreForegroundColor;
-(BOOL)shouldRespectOutputBlending;
-(BOOL)foregroundColorShouldTintEffects;
-(void)setUseSimplifiedEffect:(BOOL)arg1 ;
-(id)init;
-(id)description;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(long long)value;
-(void)setValue:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setForegroundColorShouldTintEffects:(BOOL)arg1 ;
-(void)setPresentationState:(long long)arg1 ;
-(long long)presentationState;
@end


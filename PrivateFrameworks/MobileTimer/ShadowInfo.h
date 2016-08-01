/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:08 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileTimer/MobileTimer-Structs.h>
@class UIColor;

@interface ShadowInfo : NSObject {

	UIColor* _color;
	double _radius;
	double _scale;
	CGSize _offset;

}

@property (nonatomic,copy) UIColor * color;              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double radius;              //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) CGSize offset;              //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) double scale;               //@synthesize scale=_scale - In the implementation block
-(void)setScale:(double)arg1 ;
-(double)scale;
-(void)setOffset:(CGSize)arg1 ;
-(CGSize)offset;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(id)initWithColor:(id)arg1 radius:(double)arg2 offset:(CGSize)arg3 scale:(double)arg4 ;
@end


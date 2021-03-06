/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface MPUBorderConfiguration : NSObject <NSCopying> {

	double _borderAlpha;
	UIColor* _borderColor;
	double _borderWidth;
	double _fillAlpha;
	UIColor* _fillColor;
	double _dropShadowAlpha;
	UIColor* _dropShadowColor;
	unsigned long long _dropShadowEdges;
	double _dropShadowWidth;

}

@property (assign,nonatomic) double borderAlpha;                                             //@synthesize borderAlpha=_borderAlpha - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                          //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double borderWidth;                                             //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic) double fillAlpha;                                               //@synthesize fillAlpha=_fillAlpha - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                                            //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double dropShadowAlpha;                                         //@synthesize dropShadowAlpha=_dropShadowAlpha - In the implementation block
@property (nonatomic,retain) UIColor * dropShadowColor;                                      //@synthesize dropShadowColor=_dropShadowColor - In the implementation block
@property (assign,nonatomic) unsigned long long dropShadowEdges;                             //@synthesize dropShadowEdges=_dropShadowEdges - In the implementation block
@property (assign,nonatomic) double dropShadowWidth;                                         //@synthesize dropShadowWidth=_dropShadowWidth - In the implementation block
@property (getter=isFullyTransparent,nonatomic,readonly) BOOL fullyTransparent; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(UIColor *)borderColor;
-(double)borderWidth;
-(void)setDropShadowColor:(UIColor *)arg1 ;
-(void)setDropShadowEdges:(unsigned long long)arg1 ;
-(void)setDropShadowWidth:(double)arg1 ;
-(void)setFillAlpha:(double)arg1 ;
-(void)setBorderAlpha:(double)arg1 ;
-(BOOL)isFullyTransparent;
-(double)borderAlpha;
-(double)fillAlpha;
-(double)dropShadowAlpha;
-(void)setDropShadowAlpha:(double)arg1 ;
-(UIColor *)dropShadowColor;
-(unsigned long long)dropShadowEdges;
-(double)dropShadowWidth;
@end


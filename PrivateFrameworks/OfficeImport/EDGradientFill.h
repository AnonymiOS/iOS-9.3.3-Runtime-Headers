/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDFill.h>

@class NSMutableDictionary;

@interface EDGradientFill : EDFill {

	int mType;
	NSMutableDictionary* mStops;
	double mDegree;
	CGRect mFocusRect;

}
+(id)gradientWithType:(int)arg1 degree:(double)arg2 top:(double)arg3 bottom:(double)arg4 right:(double)arg5 left:(double)arg6 stops:(id)arg7 resources:(id)arg8 ;
+(id)gradientWithType:(int)arg1 degree:(double)arg2 focusRect:(CGRect)arg3 stops:(id)arg4 resources:(id)arg5 ;
-(id)initWithType:(int)arg1 degree:(double)arg2 top:(double)arg3 bottom:(double)arg4 right:(double)arg5 left:(double)arg6 stops:(id)arg7 resources:(id)arg8 ;
-(id)initWithType:(int)arg1 degree:(double)arg2 focusRect:(CGRect)arg3 stops:(id)arg4 resources:(id)arg5 ;
-(void)setType:(int)arg1 ;
-(void)setStops:(id)arg1 ;
-(void)setStopColor:(id)arg1 atPosition:(id)arg2 ;
-(void)setFocusRect:(CGRect)arg1 ;
-(void)setDegree:(double)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(id)stops;
-(id)initWithResources:(id)arg1 ;
-(BOOL)isEqualToGradientFill:(id)arg1 ;
-(double)degree;
-(CGRect)focusRect;
-(id)colorForStopAtPosition:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:57 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoBoothEffects/PhotoBoothEffects-Structs.h>
#import <PhotoBoothEffects/PBFilter.h>

@interface PBMirrorFilter : PBFilter {

	float lastInputX;
	float lastInputY;
	float lastInputAngle;
	BOOL firstTime;
	float inputOrientation;
	CGPoint inputPoint;

}

@property (assign) CGPoint inputPoint; 
@property (assign) float inputOrientation; 
-(CGPoint)inputPoint;
-(void)setInputPoint:(CGPoint)arg1 ;
-(void)setDefaults;
-(id)ciFilterName;
-(BOOL)needsWrapMirror;
-(void)applyParametersToCIFilter:(BOOL)arg1 extent:(CGRect)arg2 ;
-(void)setInputOrientation:(float)arg1 ;
-(float)inputOrientation;
@end


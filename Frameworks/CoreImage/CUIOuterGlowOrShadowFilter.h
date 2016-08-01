/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber, CIColor;

@interface CUIOuterGlowOrShadowFilter : CIFilter {

	CIImage* inputImage;
	CIVector* inputOffset;
	NSNumber* inputRange;
	NSNumber* inputRadius;
	NSNumber* inputSize;
	NSNumber* inputSpread;
	CIColor* inputColor;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputOffset; 
@property (nonatomic,retain) NSNumber * inputRange; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputSize; 
@property (nonatomic,retain) NSNumber * inputSpread; 
@property (nonatomic,retain) CIColor * inputColor; 
+(id)customAttributes;
-(id)_kernel;
-(NSNumber *)inputSize;
-(void)setInputSize:(NSNumber *)arg1 ;
-(void)setInputOffset:(CIVector *)arg1 ;
-(CIVector *)inputOffset;
-(void)setInputSpread:(NSNumber *)arg1 ;
-(NSNumber *)inputSpread;
-(void)setInputColor:(CIColor *)arg1 ;
-(CIColor *)inputColor;
-(id)outputImage;
-(NSNumber *)inputRange;
-(void)setInputRange:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(void)setDefaults;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputImage:(CIImage *)arg1 ;
@end


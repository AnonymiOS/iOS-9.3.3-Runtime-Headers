/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIColorClamp : CIFilter {

	CIImage* inputImage;
	CIVector* inputMinComponents;
	CIVector* inputMaxComponents;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputMinComponents; 
@property (nonatomic,retain) CIVector * inputMaxComponents; 
+(id)customAttributes;
-(id)_kernel;
-(CIVector *)inputMinComponents;
-(void)setInputMinComponents:(CIVector *)arg1 ;
-(CIVector *)inputMaxComponents;
-(void)setInputMaxComponents:(CIVector *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end


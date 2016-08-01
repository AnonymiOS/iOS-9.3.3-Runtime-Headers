/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/ImageRowReading.h>

@interface CIImageRowReader : NSObject <ImageRowReading> {

	unsigned long long height;
	unsigned long long width;
	unsigned long long bpr;
	void* data;
	short red;
	short green;
	short blue;
	short alpha;
	CGColorSpaceRef cs;

}
+(id)forImage:(id)arg1 usingContext:(id)arg2 ;
+(id)fromImage:(CGImageRef)arg1 ;
+(id)forImage:(id)arg1 downscaleToMax:(unsigned)arg2 colorspace:(CGColorSpaceRef)arg3 ;
+(id)forImage:(id)arg1 downscaleToMax:(unsigned)arg2 colorspace:(CGColorSpaceRef)arg3 usingContext:(id)arg4 ;
+(id)forImage:(id)arg1 usingContext:(id)arg2 colorspace:(CGColorSpaceRef)arg3 ;
+(id)fromImageFile:(id)arg1 ;
+(id)forImage:(id)arg1 downscaleToMax:(unsigned)arg2 ;
+(id)withDictionary:(id)arg1 ;
-(void)_dumpImage:(id)arg1 colorspace:(CGColorSpaceRef)arg2 ;
-(void)dumpImage:(id)arg1 ;
-(void)dumpImageAsDeviceRGB:(id)arg1 ;
-(void)dumpImageAsDict:(id)arg1 ;
-(void)dealloc;
-(short)alpha;
-(id)init;
-(unsigned long long)width;
-(unsigned long long)height;
-(short)red;
-(short)green;
-(short)blue;
-(unsigned)bytesPerPixel;
-(const char*)rowAtIndex:(unsigned)arg1 ;
@end


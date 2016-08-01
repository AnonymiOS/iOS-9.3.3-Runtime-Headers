/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIBurstYUVImage : NSObject {

	char* Ybuffer;
	char* Cbuffer;
	int width;
	int height;
	int bytesPerRow;
	CFDataRef dataPtr;
	CVBufferRef pixelBuffer;
	IOSurfaceRef ioSurf;

}

@property (assign) int width; 
@property (assign) int height; 
@property (assign) int bytesPerRow; 
@property (assign) char* Ybuffer; 
@property (assign) char* Cbuffer; 
-(id)initWithCGImage:(CGImageRef)arg1 maxDimension:(int)arg2 ;
-(char*)Ybuffer;
-(char*)Cbuffer;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 maxDimension:(int)arg2 ;
-(void)convertRGBAToYUV420:(char*)arg1 rgbaBytesPerRow:(int)arg2 ;
-(id)initWithCIImage:(id)arg1 ctx:(id)arg2 maxDimension:(int)arg3 ;
-(CVBufferRef)pixelBuffer;
-(void)setYbuffer:(char*)arg1 ;
-(void)setCbuffer:(char*)arg1 ;
-(void)dealloc;
-(int)width;
-(int)height;
-(void)setWidth:(int)arg1 ;
-(void)setHeight:(int)arg1 ;
-(void)setBytesPerRow:(int)arg1 ;
-(int)bytesPerRow;
@end


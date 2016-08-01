/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:25 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@interface CPImageObjectData : NSObject {

	CGImageRef _image;
	CGRect _boundsOnPage;

}

@property (retain) CGImageRef image;                 //@synthesize image=_image - In the implementation block
@property (assign) CGRect boundsOnPage;              //@synthesize boundsOnPage=_boundsOnPage - In the implementation block
+(id)imageObjectDataWithCGImage:(CGImageRef)arg1 andBounds:(CGRect)arg2 ;
-(void)setImage:(CGImageRef)arg1 ;
-(void)dealloc;
-(CGImageRef)image;
-(id)initWithCGImage:(CGImageRef)arg1 andBoundsOnPage:(CGRect)arg2 ;
-(void)setBoundsOnPage:(CGRect)arg1 ;
-(CGRect)boundsOnPage;
@end


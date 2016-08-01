/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:23 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@interface BLImagePatch : NSObject {

	CGImageRef _imageRef;
	CGImageRef _maskRef;
	CGRect _rect;

}
+(id)patchFromRect:(CGRect)arg1 inImage:(CGImageRef)arg2 ;
+(id)patchFromRect:(CGRect)arg1 inImage:(CGImageRef)arg2 withMask:(CGImageRef)arg3 ;
-(CGSize)size;
-(void)dealloc;
-(id)description;
-(CGImageRef)image;
-(CGPoint)origin;
-(CGRect)rect;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)initWithImageRef:(CGImageRef)arg1 andRect:(CGRect)arg2 andMask:(CGImageRef)arg3 ;
-(id)initWithImageRef:(CGImageRef)arg1 andRect:(CGRect)arg2 ;
-(void)translateOriginByPoint:(CGPoint)arg1 ;
@end


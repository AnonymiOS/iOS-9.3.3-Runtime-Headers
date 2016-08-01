/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIBurstFaceInfo : NSObject {

	int swFaceId;
	int swLastFrameSeen;
	int hwFaceId;
	int hwLastFrameSeen;
	CGPoint swCenter;
	CGSize swSize;
	CGPoint hwCenter;
	CGSize hwSize;

}

@property (assign) int swFaceId; 
@property (assign) CGPoint swCenter; 
@property (assign) CGSize swSize; 
@property (assign) int swLastFrameSeen; 
@property (assign) int hwFaceId; 
@property (assign) CGPoint hwCenter; 
@property (assign) CGSize hwSize; 
@property (assign) int hwLastFrameSeen; 
-(void)setSwFaceId:(int)arg1 ;
-(void)setSwCenter:(CGPoint)arg1 ;
-(void)setSwSize:(CGSize)arg1 ;
-(void)setSwLastFrameSeen:(int)arg1 ;
-(void)setHwFaceId:(int)arg1 ;
-(void)setHwCenter:(CGPoint)arg1 ;
-(void)setHwSize:(CGSize)arg1 ;
-(void)setHwLastFrameSeen:(int)arg1 ;
-(CGPoint)hwCenter;
-(CGSize)hwSize;
-(CGPoint)swCenter;
-(CGSize)swSize;
-(int)hwFaceId;
-(CGRect)hwFaceRect;
-(int)swFaceId;
-(CGRect)swFaceRect;
-(float)overlapWithHwRect:(CGRect)arg1 ;
-(float)overlapWithSwRect:(CGRect)arg1 ;
-(int)swLastFrameSeen;
-(int)hwLastFrameSeen;
-(id)init;
@end


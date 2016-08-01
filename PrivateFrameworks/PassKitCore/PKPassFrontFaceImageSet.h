/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassFrontFaceImageSet : PKPassImageSet {

	PKImage* _faceImage;
	CGRect _logoRect;
	CGRect _thumbnailRect;
	CGRect _stripRect;

}

@property (nonatomic,retain) PKImage * faceImage;               //@synthesize faceImage=_faceImage - In the implementation block
@property (assign,nonatomic) CGRect logoRect;                   //@synthesize logoRect=_logoRect - In the implementation block
@property (assign,nonatomic) CGRect thumbnailRect;              //@synthesize thumbnailRect=_thumbnailRect - In the implementation block
@property (assign,nonatomic) CGRect stripRect;                  //@synthesize stripRect=_stripRect - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)currentVersion;
+(long long)imageSetType;
+(id)archiveName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(PKImage *)faceImage;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(void)preheatImages;
-(void)setFaceImage:(PKImage *)arg1 ;
-(void)setLogoRect:(CGRect)arg1 ;
-(void)setThumbnailRect:(CGRect)arg1 ;
-(void)setStripRect:(CGRect)arg1 ;
-(CGRect)logoRect;
-(CGRect)thumbnailRect;
-(CGRect)stripRect;
@end

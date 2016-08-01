/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLNamed.h>

@class NSString, NSData;

@interface MDLTexture : NSObject <MDLNamed> {

	NSString* _name;
	MDLTextureData _textureData;
	long long _channelEncoding;
	NSData* _topLeftOriginData[14];
	NSData* _bottomLeftOriginData[14];
	BOOL _selfCreating;

}

@property (nonatomic,readonly)  dimensions; 
@property (nonatomic,readonly) long long rowStride; 
@property (nonatomic,readonly) unsigned long long channelCount; 
@property (nonatomic,readonly) unsigned long long mipLevelCount; 
@property (nonatomic,readonly) long long channelEncoding;                     //@synthesize channelEncoding=_channelEncoding - In the implementation block
@property (assign,nonatomic) BOOL isCube; 
@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
+(id)irradianceTextureCubeWithTexture:(id)arg1 name:(id)arg2 dimensions:(float)arg3 ;
+(id)textureNamed:(id)arg1 bundle:(id)arg2 ;
+(id)_textureCubeWithSingleImageNamed:(id)arg1 bundle:(id)arg2 ;
+(id)textureCubeWithImagesNamed:(id)arg1 bundle:(id)arg2 ;
+(id)textureCubeWithImagesNamed:(id)arg1 ;
+(id)irradianceTextureCubeWithTexture:(id)arg1 name:(id)arg2 ;
+(id)textureNamed:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-()dimensions;
-(id)initWithData:(id)arg1 topLeftOrigin:(BOOL)arg2 name:(id)arg3 dimensions:(long long)arg4 rowStride:(unsigned long long)arg5 channelCount:(long long)arg6 channelEncoding:(BOOL)arg7 ;
-(id)texelDataWithBottomLeftOrigin;
-(MDLTextureData*)textureData;
-(id)allocateDataAtLevel:(long long)arg1 ;
-(void)clearTexelData;
-(id)texelDataWithTopLeftOriginAtMipLevel:(long long)arg1 create:(BOOL)arg2 ;
-(id)generateDataAtLevel:(long long)arg1 ;
-(id)texelDataWithBottomLeftOriginAtMipLevel:(long long)arg1 create:(BOOL)arg2 ;
-(void)loadDataWithTopLeftOriginAtMipLevel:(long long)arg1 create:(BOOL)arg2 ;
-(void)loadDataWithBottomLeftOriginAtMipLevel:(long long)arg1 create:(BOOL)arg2 ;
-(BOOL)writeToURL:(id)arg1 type:(CFStringRef)arg2 ;
-(id)texelDataWithTopLeftOrigin;
-(BOOL)isCube;
-(void)setTexelDataWithTopLeftOrigin:(id)arg1 atMipLevel:(long long)arg2 ;
-(long long)rowStride;
-(void)setIsCube:(BOOL)arg1 ;
-(unsigned long long)mipLevelCount;
-(void)setTexelDataWithBottomLeftOrigin:(id)arg1 atMipLevel:(long long)arg2 ;
-(long long)channelEncoding;
-(unsigned long long)channelCount;
-(BOOL)writeToURL:(id)arg1 ;
-(CGImageRef)imageFromTexture;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:28 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLRenderPassAttachmentDescriptor : NSObject <NSCopying>

@property (nonatomic,retain) id<MTLTexture> texture; 
@property (assign,nonatomic) unsigned long long level; 
@property (assign,nonatomic) unsigned long long slice; 
@property (assign,nonatomic) unsigned long long depthPlane; 
@property (nonatomic,retain) id<MTLTexture> resolveTexture; 
@property (assign,nonatomic) unsigned long long resolveLevel; 
@property (assign,nonatomic) unsigned long long resolveSlice; 
@property (assign,nonatomic) unsigned long long resolveDepthPlane; 
@property (assign,nonatomic) unsigned long long loadAction; 
@property (assign,nonatomic) unsigned long long storeAction; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end


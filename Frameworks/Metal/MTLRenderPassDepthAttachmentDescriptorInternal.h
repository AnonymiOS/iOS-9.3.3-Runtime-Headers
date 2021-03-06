/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:28 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPassDepthAttachmentDescriptor.h>

@interface MTLRenderPassDepthAttachmentDescriptorInternal : MTLRenderPassDepthAttachmentDescriptor {

	MTLRenderPassAttachmentDescriptorPrivate _private;

}
+(id)attachmentDescriptor;
-(unsigned long long)depthResolveFilter;
-(void)setDepthResolveFilter:(unsigned long long)arg1 ;
-(void)setSlice:(unsigned long long)arg1 ;
-(unsigned long long)slice;
-(void)setDepthPlane:(unsigned long long)arg1 ;
-(unsigned long long)depthPlane;
-(void)setResolveLevel:(unsigned long long)arg1 ;
-(unsigned long long)resolveLevel;
-(void)setResolveSlice:(unsigned long long)arg1 ;
-(unsigned long long)resolveSlice;
-(void)setResolveDepthPlane:(unsigned long long)arg1 ;
-(unsigned long long)resolveDepthPlane;
-(unsigned long long)loadAction;
-(unsigned long long)storeAction;
-(const MTLRenderPassAttachmentDescriptorPrivate*)_descriptorPrivate;
-(double)clearDepth;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLevel:(unsigned long long)arg1 ;
-(unsigned long long)level;
-(id)texture;
-(void)setTexture:(id)arg1 ;
-(void)setResolveTexture:(id)arg1 ;
-(void)setLoadAction:(unsigned long long)arg1 ;
-(id)resolveTexture;
-(void)setStoreAction:(unsigned long long)arg1 ;
-(void)setClearDepth:(double)arg1 ;
@end


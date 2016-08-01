/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:28 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLSamplerDescriptor.h>

@interface MTLSamplerDescriptorInternal : MTLSamplerDescriptor {

	MTLSamplerDescriptorPrivate* _private;

}
-(const MTLSamplerDescriptorPrivate*)descriptorPrivate;
-(BOOL)lodAverage;
-(void)setLodAverage:(BOOL)arg1 ;
-(unsigned long long)minFilter;
-(unsigned long long)magFilter;
-(unsigned long long)sAddressMode;
-(unsigned long long)tAddressMode;
-(unsigned long long)rAddressMode;
-(BOOL)normalizedCoordinates;
-(void)setNormalizedCoordinates:(BOOL)arg1 ;
-(float)lodMinClamp;
-(void)setLodMinClamp:(float)arg1 ;
-(float)lodMaxClamp;
-(void)setLodMaxClamp:(float)arg1 ;
-(unsigned long long)compareFunction;
-(void)setCompareFunction:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(void)setLodBias:(float)arg1 ;
-(float)lodBias;
-(void)setMinFilter:(unsigned long long)arg1 ;
-(void)setMagFilter:(unsigned long long)arg1 ;
-(void)setSAddressMode:(unsigned long long)arg1 ;
-(void)setTAddressMode:(unsigned long long)arg1 ;
-(void)setRAddressMode:(unsigned long long)arg1 ;
-(void)setMaxAnisotropy:(unsigned long long)arg1 ;
-(unsigned long long)maxAnisotropy;
-(unsigned long long)mipFilter;
-(void)setMipFilter:(unsigned long long)arg1 ;
@end


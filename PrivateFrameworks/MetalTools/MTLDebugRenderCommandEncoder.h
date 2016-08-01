/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:46 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsRenderCommandEncoder.h>

@protocol MTLDevice, MTLRenderPipelineState, MTLDepthStencilState;
@class MTLRenderPassDescriptor, MTLDepthStencilDescriptor;

@interface MTLDebugRenderCommandEncoder : MTLToolsRenderCommandEncoder {

	SCD_Struct_MT10 _vertexBuffers[31];
	SCD_Struct_MT10 _vertexTextures[31];
	SCD_Struct_MT10 _vertexSamplers[16];
	SCD_Struct_MT10 _fragmentBuffers[31];
	SCD_Struct_MT10 _fragmentTextures[31];
	SCD_Struct_MT10 _fragmentSamplers[16];
	const SCD_Struct_MT2* _limits;
	unsigned _encoderState;
	set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >* _visibilityOffsets;
	float _lineWidth;
	float _depthBias;
	float _depthBiasSlopeScale;
	float _depthBiasClamp;
	unsigned _frontStencilRef;
	unsigned _backStencilRef;
	float _blendColorRed;
	float _blendColorGreen;
	float _blendColorBlue;
	float _blendColorAlpha;
	id<MTLDevice> _cachedDevice;
	MTLRenderPassDescriptor* _descriptor;
	unsigned long long _frontFacingWinding;
	unsigned long long _cullMode;
	unsigned long long _depthClipMode;
	unsigned long long _triangleFillMode;
	id<MTLRenderPipelineState> _renderPipelineState;
	id<MTLDepthStencilState> _depthStencilState;
	MTLDepthStencilDescriptor* _defaultDepthStencilDescriptor;
	unsigned long long _visibilityResultMode;
	unsigned long long _visibilityResultOffset;
	unsigned long long _width;
	unsigned long long _height;
	SCD_Struct_MT11 _scissorRect;
	SCD_Struct_MT12 _viewport;

}

@property (nonatomic,readonly) id<MTLDevice> cachedDevice;                                             //@synthesize cachedDevice=_cachedDevice - In the implementation block
@property (nonatomic,copy,readonly) MTLRenderPassDescriptor * descriptor;                              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MT12 viewport;                                               //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) unsigned long long frontFacingWinding;                                  //@synthesize frontFacingWinding=_frontFacingWinding - In the implementation block
@property (nonatomic,readonly) unsigned long long cullMode;                                            //@synthesize cullMode=_cullMode - In the implementation block
@property (nonatomic,readonly) unsigned long long depthClipMode;                                       //@synthesize depthClipMode=_depthClipMode - In the implementation block
@property (nonatomic,readonly) float lineWidth;                                                        //@synthesize lineWidth=_lineWidth - In the implementation block
@property (nonatomic,readonly) float depthBias;                                                        //@synthesize depthBias=_depthBias - In the implementation block
@property (nonatomic,readonly) float depthBiasSlopeScale;                                              //@synthesize depthBiasSlopeScale=_depthBiasSlopeScale - In the implementation block
@property (nonatomic,readonly) float depthBiasClamp;                                                   //@synthesize depthBiasClamp=_depthBiasClamp - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MT11 scissorRect;                                            //@synthesize scissorRect=_scissorRect - In the implementation block
@property (nonatomic,readonly) unsigned long long triangleFillMode;                                    //@synthesize triangleFillMode=_triangleFillMode - In the implementation block
@property (nonatomic,readonly) id<MTLRenderPipelineState> renderPipelineState;                         //@synthesize renderPipelineState=_renderPipelineState - In the implementation block
@property (nonatomic,readonly) id<MTLDepthStencilState> depthStencilState;                             //@synthesize depthStencilState=_depthStencilState - In the implementation block
@property (nonatomic,readonly) MTLDepthStencilDescriptor * defaultDepthStencilDescriptor;              //@synthesize defaultDepthStencilDescriptor=_defaultDepthStencilDescriptor - In the implementation block
@property (nonatomic,readonly) unsigned frontStencilRef;                                               //@synthesize frontStencilRef=_frontStencilRef - In the implementation block
@property (nonatomic,readonly) unsigned backStencilRef;                                                //@synthesize backStencilRef=_backStencilRef - In the implementation block
@property (nonatomic,readonly) unsigned long long visibilityResultMode;                                //@synthesize visibilityResultMode=_visibilityResultMode - In the implementation block
@property (nonatomic,readonly) unsigned long long visibilityResultOffset;                              //@synthesize visibilityResultOffset=_visibilityResultOffset - In the implementation block
@property (nonatomic,readonly) float blendColorRed;                                                    //@synthesize blendColorRed=_blendColorRed - In the implementation block
@property (nonatomic,readonly) float blendColorGreen;                                                  //@synthesize blendColorGreen=_blendColorGreen - In the implementation block
@property (nonatomic,readonly) float blendColorBlue;                                                   //@synthesize blendColorBlue=_blendColorBlue - In the implementation block
@property (nonatomic,readonly) float blendColorAlpha;                                                  //@synthesize blendColorAlpha=_blendColorAlpha - In the implementation block
@property (readonly) unsigned long long width;                                                         //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long height;                                                        //@synthesize height=_height - In the implementation block
-(void)setFragmentTexture:(id)arg1 atTextureIndex:(unsigned long long)arg2 samplerState:(id)arg3 atSamplerIndex:(unsigned long long)arg4 ;
-(void)setFragmentBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)description;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(MTLRenderPassDescriptor *)descriptor;
-(void)setViewport:(SCD_Struct_MT12)arg1 ;
-(void)setScissorRect:(SCD_Struct_MT11)arg1 ;
-(void)endEncoding;
-(void)setFrontFacingWinding:(unsigned long long)arg1 ;
-(void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3 ;
-(void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setVertexBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setVertexBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setVertexSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setVertexTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setCullMode:(unsigned long long)arg1 ;
-(void)setDepthStencilState:(id<MTLDepthStencilState>)arg1 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 ;
-(void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 ;
-(void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 ;
-(void)setRenderPipelineState:(id<MTLRenderPipelineState>)arg1 ;
-(void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(unsigned long long)cullMode;
-(void)setFragmentBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setFragmentTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setFragmentTexture:(id)arg1 baseLevel:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setFragmentSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4 ;
-(void)setFragmentSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(NSRange)arg4 ;
-(void)setStencilReferenceValue:(unsigned)arg1 ;
-(void)setStencilFrontReferenceValue:(unsigned)arg1 backReferenceValue:(unsigned)arg2 ;
-(void)setVertexBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setVertexTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setVertexTexture:(id)arg1 baseLevel:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setVertexSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4 ;
-(void)setVertexSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(NSRange)arg4 ;
-(void)setDepthClipMode:(unsigned long long)arg1 ;
-(void)setTriangleFillMode:(unsigned long long)arg1 ;
-(void)setVisibilityResultMode:(unsigned long long)arg1 offset:(unsigned long long)arg2 ;
-(void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8 ;
-(void)drawPrimitives:(unsigned long long)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexType:(unsigned long long)arg2 indexBuffer:(id)arg3 indexBufferOffset:(unsigned long long)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(unsigned long long)arg6 ;
-(void)_setDefaults;
-(id<MTLDevice>)cachedDevice;
-(id)initWithRenderCommandEncoder:(id)arg1 parent:(id)arg2 descriptor:(id)arg3 ;
-(void)_validateAllFunctionArguments;
-(void)validateFramebufferWithRenderPipelineState:(id)arg1 ;
-(void)enumerateFragmentBuffersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateFragmentTexturesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateFragmentSamplersUsingBlock:(/*^block*/id)arg1 ;
-(float)depthBias;
-(float)depthBiasSlopeScale;
-(float)depthBiasClamp;
-(SCD_Struct_MT11)scissorRect;
-(id<MTLRenderPipelineState>)renderPipelineState;
-(id<MTLDepthStencilState>)depthStencilState;
-(MTLDepthStencilDescriptor *)defaultDepthStencilDescriptor;
-(unsigned)frontStencilRef;
-(unsigned)backStencilRef;
-(float)blendColorRed;
-(float)blendColorGreen;
-(float)blendColorBlue;
-(float)blendColorAlpha;
-(void)validateCommonDrawErrors:(unsigned long long)arg1 instanceCount:(unsigned long long)arg2 baseInstance:(unsigned long long)arg3 maxVertexID:(unsigned long long)arg4 ;
-(void)validateDrawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 ;
-(void)validateDrawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 ;
-(void)enumerateVertexBuffersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateVertexTexturesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateVertexSamplersUsingBlock:(/*^block*/id)arg1 ;
-(SCD_Struct_MT12)viewport;
-(unsigned long long)frontFacingWinding;
-(unsigned long long)depthClipMode;
-(unsigned long long)triangleFillMode;
-(unsigned long long)visibilityResultMode;
-(unsigned long long)visibilityResultOffset;
@end


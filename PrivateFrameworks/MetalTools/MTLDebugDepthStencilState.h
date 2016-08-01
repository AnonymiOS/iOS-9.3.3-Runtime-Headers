/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:46 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsDepthStencilState.h>

@class MTLDepthStencilDescriptor;

@interface MTLDebugDepthStencilState : MTLToolsDepthStencilState {

	MTLDepthStencilDescriptor* _descriptor;

}

@property (nonatomic,readonly) MTLDepthStencilDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
-(id)description;
-(MTLDepthStencilDescriptor *)descriptor;
-(id)initWithBaseDepthStencilState:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
@end


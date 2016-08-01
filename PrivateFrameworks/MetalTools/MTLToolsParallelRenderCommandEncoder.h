/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:46 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsCommandEncoder.h>
#import <libobjc.A.dylib/MTLParallelRenderCommandEncoder.h>

@class MTLToolsPointerArray, NSString;

@interface MTLToolsParallelRenderCommandEncoder : MTLToolsCommandEncoder <MTLParallelRenderCommandEncoder> {

	MTLToolsPointerArray* _renderCommandEncoders;

}

@property (nonatomic,readonly) MTLToolsPointerArray * renderCommandEncoders;              //@synthesize renderCommandEncoders=_renderCommandEncoders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(id)renderCommandEncoder;
-(void)acceptVisitor:(id)arg1 ;
-(MTLToolsPointerArray *)renderCommandEncoders;
@end


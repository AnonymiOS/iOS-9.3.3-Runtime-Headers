/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@interface NEHotspotHelperResponse : NSObject {

	CNPluginResponseRef _response;

}

@property (assign) CNPluginResponseRef response;              //@synthesize response=_response - In the implementation block
-(id)initWithResponse:(CNPluginResponseRef)arg1 ;
-(void)dealloc;
-(id)description;
-(CNPluginResponseRef)response;
-(void)setNetworkList:(id)arg1 ;
-(void)setResponse:(CNPluginResponseRef)arg1 ;
-(void)deliver;
-(void)setNetwork:(id)arg1 ;
@end


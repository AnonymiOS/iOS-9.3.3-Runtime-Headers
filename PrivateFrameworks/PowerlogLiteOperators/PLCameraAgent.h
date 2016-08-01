/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:10 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLXPCListenerOperatorComposition, NSDictionary;

@interface PLCameraAgent : PLAgent {

	PLXPCListenerOperatorComposition* _frontCameraNotification;
	PLXPCListenerOperatorComposition* _backCameraNotification;
	PLXPCListenerOperatorComposition* _torchNotification;
	NSDictionary* _frontCameraPowerModel;
	NSDictionary* _backCameraPowerModel;
	NSDictionary* _torchPowerModel;

}

@property (readonly) PLXPCListenerOperatorComposition * frontCameraNotification;              //@synthesize frontCameraNotification=_frontCameraNotification - In the implementation block
@property (readonly) PLXPCListenerOperatorComposition * backCameraNotification;               //@synthesize backCameraNotification=_backCameraNotification - In the implementation block
@property (readonly) PLXPCListenerOperatorComposition * torchNotification;                    //@synthesize torchNotification=_torchNotification - In the implementation block
@property (readonly) NSDictionary * frontCameraPowerModel;                                    //@synthesize frontCameraPowerModel=_frontCameraPowerModel - In the implementation block
@property (readonly) NSDictionary * backCameraPowerModel;                                     //@synthesize backCameraPowerModel=_backCameraPowerModel - In the implementation block
@property (readonly) NSDictionary * torchPowerModel;                                          //@synthesize torchPowerModel=_torchPowerModel - In the implementation block
+(void)load;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)defaults;
-(void)log;
-(void)initOperatorDependancies;
-(void)modelFrontCameraPowerWithEntry:(id)arg1 ;
-(void)modelBackCameraPowerWithEntry:(id)arg1 ;
-(void)modelTorchPowerWithEntry:(id)arg1 ;
-(NSDictionary *)frontCameraPowerModel;
-(NSDictionary *)backCameraPowerModel;
-(NSDictionary *)torchPowerModel;
-(PLXPCListenerOperatorComposition *)frontCameraNotification;
-(PLXPCListenerOperatorComposition *)backCameraNotification;
-(PLXPCListenerOperatorComposition *)torchNotification;
@end


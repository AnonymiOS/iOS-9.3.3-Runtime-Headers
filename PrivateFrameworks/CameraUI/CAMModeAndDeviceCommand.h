/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class NSError;

@interface CAMModeAndDeviceCommand : CAMCaptureCommand {

	long long __device;
	NSError* __configurationError;
	CAMCaptureModeWithOptions __modeWithOptions;

}

@property (nonatomic,readonly) CAMCaptureModeWithOptions _modeWithOptions;                              //@synthesize _modeWithOptions=__modeWithOptions - In the implementation block
@property (nonatomic,readonly) long long _device;                                                       //@synthesize _device=__device - In the implementation block
@property (setter=_setConfigurationError:,nonatomic,retain) NSError * _configurationError;              //@synthesize _configurationError=__configurationError - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)userInfo;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithModeWithOptions:(CAMCaptureModeWithOptions)arg1 device:(long long)arg2 ;
-(long long)_device;
-(CAMCaptureModeWithOptions)_modeWithOptions;
-(CAMCaptureModeWithOptions)_introspectedModeWithOptionsFromContext:(id)arg1 ;
-(long long)_introspectedDeviceFromContext:(id)arg1 ;
-(BOOL)_isVideoMode:(long long)arg1 ;
-(void)_sanitizeDeviceUsingContext:(id)arg1 ;
-(id)_desiredInputsWithContext:(id)arg1 ;
-(id)_existingInputsWithContext:(id)arg1 without:(id)arg2 ;
-(id)_specificFramerateCommandForMode:(CAMCaptureModeWithOptions)arg1 withContext:(id)arg2 ;
-(id)_desiredOutputsWithContext:(id)arg1 ;
-(id)_existingOutputsWithContext:(id)arg1 without:(id)arg2 ;
-(void)_performPostConfigurationSetupForModeWithOptions:(CAMCaptureModeWithOptions)arg1 device:(long long)arg2 withContext:(id)arg3 ;
-(void)_performPostConfigurationSanityCheckForModeWithOptions:(CAMCaptureModeWithOptions)arg1 device:(long long)arg2 withContext:(id)arg3 ;
-(NSError *)_configurationError;
-(void)_setConfigurationError:(id)arg1 ;
-(id)initWithModeWithOptions:(CAMCaptureModeWithOptions)arg1 ;
-(id)initWithDevice:(long long)arg1 ;
-(BOOL)requiresSessionModification;
-(BOOL)_isStillImageMode:(long long)arg1 ;
@end


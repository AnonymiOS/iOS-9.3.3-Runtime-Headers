/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:11 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRVirtualTouchDeviceDescriptor;

@interface MRRegisterHIDDeviceMessage : MRProtocolMessage {

	MRVirtualTouchDeviceDescriptor* _deviceDescriptor;

}

@property (nonatomic,copy,readonly) MRVirtualTouchDeviceDescriptor * deviceDescriptor; 
-(void)dealloc;
-(unsigned long long)type;
-(id)initWithDeviceDescriptor:(id)arg1 ;
-(MRVirtualTouchDeviceDescriptor *)deviceDescriptor;
@end


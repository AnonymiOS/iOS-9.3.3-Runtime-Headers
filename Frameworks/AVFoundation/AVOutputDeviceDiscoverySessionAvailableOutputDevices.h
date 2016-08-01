/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:57 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal, NSArray;

@interface AVOutputDeviceDiscoverySessionAvailableOutputDevices : NSObject {

	AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal* _availableOutputDevices;

}

@property (nonatomic,readonly) NSArray * recentlyUsedDevices; 
@property (nonatomic,readonly) NSArray * otherDevices; 
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSArray *)recentlyUsedDevices;
-(NSArray *)otherDevices;
-(id)initWithAvailableFigEndpoints:(id)arg1 ;
-(void)_loadOutputDevices;
-(void)finalize;
@end


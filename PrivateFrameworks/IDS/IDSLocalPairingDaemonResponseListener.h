/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:10 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@class IDSLocalPairingRequestTimer, NSString;

@interface IDSLocalPairingDaemonResponseListener : NSObject <IDSDaemonListenerProtocol> {

	IDSLocalPairingRequestTimer* _requestTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_newNSUUIDArrayFromCBUUIDStrings:(id)arg1 ;
-(void)dealloc;
-(void)localPairingResponseForRequestID:(id)arg1 withError:(id)arg2 ;
-(void)localPairingResponseForRequestID:(id)arg1 withError:(id)arg2 pairedDevices:(id)arg3 ;
-(id)initWithRequestTimer:(id)arg1 ;
@end

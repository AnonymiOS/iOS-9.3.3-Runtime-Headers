/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AirTrafficDevice/AirTrafficDevice-Structs.h>
@class NSDictionary;

@interface ATClientController : NSObject {

	NSDictionary* _clientMap;
	CFDictionaryRef _queueMap;

}
+(id)sharedInstance;
+(id)controllerForDataclasses:(id)arg1 ;
-(void)dealloc;
-(id)allClients;
-(id)clientForDataclass:(id)arg1 ;
-(id)_queueForClient:(id)arg1 ;
-(BOOL)_loadClientsForDataclasses:(id)arg1 ;
-(void)resetQueues;
-(void)waitToDrain;
@end


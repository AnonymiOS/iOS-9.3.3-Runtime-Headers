/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSLock;

@interface GEODirectionsRequester : NSObject {

	NSMapTable* _pendingRequests;
	NSLock* _pendingRequestsLock;

}
+(id)sharedRequester;
-(void)dealloc;
-(id)init;
-(void)cancelRequest:(id)arg1 ;
-(void)startRequest:(id)arg1 finished:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:10 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKRequestDelegate;
@class SKPaymentQueueClient, SKXPCConnection;

@interface SKRequestInternal : NSObject {

	long long _backgroundTaskIdentifier;
	SKPaymentQueueClient* _client;
	SKXPCConnection* _connection;
	id<SKRequestDelegate> _delegate;
	long long _state;

}
-(void)dealloc;
@end

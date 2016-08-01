/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:47 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface NNMKSyncEndpoint : NSObject {

	NSObject*<OS_dispatch_queue> _endpointQueue;
	NSObject*<OS_dispatch_queue> _resendingQueue;
	NSMutableDictionary* _datesForIDSIdentifiersScheduledToBeResent;
	NSMutableDictionary* _lastResendIntervalKeyedByIDSIdentifier;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> endpointQueue;                                   //@synthesize endpointQueue=_endpointQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> resendingQueue;                                  //@synthesize resendingQueue=_resendingQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * datesForIDSIdentifiersScheduledToBeResent;              //@synthesize datesForIDSIdentifiersScheduledToBeResent=_datesForIDSIdentifiersScheduledToBeResent - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lastResendIntervalKeyedByIDSIdentifier;                 //@synthesize lastResendIntervalKeyedByIDSIdentifier=_lastResendIntervalKeyedByIDSIdentifier - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(void)enqueueIDSIdentifierForResend:(id)arg1 atDate:(id)arg2 silent:(BOOL)arg3 ;
-(void)resendIDSIdentifier:(id)arg1 ;
-(void)enqueueIDSIdentifiersForResend:(id)arg1 ;
-(void)resendReadyIDSIdentifiers;
-(unsigned long long)newResendIntervalForPreviousResendInterval:(unsigned long long)arg1 errorCode:(long long)arg2 ;
-(void)dequeueIDSIdentifierForResend:(id)arg1 ;
-(NSMutableDictionary *)datesForIDSIdentifiersScheduledToBeResent;
-(NSObject*<OS_dispatch_queue>)endpointQueue;
-(void)setEndpointQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)resendingQueue;
-(void)setResendingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDatesForIDSIdentifiersScheduledToBeResent:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)lastResendIntervalKeyedByIDSIdentifier;
-(void)setLastResendIntervalKeyedByIDSIdentifier:(NSMutableDictionary *)arg1 ;
@end


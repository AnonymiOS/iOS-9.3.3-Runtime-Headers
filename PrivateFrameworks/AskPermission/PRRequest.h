/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSNumber, NSDate;

@interface PRRequest : NSObject <NSSecureCoding> {

	BOOL _requestedOnThisDevice;
	NSString* _requestID;
	NSString* _ask;
	NSDictionary* _requestInfo;
	unsigned long long _requestStatus;
	NSNumber* _requesterDSID;
	NSNumber* _responderDSID;
	NSString* _clientIdentifier;
	NSDate* _dateAddedToLocalCache;

}

@property (copy) NSString * requestID;                            //@synthesize requestID=_requestID - In the implementation block
@property (copy) NSString * ask;                                  //@synthesize ask=_ask - In the implementation block
@property (copy) NSDictionary * requestInfo;                      //@synthesize requestInfo=_requestInfo - In the implementation block
@property (assign) unsigned long long requestStatus;              //@synthesize requestStatus=_requestStatus - In the implementation block
@property (copy) NSNumber * requesterDSID;                        //@synthesize requesterDSID=_requesterDSID - In the implementation block
@property (copy) NSNumber * responderDSID;                        //@synthesize responderDSID=_responderDSID - In the implementation block
@property (copy) NSString * clientIdentifier;                     //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign) BOOL requestedOnThisDevice;                    //@synthesize requestedOnThisDevice=_requestedOnThisDevice - In the implementation block
@property (copy) NSDate * dateAddedToLocalCache;                  //@synthesize dateAddedToLocalCache=_dateAddedToLocalCache - In the implementation block
@property (readonly) NSString * statusDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setRequestID:(NSString *)arg1 ;
-(NSDictionary *)requestInfo;
-(NSString *)statusDescription;
-(NSString *)clientIdentifier;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(id)cacheRepresentation;
-(NSString *)requestID;
-(unsigned long long)requestStatus;
-(void)setRequestStatus:(unsigned long long)arg1 ;
-(void)setRequestInfo:(NSDictionary *)arg1 ;
-(BOOL)requestedOnThisDevice;
-(NSDate *)dateAddedToLocalCache;
-(id)initWithAsk:(id)arg1 requestInfo:(id)arg2 ;
-(NSString *)ask;
-(void)setAsk:(NSString *)arg1 ;
-(NSNumber *)requesterDSID;
-(void)setRequesterDSID:(NSNumber *)arg1 ;
-(NSNumber *)responderDSID;
-(void)setResponderDSID:(NSNumber *)arg1 ;
-(void)setRequestedOnThisDevice:(BOOL)arg1 ;
-(void)setDateAddedToLocalCache:(NSDate *)arg1 ;
@end


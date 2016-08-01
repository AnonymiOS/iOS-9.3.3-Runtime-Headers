/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCProfile.h>

@class NSString, NSArray, NSData;

@interface MCProfileServiceProfile : MCProfile {

	NSString* _URLString;
	NSArray* _deviceAttributes;
	id _challenge;
	NSData* _enrollmentIdentityPersistentID;
	BOOL _confirmInstallation;
	NSArray* _bogusPayloads;

}

@property (nonatomic,retain) NSString * URLString;                                 //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,retain) NSData * enrollmentIdentityPersistentID;              //@synthesize enrollmentIdentityPersistentID=_enrollmentIdentityPersistentID - In the implementation block
@property (nonatomic,retain,readonly) NSArray * deviceAttributes;                  //@synthesize deviceAttributes=_deviceAttributes - In the implementation block
@property (nonatomic,retain,readonly) id challenge;                                //@synthesize challenge=_challenge - In the implementation block
@property (nonatomic,readonly) BOOL confirmInstallation;                           //@synthesize confirmInstallation=_confirmInstallation - In the implementation block
-(id)stubDictionary;
-(id)payloads;
-(id)initWithDictionary:(id)arg1 allowEmptyPayload:(BOOL)arg2 outError:(id*)arg3 ;
-(id)managedPayloads;
-(id)localizedPayloadSummaryByType;
-(id)localizedManagedPayloadSummaryByType;
-(id)_badDataTypeErrorWithFieldName:(id)arg1 ;
-(id)_unsupportedValueErrorWithFieldName:(id)arg1 value:(id)arg2 ;
-(NSArray *)deviceAttributes;
-(NSData *)enrollmentIdentityPersistentID;
-(void)setEnrollmentIdentityPersistentID:(NSData *)arg1 ;
-(BOOL)confirmInstallation;
-(id)description;
-(NSString *)URLString;
-(void)setURLString:(NSString *)arg1 ;
-(id)challenge;
@end


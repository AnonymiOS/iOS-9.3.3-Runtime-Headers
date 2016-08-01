/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCEmailAccountPayloadBase.h>

@class NSString, NSNumber, NSData;

@interface MCEASAccountPayload : MCEmailAccountPayloadBase {

	NSString* _accountDescription;
	NSString* _hostname;
	NSString* _username;
	NSString* _password;
	NSString* _emailAddress;
	NSNumber* _mailNumberOfPastDaysToSync;
	NSData* _embeddedCertificate;
	NSString* _embeddedCertificateName;
	NSString* _embeddedCertificatePassword;
	NSString* _certificateUUID;
	NSString* _accountPersistentUUID;
	NSData* _certificatePersistentID;
	BOOL _syncDefaultFoldersOnly;
	NSNumber* _useSSL;
	NSNumber* _syncDefaultFoldersOnlyNum;

}

@property (nonatomic,retain,readonly) NSString * accountDescription;                      //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,retain,readonly) NSString * hostname;                                //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,copy) NSString * username;                                           //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                           //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                                       //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,retain) NSNumber * useSSL;                                           //@synthesize useSSL=_useSSL - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * mailNumberOfPastDaysToSync;              //@synthesize mailNumberOfPastDaysToSync=_mailNumberOfPastDaysToSync - In the implementation block
@property (nonatomic,retain,readonly) NSData * embeddedCertificate;                       //@synthesize embeddedCertificate=_embeddedCertificate - In the implementation block
@property (nonatomic,retain,readonly) NSString * embeddedCertificateName;                 //@synthesize embeddedCertificateName=_embeddedCertificateName - In the implementation block
@property (nonatomic,copy) NSString * embeddedCertificatePassword;                        //@synthesize embeddedCertificatePassword=_embeddedCertificatePassword - In the implementation block
@property (nonatomic,retain,readonly) NSString * certificateUUID;                         //@synthesize certificateUUID=_certificateUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasCertificate; 
@property (nonatomic,copy) NSString * accountPersistentUUID;                              //@synthesize accountPersistentUUID=_accountPersistentUUID - In the implementation block
@property (nonatomic,retain) NSData * certificatePersistentID;                            //@synthesize certificatePersistentID=_certificatePersistentID - In the implementation block
@property (assign,nonatomic) BOOL syncDefaultFoldersOnly;                                 //@synthesize syncDefaultFoldersOnly=_syncDefaultFoldersOnly - In the implementation block
@property (nonatomic,readonly) NSNumber * syncDefaultFoldersOnlyNum;                      //@synthesize syncDefaultFoldersOnlyNum=_syncDefaultFoldersOnlyNum - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(NSData *)certificatePersistentID;
-(BOOL)containsSensitiveUserInformation;
-(id)subtitle2Description;
-(void)setCertificatePersistentID:(NSData *)arg1 ;
-(NSString *)certificateUUID;
-(NSNumber *)useSSL;
-(NSString *)accountPersistentUUID;
-(void)setAccountPersistentUUID:(NSString *)arg1 ;
-(NSData *)embeddedCertificate;
-(NSString *)embeddedCertificateName;
-(NSString *)embeddedCertificatePassword;
-(void)setEmbeddedCertificatePassword:(NSString *)arg1 ;
-(BOOL)syncDefaultFoldersOnly;
-(void)setSyncDefaultFoldersOnly:(BOOL)arg1 ;
-(void)setUseSSL:(NSNumber *)arg1 ;
-(NSNumber *)syncDefaultFoldersOnlyNum;
-(id)description;
-(id)title;
-(id)subtitle2Label;
-(NSNumber *)mailNumberOfPastDaysToSync;
-(NSString *)hostname;
-(NSString *)emailAddress;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)accountDescription;
-(NSString *)username;
-(void)setEmailAddress:(NSString *)arg1 ;
-(BOOL)hasCertificate;
@end

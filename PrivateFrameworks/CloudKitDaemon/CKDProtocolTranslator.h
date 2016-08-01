/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKDProtocolTranslatorIdentityDelegate;
@class NSString, CKDPIdentifier;

@interface CKDProtocolTranslator : NSObject {

	NSString* _bundleIdentifier;
	NSString* _containerScopedUserID;
	id<CKDProtocolTranslatorIdentityDelegate> _identityDelegate;
	NSString* _overriddenContainerScopedUserID;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                             //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * containerScopedUserID;                                                 //@synthesize containerScopedUserID=_containerScopedUserID - In the implementation block
@property (nonatomic,readonly) CKDPIdentifier * pUserID; 
@property (assign,nonatomic,__weak) id<CKDProtocolTranslatorIdentityDelegate> identityDelegate;              //@synthesize identityDelegate=_identityDelegate - In the implementation block
@property (nonatomic,copy) NSString * overriddenContainerScopedUserID;                                       //@synthesize overriddenContainerScopedUserID=_overriddenContainerScopedUserID - In the implementation block
+(id)translatorIgnoringUserIDs;
-(int)fieldValueTypeFromObject:(id)arg1 ;
-(id)fieldValueOfType:(int)arg1 withObject:(id)arg2 ;
-(id)fieldValueFromObject:(id)arg1 ;
-(id)objectRepresentationFromFieldValue:(id)arg1 ;
-(id)locationFieldValueWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(id)fieldValueListOfType:(int)arg1 withList:(id)arg2 ;
-(id)pFieldWithKey:(id)arg1 value:(id)arg2 ;
-(NSString *)bundleIdentifier;
-(id)recordFromPRecord:(id)arg1 error:(id*)arg2 ;
-(id)pRecordFromRecord:(id)arg1 forCache:(BOOL)arg2 ;
-(NSString *)containerScopedUserID;
-(void)setContainerScopedUserID:(NSString *)arg1 ;
-(id)pQueryFromQuery:(id)arg1 error:(id*)arg2 ;
-(id)initWithContainerScopedUserID:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)setIdentityDelegate:(id<CKDProtocolTranslatorIdentityDelegate>)arg1 ;
-(id)pRecordZoneIdentifierFromRecordZoneID:(id)arg1 ;
-(id)recordIDFromPRecordIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)pRecordIdentifierFromRecordID:(id)arg1 ;
-(id)pRecordIdentifierFromShareID:(id)arg1 ;
-(id)pAssetFromAsset:(id)arg1 ;
-(id)pPackageFromPackage:(id)arg1 ;
-(id)assetFromPAsset:(id)arg1 error:(id*)arg2 ;
-(id)packageFromPPackage:(id)arg1 error:(id*)arg2 ;
-(id)pShareIdentifierFromShareID:(id)arg1 ;
-(id)shareFromPShare:(id)arg1 error:(id*)arg2 ;
-(id)pSubscriptionFromSubscription:(id)arg1 error:(id*)arg2 ;
-(id)pShareFromShare:(id)arg1 ;
-(id)subscriptionFromPSubscription:(id)arg1 error:(id*)arg2 ;
-(id)pAliasWithEmailAddress:(id)arg1 ;
-(id)pAliasWithUserRecordID:(id)arg1 ;
-(id)containerPrivacySettingsFromPContainerPrivacySettings:(id)arg1 ;
-(id)recordZoneIDFromPRecordZoneIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)notificationFromPPushMessage:(id)arg1 ;
-(id)deltaPRecordFromRecord:(id)arg1 withAllFields:(BOOL)arg2 outDeletedMergeFields:(id*)arg3 outKeysToSend:(id*)arg4 ;
-(id)shareIDFromPShareIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)_initWithContainerScopedUserID:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)setOverriddenContainerScopedUserID:(NSString *)arg1 ;
-(NSString *)overriddenContainerScopedUserID;
-(BOOL)_isDefaultUserNameFromServer:(id)arg1 ;
-(BOOL)_isDefaultUserNameFromClient:(id)arg1 ;
-(id)pRecordIdentifierFromUserRecordName:(id)arg1 ;
-(id)userNameFromPIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)pUserIdentifierFromUserRecordName:(id)arg1 ;
-(id)recordIDFromPUserName:(id)arg1 error:(id*)arg2 ;
-(id)pIdentifierFromUserRecordID:(id)arg1 ;
-(id)_pRecordFromRecordSansValues:(id)arg1 forCache:(BOOL)arg2 ;
-(id)shareParticipantFromPParticipant:(id)arg1 error:(id*)arg2 ;
-(id)pParticipantFromShareParticipant:(id)arg1 ;
-(id<CKDProtocolTranslatorIdentityDelegate>)identityDelegate;
-(CKDPIdentifier *)pUserID;
-(id)pRecordFromRecord:(id)arg1 ;
-(id)recordZoneFromPRecordZone:(id)arg1 withDatabaseScope:(long long)arg2 error:(id*)arg3 ;
-(id)pRecordZoneFromRecordZone:(id)arg1 ;
-(id)identityFromPUser:(id)arg1 ;
@end


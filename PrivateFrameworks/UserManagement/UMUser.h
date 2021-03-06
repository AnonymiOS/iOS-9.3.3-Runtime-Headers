/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:24 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserManagement/UserManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSURL, NSDate, NSArray, NSError;

@interface UMUser : NSObject <NSCopying, NSMutableCopying> {

	NSString* _displayName;
	unsigned long long _passcodeType;
	BOOL _isLoginUser;
	BOOL _isAuditor;
	BOOL _isDisabled;
	BOOL _hasDataToSync;
	BOOL _shouldFetchAttributes;
	unsigned _uid;
	unsigned _gid;
	NSString* _alternateDSID;
	NSURL* _homeDirectoryURL;
	NSString* _username;
	NSString* _givenName;
	NSString* _familyName;
	NSURL* _photoURL;
	NSDate* _creationDate;
	NSDate* _lastLoginDate;
	NSDate* _lastRemoteAuthDate;
	unsigned long long _passcodeLockGracePeriod;
	NSArray* _languages;
	unsigned long long _dataQuota;
	unsigned long long _dataUsed;
	NSError* _errorCausingLogout;
	id __photo;

}

@property (assign,nonatomic) unsigned uid;                                            //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic) unsigned gid;                                            //@synthesize gid=_gid - In the implementation block
@property (nonatomic,copy) NSString * alternateDSID;                                  //@synthesize alternateDSID=_alternateDSID - In the implementation block
@property (nonatomic,copy) NSURL * homeDirectoryURL;                                  //@synthesize homeDirectoryURL=_homeDirectoryURL - In the implementation block
@property (nonatomic,copy) NSString * username;                                       //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * givenName;                                      //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,copy) NSString * familyName;                                     //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSURL * photoURL;                                          //@synthesize photoURL=_photoURL - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                                     //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSDate * lastLoginDate;                                    //@synthesize lastLoginDate=_lastLoginDate - In the implementation block
@property (nonatomic,copy) NSDate * lastRemoteAuthDate;                               //@synthesize lastRemoteAuthDate=_lastRemoteAuthDate - In the implementation block
@property (nonatomic,readonly) unsigned long long userType; 
@property (assign,nonatomic) unsigned long long passcodeType; 
@property (assign,nonatomic) BOOL isLoginUser;                                        //@synthesize isLoginUser=_isLoginUser - In the implementation block
@property (assign,nonatomic) BOOL isAuditor;                                          //@synthesize isAuditor=_isAuditor - In the implementation block
@property (assign,nonatomic) BOOL isDisabled;                                         //@synthesize isDisabled=_isDisabled - In the implementation block
@property (assign,nonatomic) unsigned long long passcodeLockGracePeriod;              //@synthesize passcodeLockGracePeriod=_passcodeLockGracePeriod - In the implementation block
@property (nonatomic,copy) NSArray * languages;                                       //@synthesize languages=_languages - In the implementation block
@property (assign,nonatomic) unsigned long long dataQuota;                            //@synthesize dataQuota=_dataQuota - In the implementation block
@property (assign,nonatomic) unsigned long long dataUsed;                             //@synthesize dataUsed=_dataUsed - In the implementation block
@property (assign,nonatomic) BOOL hasDataToSync;                                      //@synthesize hasDataToSync=_hasDataToSync - In the implementation block
@property (nonatomic,retain) NSError * errorCausingLogout;                            //@synthesize errorCausingLogout=_errorCausingLogout - In the implementation block
@property (nonatomic,readonly) double passcodeBackOffInterval; 
@property (assign,nonatomic) BOOL shouldFetchAttributes;                              //@synthesize shouldFetchAttributes=_shouldFetchAttributes - In the implementation block
@property (nonatomic,copy) id _photo;                                                 //@synthesize _photo=__photo - In the implementation block
-(NSString *)givenName;
-(void)setFamilyName:(NSString *)arg1 ;
-(BOOL)isLoginUser;
-(unsigned long long)passcodeType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)familyName;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned)uid;
-(NSString *)displayName;
-(void)setUid:(unsigned)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSArray *)languages;
-(void)setLanguages:(NSArray *)arg1 ;
-(NSString *)alternateDSID;
-(NSURL *)photoURL;
-(NSDate *)lastRemoteAuthDate;
-(BOOL)isAuditor;
-(unsigned long long)passcodeLockGracePeriod;
-(NSError *)errorCausingLogout;
-(void)setPasscodeTypeWithoutTellingMKB:(unsigned long long)arg1 ;
-(void)setGid:(unsigned)arg1 ;
-(void)setAlternateDSID:(NSString *)arg1 ;
-(void)setHomeDirectoryURL:(NSURL *)arg1 ;
-(void)setPhotoURL:(NSURL *)arg1 ;
-(void)setLastLoginDate:(NSDate *)arg1 ;
-(void)setLastRemoteAuthDate:(NSDate *)arg1 ;
-(void)setIsLoginUser:(BOOL)arg1 ;
-(void)setIsAuditor:(BOOL)arg1 ;
-(void)setPasscodeLockGracePeriod:(unsigned long long)arg1 ;
-(void)setDataQuota:(unsigned long long)arg1 ;
-(void)setDataUsed:(unsigned long long)arg1 ;
-(void)setHasDataToSync:(BOOL)arg1 ;
-(void)setErrorCausingLogout:(NSError *)arg1 ;
-(BOOL)writePropertiesToDisk;
-(void)setShouldFetchAttributes:(BOOL)arg1 ;
-(BOOL)shouldFetchAttributes;
-(void)fetchAttributes;
-(void)fetchAttributesIfNeeded;
-(dqblk)_diskQuota;
-(unsigned)gid;
-(id)_photo;
-(void)set_photo:(id)arg1 ;
-(NSDate *)lastLoginDate;
-(void)setPropertiesFromUser:(id)arg1 ;
-(void)setPasscodeType:(unsigned long long)arg1 ;
-(double)passcodeBackOffInterval;
-(unsigned long long)userType;
-(void)setGivenName:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(BOOL)isDisabled;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(unsigned long long)dataUsed;
-(NSURL *)homeDirectoryURL;
-(BOOL)hasDataToSync;
-(BOOL)isEqualToUser:(id)arg1 ;
-(unsigned long long)dataQuota;
-(void)setIsDisabled:(BOOL)arg1 ;
@end


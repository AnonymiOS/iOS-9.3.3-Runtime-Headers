/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:44 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DACalDAV/DACalDAV-Structs.h>
#import <libobjc.A.dylib/CoreDAVAccountInfoProvider.h>
#import <libobjc.A.dylib/CoreDAVOAuthInfoProvider.h>
#import <libobjc.A.dylib/CalDAVPrincipal.h>

@protocol CalDAVAccount;
@class NSString, NSSet, NSURL, NSDictionary, NSNumber, NSDateComponents, NSMutableSet, CalDAVRefreshContext, NSMutableDictionary, MobileCalDAVAccount;

@interface MobileCalDAVPrincipal : NSObject <CoreDAVAccountInfoProvider, CoreDAVOAuthInfoProvider, CalDAVPrincipal> {

	BOOL _calendarsAreDirty;
	BOOL _isDelegate;
	BOOL _isWritable;
	BOOL _isEnabled;
	BOOL _canCreateCalendars;
	BOOL _isExpandPropertyReportSupported;
	BOOL _supportsCalendarUserSearch;
	BOOL _supportsFreebusy;
	BOOL _supportsSyncToken;
	BOOL _supportsPush;
	BOOL _shouldRefreshPrincipalSearchProperties;
	BOOL _shouldUpdatePushDelegate;
	BOOL _isDirty;
	int _calendarChangeIndex;
	NSURL* _calendarHomeURL;
	NSMutableSet* _deletedCalendarURLs;
	NSURL* _notificationCollectionURL;
	NSString* _notificationCollectionCTag;
	NSURL* _inboxURL;
	NSURL* _outboxURL;
	NSURL* _dropBoxURL;
	NSURL* _defaultCalendarURL;
	NSString* _uid;
	id<CalDAVAccount> _account;
	NSSet* _calendarUserAddresses;
	NSURL* _preferredCalendarUserAddress;
	NSString* _preferredCalendarEmailAddress;
	NSString* _fullName;
	NSString* _principalPath;
	NSString* _inboxCTag;
	NSString* _notificationURLString;
	NSDictionary* _pushTransports;
	NSString* _calendarHomePushKey;
	NSNumber* _quotaFreeBytes;
	NSString* _supportedCalendarComponentSets;
	CalDAVRefreshContext* _refreshContext;
	NSMutableDictionary* _calendarUserAddressesPerCalendar;
	NSMutableSet* _addedCalendars;
	NSMutableSet* _modifiedCalendars;
	NSURL* _legacy_principalURL;

}

@property (nonatomic,retain) NSString * uid;                                                      //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic) id<CalDAVAccount> account;                                           //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSSet * calendarUserAddresses;                                       //@synthesize calendarUserAddresses=_calendarUserAddresses - In the implementation block
@property (nonatomic,retain) NSURL * preferredCalendarUserAddress;                                //@synthesize preferredCalendarUserAddress=_preferredCalendarUserAddress - In the implementation block
@property (nonatomic,retain) NSString * preferredCalendarEmailAddress;                            //@synthesize preferredCalendarEmailAddress=_preferredCalendarEmailAddress - In the implementation block
@property (nonatomic,retain) NSString * fullName;                                                 //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSURL * calendarHomeURL;                                             //@synthesize calendarHomeURL=_calendarHomeURL - In the implementation block
@property (nonatomic,retain) NSString * calendarHomeSyncToken; 
@property (nonatomic,readonly) NSDictionary * subCalPropertiesByURL; 
@property (nonatomic,retain) NSString * principalPath;                                            //@synthesize principalPath=_principalPath - In the implementation block
@property (nonatomic,retain) NSURL * principalURL; 
@property (nonatomic,retain) NSURL * defaultCalendarURL;                                          //@synthesize defaultCalendarURL=_defaultCalendarURL - In the implementation block
@property (nonatomic,retain) NSURL * notificationCollectionURL;                                   //@synthesize notificationCollectionURL=_notificationCollectionURL - In the implementation block
@property (nonatomic,retain) NSString * notificationCollectionCTag;                               //@synthesize notificationCollectionCTag=_notificationCollectionCTag - In the implementation block
@property (nonatomic,retain) NSURL * inboxURL;                                                    //@synthesize inboxURL=_inboxURL - In the implementation block
@property (nonatomic,retain) NSString * inboxCTag;                                                //@synthesize inboxCTag=_inboxCTag - In the implementation block
@property (nonatomic,retain) NSURL * outboxURL;                                                   //@synthesize outboxURL=_outboxURL - In the implementation block
@property (nonatomic,retain) NSURL * dropBoxURL;                                                  //@synthesize dropBoxURL=_dropBoxURL - In the implementation block
@property (nonatomic,retain) NSString * notificationURLString;                                    //@synthesize notificationURLString=_notificationURLString - In the implementation block
@property (nonatomic,retain) NSDictionary * pushTransports;                                       //@synthesize pushTransports=_pushTransports - In the implementation block
@property (nonatomic,retain) NSString * calendarHomePushKey;                                      //@synthesize calendarHomePushKey=_calendarHomePushKey - In the implementation block
@property (nonatomic,retain) NSNumber * quotaFreeBytes;                                           //@synthesize quotaFreeBytes=_quotaFreeBytes - In the implementation block
@property (nonatomic,retain) NSString * supportedCalendarComponentSets;                           //@synthesize supportedCalendarComponentSets=_supportedCalendarComponentSets - In the implementation block
@property (assign,nonatomic) BOOL isDelegate;                                                     //@synthesize isDelegate=_isDelegate - In the implementation block
@property (assign,nonatomic) BOOL isWritable;                                                     //@synthesize isWritable=_isWritable - In the implementation block
@property (assign,nonatomic) BOOL isEnabled;                                                      //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) BOOL canCreateCalendars;                                             //@synthesize canCreateCalendars=_canCreateCalendars - In the implementation block
@property (assign,nonatomic) BOOL isExpandPropertyReportSupported;                                //@synthesize isExpandPropertyReportSupported=_isExpandPropertyReportSupported - In the implementation block
@property (assign,nonatomic) BOOL supportsCalendarUserSearch;                                     //@synthesize supportsCalendarUserSearch=_supportsCalendarUserSearch - In the implementation block
@property (assign,nonatomic) BOOL supportsFreebusy;                                               //@synthesize supportsFreebusy=_supportsFreebusy - In the implementation block
@property (assign,nonatomic) BOOL supportsSyncToken;                                              //@synthesize supportsSyncToken=_supportsSyncToken - In the implementation block
@property (nonatomic,readonly) BOOL supportsExtendedCalendarQuery; 
@property (nonatomic,retain) CalDAVRefreshContext * refreshContext;                               //@synthesize refreshContext=_refreshContext - In the implementation block
@property (nonatomic,readonly) NSSet * calendars; 
@property (nonatomic,readonly) NSString * APSTopic; 
@property (nonatomic,readonly) NSURL * APSSubscriptionURL; 
@property (nonatomic,readonly) NSString * APSEnv; 
@property (assign,nonatomic) BOOL supportsPush;                                                   //@synthesize supportsPush=_supportsPush - In the implementation block
@property (assign,nonatomic) BOOL shouldRefreshPrincipalSearchProperties;                         //@synthesize shouldRefreshPrincipalSearchProperties=_shouldRefreshPrincipalSearchProperties - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdatePushDelegate;                                       //@synthesize shouldUpdatePushDelegate=_shouldUpdatePushDelegate - In the implementation block
@property (assign,nonatomic) BOOL isDirty;                                                        //@synthesize isDirty=_isDirty - In the implementation block
@property (assign,nonatomic) BOOL calendarsAreDirty;                                              //@synthesize calendarsAreDirty=_calendarsAreDirty - In the implementation block
@property (nonatomic,readonly) MobileCalDAVAccount * daAccount; 
@property (nonatomic,retain) NSMutableDictionary * calendarUserAddressesPerCalendar;              //@synthesize calendarUserAddressesPerCalendar=_calendarUserAddressesPerCalendar - In the implementation block
@property (nonatomic,retain) NSMutableSet * deletedCalendarURLs;                                  //@synthesize deletedCalendarURLs=_deletedCalendarURLs - In the implementation block
@property (nonatomic,retain) NSMutableSet * addedCalendars;                                       //@synthesize addedCalendars=_addedCalendars - In the implementation block
@property (nonatomic,retain) NSMutableSet * modifiedCalendars;                                    //@synthesize modifiedCalendars=_modifiedCalendars - In the implementation block
@property (assign,nonatomic) int calendarChangeIndex;                                             //@synthesize calendarChangeIndex=_calendarChangeIndex - In the implementation block
@property (nonatomic,retain) NSURL * legacy_principalURL;                                         //@synthesize legacy_principalURL=_legacy_principalURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CoreDAVTaskManager> taskManager; 
@property (nonatomic,readonly) BOOL isMergeSync; 
@property (nonatomic,readonly) BOOL isEnabledForEvents; 
@property (nonatomic,readonly) BOOL isEnabledForTodos; 
@property (nonatomic,readonly) NSDateComponents * eventFilterStartDate; 
@property (nonatomic,readonly) NSDateComponents * eventFilterEndDate; 
@property (nonatomic,readonly) NSDateComponents * todoFilterStartDate; 
@property (nonatomic,readonly) NSDateComponents * todoFilterEndDate; 
+(BOOL)compareAddressURL:(id)arg1 localString:(id)arg2 ;
-(id)user;
-(id)password;
-(BOOL)useSSL;
-(NSURL *)principalURL;
-(id)init;
-(id)scheme;
-(BOOL)isEnabled;
-(void)setIsEnabled:(BOOL)arg1 ;
-(id)host;
-(NSString *)uid;
-(id)configuration;
-(long long)port;
-(void)setUid:(NSString *)arg1 ;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(id)serverRoot;
-(id)userAgentHeader;
-(id)serverComplianceClasses;
-(void)clientTokenRequestedByServer;
-(id)oauthInfoProvider;
-(BOOL)handleCertificateError:(id)arg1 ;
-(BOOL)shouldHandleHTTPCookiesForURL:(id)arg1 ;
-(BOOL)shouldSendClientInfoHeaderForURL:(id)arg1 ;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldCompressRequests;
-(void)webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(unsigned long long)oauthVariant;
-(NSSet *)calendars;
-(NSString *)principalPath;
-(void)setPrincipalPath:(NSString *)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(BOOL)isDirty;
-(id)oauth2Token;
-(BOOL)isWritable;
-(id)clientToken;
-(void)removeCalendar:(id)arg1 ;
-(id<CoreDAVTaskManager>)taskManager;
-(id)identityPersist;
-(CFURLStorageSessionRef)copyStorageSession;
-(id)customConnectionProperties;
-(BOOL)shouldUseOpportunisticSockets;
-(BOOL)handleTrustChallenge:(id)arg1 ;
-(id<CalDAVAccount>)account;
-(void)setAccount:(id<CalDAVAccount>)arg1 ;
-(BOOL)supportsFreebusy;
-(NSString *)supportedCalendarComponentSets;
-(void)setSupportedCalendarComponentSets:(NSString *)arg1 ;
-(NSURL *)inboxURL;
-(NSURL *)outboxURL;
-(BOOL)supportsCalendarUserSearch;
-(NSDateComponents *)eventFilterStartDate;
-(NSDateComponents *)eventFilterEndDate;
-(NSDateComponents *)todoFilterStartDate;
-(NSDateComponents *)todoFilterEndDate;
-(BOOL)supportsExtendedCalendarQuery;
-(void)setInboxURL:(NSURL *)arg1 ;
-(void)setCalendarHomeURL:(NSURL *)arg1 ;
-(void)setOutboxURL:(NSURL *)arg1 ;
-(void)setDropBoxURL:(NSURL *)arg1 ;
-(void)setNotificationCollectionURL:(NSURL *)arg1 ;
-(void)setSupportsCalendarUserSearch:(BOOL)arg1 ;
-(BOOL)isExpandPropertyReportSupported;
-(void)setIsExpandPropertyReportSupported:(BOOL)arg1 ;
-(void)setCalendarUserAddresses:(NSSet *)arg1 ;
-(void)setPrincipalURL:(NSURL *)arg1 ;
-(NSURL *)calendarHomeURL;
-(BOOL)isMergeSync;
-(NSString *)calendarHomeSyncToken;
-(NSMutableSet *)modifiedCalendars;
-(NSMutableSet *)deletedCalendarURLs;
-(NSMutableSet *)addedCalendars;
-(void)prepareCalendarsForSyncWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)isEnabledForEvents;
-(BOOL)isEnabledForTodos;
-(id)calendarOfType:(int)arg1 atURL:(id)arg2 withOptions:(id)arg3 ;
-(NSSet *)calendarUserAddresses;
-(void)setDefaultCalendarURL:(NSURL *)arg1 ;
-(void)setSupportsFreebusy:(BOOL)arg1 ;
-(id)defaultEventCalendarTitle;
-(id)defaultTodoCalendarTitle;
-(NSDictionary *)pushTransports;
-(void)setPushTransports:(NSDictionary *)arg1 ;
-(void)setCalendarHomePushKey:(NSString *)arg1 ;
-(void)setQuotaFreeBytes:(NSNumber *)arg1 ;
-(void)setCanCreateCalendars:(BOOL)arg1 ;
-(void)setCalendarHomeSyncToken:(NSString *)arg1 ;
-(void)removecalendarWithURL:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 account:(id)arg2 ;
-(NSURL *)legacy_principalURL;
-(BOOL)canCreateCalendars;
-(NSString *)APSTopic;
-(BOOL)supportsPush;
-(void)setSupportsPush:(BOOL)arg1 ;
-(BOOL)shouldUpdatePushDelegate;
-(void)setShouldUpdatePushDelegate:(BOOL)arg1 ;
-(CalDAVRefreshContext *)refreshContext;
-(void)setCalendarsAreDirty:(BOOL)arg1 ;
-(void)setRefreshContext:(CalDAVRefreshContext *)arg1 ;
-(NSMutableDictionary *)calendarUserAddressesPerCalendar;
-(NSURL *)defaultCalendarURL;
-(NSURL *)notificationCollectionURL;
-(NSString *)notificationCollectionCTag;
-(NSString *)inboxCTag;
-(NSURL *)dropBoxURL;
-(NSString *)notificationURLString;
-(NSString *)calendarHomePushKey;
-(BOOL)supportsSyncToken;
-(NSNumber *)quotaFreeBytes;
-(BOOL)_userAddressSet:(id)arg1 isEqualToSet:(id)arg2 ;
-(void)setPreferredCalendarUserAddress:(NSURL *)arg1 ;
-(void)setPreferredCalendarEmailAddress:(NSString *)arg1 ;
-(MobileCalDAVAccount *)daAccount;
-(id)_startDateFromDaysToSync:(int)arg1 ;
-(id)_sharedSyncEndDate;
-(void)setAddedCalendars:(NSMutableSet *)arg1 ;
-(void)setModifiedCalendars:(NSMutableSet *)arg1 ;
-(void)setDeletedCalendarURLs:(NSMutableSet *)arg1 ;
-(int)calendarChangeIndex;
-(void)setCalendarChangeIndex:(int)arg1 ;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1 numUploadedElements:(long long)arg2 ;
-(void)setNotificationCollectionCTag:(NSString *)arg1 ;
-(void)setInboxCTag:(NSString *)arg1 ;
-(void)setNotificationURLString:(NSString *)arg1 ;
-(void)setIsDelegate:(BOOL)arg1 ;
-(NSDictionary *)subCalPropertiesByURL;
-(void)setSupportsSyncToken:(BOOL)arg1 ;
-(BOOL)clearCalendarChanges;
-(id)calendarUserAddressesForCalendar:(id)arg1 ;
-(void)setCalendarUserAddresses:(id)arg1 forCalendar:(id)arg2 ;
-(BOOL)calendarsAreDirty;
-(NSURL *)APSSubscriptionURL;
-(NSString *)APSEnv;
-(NSURL *)preferredCalendarUserAddress;
-(NSString *)preferredCalendarEmailAddress;
-(BOOL)hasCalendarUserAddress:(id)arg1 ;
-(BOOL)calendarUserAddressIsEquivalentToURL:(id)arg1 ;
-(BOOL)shouldRefreshPrincipalSearchProperties;
-(void)setShouldRefreshPrincipalSearchProperties:(BOOL)arg1 ;
-(void)setCalendarUserAddressesPerCalendar:(NSMutableDictionary *)arg1 ;
-(void)setLegacy_principalURL:(NSURL *)arg1 ;
-(BOOL)isDelegate;
-(void)setIsDirty:(BOOL)arg1 ;
-(void)setIsWritable:(BOOL)arg1 ;
-(BOOL)shouldFailAllTasks;
-(id)additionalHeaderValues;
-(void)noteTimeSpentInNetworking:(double)arg1 ;
-(id)accountID;
-(void)noteFailedNetworkRequest;
-(void)noteFailedProtocolRequest;
-(NSString *)fullName;
@end


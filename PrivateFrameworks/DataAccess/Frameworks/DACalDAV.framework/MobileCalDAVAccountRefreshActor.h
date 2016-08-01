/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:44 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CalDAVAccountPropertyRefreshDelegate.h>
#import <libobjc.A.dylib/CalDAVCalendarPropertyRefreshDelegate.h>
#import <libobjc.A.dylib/CalDAVCalendarSyncDelegate.h>

@protocol OS_dispatch_group;
@class DATransaction, CalDiagAccountSync, CalDAVRefreshContext, MobileCalDAVAccount, NSMutableDictionary, NSMutableArray, NSObject, NSMutableSet, NSString;

@interface MobileCalDAVAccountRefreshActor : NSObject <CalDAVAccountPropertyRefreshDelegate, CalDAVCalendarPropertyRefreshDelegate, CalDAVCalendarSyncDelegate> {

	DATransaction* _transaction;
	BOOL _shouldCancel;
	BOOL _didFinish;
	BOOL _refreshing;
	int _state;
	CalDiagAccountSync* _accountSyncDiagnostics;
	CalDAVRefreshContext* _context;
	MobileCalDAVAccount* _account;
	/*^block*/id _completionBlock;
	NSMutableDictionary* _pathsToCTags;
	NSMutableDictionary* _pathsToSyncTokens;
	NSMutableArray* _calendarsToRefresh;
	NSObject*<OS_dispatch_group> _outstandingOperationGroup;
	NSMutableSet* _outstandingTaskGroups;
	NSMutableSet* _outstandingTasks;
	NSString* _calendarHomeSyncToken;

}

@property (nonatomic,retain) CalDiagAccountSync * accountSyncDiagnostics;                         //@synthesize accountSyncDiagnostics=_accountSyncDiagnostics - In the implementation block
@property (nonatomic,retain) CalDAVRefreshContext * context;                                      //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL shouldCancel;                                                   //@synthesize shouldCancel=_shouldCancel - In the implementation block
@property (assign,nonatomic,__weak) MobileCalDAVAccount * account;                                //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL didFinish;                                                      //@synthesize didFinish=_didFinish - In the implementation block
@property (assign,nonatomic) BOOL refreshing;                                                     //@synthesize refreshing=_refreshing - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                    //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pathsToCTags;                                  //@synthesize pathsToCTags=_pathsToCTags - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pathsToSyncTokens;                             //@synthesize pathsToSyncTokens=_pathsToSyncTokens - In the implementation block
@property (nonatomic,retain) NSMutableArray * calendarsToRefresh;                                 //@synthesize calendarsToRefresh=_calendarsToRefresh - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> outstandingOperationGroup;              //@synthesize outstandingOperationGroup=_outstandingOperationGroup - In the implementation block
@property (nonatomic,retain) NSMutableSet * outstandingTaskGroups;                                //@synthesize outstandingTaskGroups=_outstandingTaskGroups - In the implementation block
@property (nonatomic,retain) NSMutableSet * outstandingTasks;                                     //@synthesize outstandingTasks=_outstandingTasks - In the implementation block
@property (assign,nonatomic) int state;                                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * calendarHomeSyncToken;                                    //@synthesize calendarHomeSyncToken=_calendarHomeSyncToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(CalDAVRefreshContext *)context;
-(void)setContext:(CalDAVRefreshContext *)arg1 ;
-(BOOL)didFinish;
-(void)setDidFinish:(BOOL)arg1 ;
-(id)_powerLogInfoDictionary;
-(void)setShouldCancel:(BOOL)arg1 ;
-(BOOL)shouldCancel;
-(MobileCalDAVAccount *)account;
-(void)refresh;
-(void)setAccount:(MobileCalDAVAccount *)arg1 ;
-(NSMutableSet *)outstandingTasks;
-(NSMutableSet *)outstandingTaskGroups;
-(void)propertyRefreshForPrincipal:(id)arg1 completedWithError:(id)arg2 ;
-(void)setOutstandingTaskGroups:(NSMutableSet *)arg1 ;
-(void)calendarRefreshForPrincipal:(id)arg1 completedWithNewCTags:(id)arg2 newSyncTokens:(id)arg3 calendarHomeSyncToken:(id)arg4 updatedCalendars:(id)arg5 error:(id)arg6 ;
-(NSString *)calendarHomeSyncToken;
-(void)setCalendarHomeSyncToken:(NSString *)arg1 ;
-(void)calendarSyncForPrincipal:(id)arg1 calendar:(id)arg2 completedWithError:(id)arg3 ;
-(id)initWithAccount:(id)arg1 context:(id)arg2 ;
-(void)setOutstandingTasks:(NSMutableSet *)arg1 ;
-(void)setOutstandingOperationGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)_teardownAllOutstandingOperations;
-(void)_sendResultToAccount;
-(BOOL)_refreshShouldContinue;
-(void)_refreshCalendarProperties;
-(void)_sendMoveTasks;
-(void)_refreshRegularCalendars;
-(void)_refreshSpecialCalendars;
-(void)_calendarCollectionsWereRefreshed;
-(NSObject*<OS_dispatch_group>)outstandingOperationGroup;
-(void)_refreshAccountProperties;
-(void)_waitForStateTransition;
-(void)setPathsToCTags:(NSMutableDictionary *)arg1 ;
-(void)setPathsToSyncTokens:(NSMutableDictionary *)arg1 ;
-(void)setCalendarsToRefresh:(NSMutableArray *)arg1 ;
-(NSMutableArray *)calendarsToRefresh;
-(BOOL)_sendMoveForItem:(id)arg1 ;
-(void)_clearMoveChange:(id)arg1 ;
-(void)_handleMoveTaskComplete:(id)arg1 moveItem:(id)arg2 ;
-(void)_syncCalendar:(id)arg1 ;
-(NSMutableDictionary *)pathsToCTags;
-(NSMutableDictionary *)pathsToSyncTokens;
-(id)_refreshedCtagForCalendar:(id)arg1 ;
-(id)_refreshedSyncTokenForCalendar:(id)arg1 ;
-(CalDiagAccountSync *)accountSyncDiagnostics;
-(void)setAccountSyncDiagnostics:(CalDiagAccountSync *)arg1 ;
-(void)cancelWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)refreshing;
-(void)setRefreshing:(BOOL)arg1 ;
-(void)teardown;
@end


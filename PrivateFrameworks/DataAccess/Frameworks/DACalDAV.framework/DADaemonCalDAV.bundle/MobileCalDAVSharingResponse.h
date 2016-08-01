/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:39 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonCalDAV/DADataclassLockWatcher.h>
#import <libobjc.A.dylib/CalDAVCalendarPropertyRefreshDelegate.h>

@protocol DAEventsCalendarSharingResponseConsumer;
@class NSString, MobileCalDAVDaemonAccount, DACoreDAVTaskManager, CoreDAVTaskGroup;

@interface MobileCalDAVSharingResponse : NSObject <DADataclassLockWatcher, CalDAVCalendarPropertyRefreshDelegate> {

	NSString* _responseID;
	id<DAEventsCalendarSharingResponseConsumer> _consumer;
	NSString* _calendarID;
	long long _response;
	MobileCalDAVDaemonAccount* _account;
	BOOL _waitingForGatekeeper;
	BOOL _holdingGatekeeperLock;
	BOOL _finished;
	DACoreDAVTaskManager* _taskManager;
	CoreDAVTaskGroup* _currentOperation;

}

@property (nonatomic,readonly) NSString * responseID;                                                  //@synthesize responseID=_responseID - In the implementation block
@property (assign,nonatomic,__weak) id<DAEventsCalendarSharingResponseConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
@property (nonatomic,retain) NSString * calendarID;                                                    //@synthesize calendarID=_calendarID - In the implementation block
@property (assign,nonatomic) long long response;                                                       //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) CoreDAVTaskGroup * currentOperation;                                      //@synthesize currentOperation=_currentOperation - In the implementation block
@property (nonatomic,readonly) DACoreDAVTaskManager * taskManager;                                     //@synthesize taskManager=_taskManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)responseWithCalendarID:(id)arg1 response:(long long)arg2 consumer:(id)arg3 account:(id)arg4 ;
-(CoreDAVTaskGroup *)currentOperation;
-(void)cancel;
-(void)dealloc;
-(long long)response;
-(void)setConsumer:(id<DAEventsCalendarSharingResponseConsumer>)arg1 ;
-(id<DAEventsCalendarSharingResponseConsumer>)consumer;
-(void)setResponse:(long long)arg1 ;
-(id)waiterID;
-(DACoreDAVTaskManager *)taskManager;
-(void)setCalendarID:(NSString *)arg1 ;
-(NSString *)calendarID;
-(void)calendarRefreshForPrincipal:(id)arg1 completedWithNewCTags:(id)arg2 newSyncTokens:(id)arg3 calendarHomeSyncToken:(id)arg4 updatedCalendars:(id)arg5 error:(id)arg6 ;
-(id)initWithCalendarID:(id)arg1 response:(long long)arg2 consumer:(id)arg3 account:(id)arg4 ;
-(void)setCurrentOperation:(CoreDAVTaskGroup *)arg1 ;
-(void)_deleteSharingInvitationWithUID:(id)arg1 ;
-(void)_reallyRespondToSharingRequest;
-(void)respondToSharingRequest;
-(NSString *)responseID;
-(void)finishWithError:(id)arg1 ;
@end


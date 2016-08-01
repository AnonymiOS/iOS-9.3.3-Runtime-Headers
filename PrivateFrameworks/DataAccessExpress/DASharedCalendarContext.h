/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface DASharedCalendarContext : NSObject {

	BOOL _shouldSyncCalendar;
	NSString* _calendarID;
	NSString* _accountID;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _completionBlock;

}

@property (nonatomic,readonly) NSString * calendarID;                           //@synthesize calendarID=_calendarID - In the implementation block
@property (nonatomic,readonly) NSString * accountID;                            //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) id completionBlock;                         //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldSyncCalendar;                           //@synthesize shouldSyncCalendar=_shouldSyncCalendar - In the implementation block
-(id)completionBlock;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)finishedWithError:(id)arg1 ;
-(BOOL)shouldSyncCalendar;
-(id)initWithCalendarID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setShouldSyncCalendar:(BOOL)arg1 ;
-(NSString *)calendarID;
-(NSString *)accountID;
@end


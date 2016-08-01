/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:15 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group, CalendarEventLoaderDelegate;
@class EKEventStore, NSObject, NSArray, NSMutableSet, NSSet;

@interface CalendarEventLoader : NSObject {

	EKEventStore* _store;
	NSObject*<OS_dispatch_queue> _occurrencesLock;
	NSArray* _loadedOccurrences;
	NSMutableSet* _occurrencesAwaitingRefresh;
	NSMutableSet* _occurrencesAwaitingDeletion;
	NSSet* _selectedCalendars;
	unsigned _daysOfPadding;
	unsigned _maxDaysToCache;
	unsigned long long _componentForExpandingRequests;
	unsigned long long _componentForExpandingPadding;
	double _preferredReloadStart;
	double _preferredReloadEnd;
	NSObject*<OS_dispatch_group> _loadGroup;
	NSObject*<OS_dispatch_queue> _loadQueue;
	int _cancelSeed;
	double _loadedStart;
	double _loadedEnd;
	BOOL _loadedOccurrencesAreStale;
	double _currentlyLoadingStart;
	double _currentlyLoadingEnd;
	double _lastRequestedStart;
	double _lastRequestedEnd;
	id<CalendarEventLoaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CalendarEventLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<CalendarEventLoaderDelegate>)arg1 ;
-(void)dealloc;
-(id<CalendarEventLoaderDelegate>)delegate;
-(void)setPadding:(unsigned)arg1 ;
-(id)initWithEventStore:(id)arg1 ;
-(void)_eventStoreChanged:(id)arg1 ;
-(void)loadIfNeeded;
-(void)_pruneLoadedOccurrences;
-(void)setCacheLimit:(unsigned)arg1 ;
-(void)_getStart:(double)arg1 end:(double)arg2 expandedToComponents:(unsigned long long)arg3 withResultStart:(double*)arg4 resultEnd:(double*)arg5 ;
-(void)_loadIfNeededBetweenStart:(double)arg1 end:(double)arg2 loadPaddingNow:(BOOL)arg3 ;
-(void)waitForBackgroundLoad;
-(void)_getLoadStart:(double*)arg1 end:(double*)arg2 fromLoadedStart:(double)arg3 loadedEnd:(double)arg4 currentlyLoadingStart:(double)arg5 currentlyLoadingEnd:(double)arg6 ;
-(void)_getStart:(double)arg1 end:(double)arg2 paddedByDays:(int)arg3 inTimeZone:(id)arg4 resultStart:(double*)arg5 resultEnd:(double*)arg6 ;
-(void)_enqueueLoadForRangeStart:(double)arg1 end:(double)arg2 ;
-(id)_uniqueEventsFromArray:(id)arg1 ;
-(void)cancelAllLoads;
-(void)addOccurrenceAwaitingRefresh:(id)arg1 ;
-(void)addOccurrenceAwaitingDeletion:(id)arg1 ;
-(void)setComponentForExpandingRequests:(unsigned long long)arg1 ;
-(void)setComponentForExpandingPadding:(unsigned long long)arg1 ;
-(void)setPreferredReloadStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)setSelectedCalendars:(id)arg1 ;
-(BOOL)loadIsComplete;
-(void)timeZoneChanged;
-(id)occurrencesForStartDate:(id)arg1 endDate:(id)arg2 preSorted:(BOOL)arg3 waitForLoad:(BOOL)arg4 ;
-(void)_reload;
@end


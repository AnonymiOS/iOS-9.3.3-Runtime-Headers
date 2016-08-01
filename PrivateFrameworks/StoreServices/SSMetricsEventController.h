/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:35 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsController.h>

@class SSMetricsEventTable;

@interface SSMetricsEventController : SSMetricsController {

	SSMetricsEventTable* _table;

}
-(void)_serialQueueInsertEvents:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(int)_maximumUnreportedToSelect;
-(id)_collectUnreportedPIDsFromDatabase:(id)arg1 matchingReportURLString:(id)arg2 since:(long long)arg3 ;
-(BOOL)deleteEventsInsertedBefore:(long long)arg1 ;
-(BOOL)deleteReportedEvents;
-(BOOL)insertEventSummaries:(id)arg1 error:(id*)arg2 ;
-(BOOL)markEventsAsReported:(id)arg1 ;
-(id)unreportedEventsForURL:(id)arg1 since:(long long)arg2 ;
-(id)newReportingSessionForURL:(id)arg1 since:(long long)arg2 ;
-(id)unreportedEventURLsSince:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)flushUnreportedEventsWithCompletionHandler:(/*^block*/id)arg1 ;
@end


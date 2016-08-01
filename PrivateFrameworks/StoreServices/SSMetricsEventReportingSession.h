/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:35 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSArray, NSMutableArray, SSMetricsEventController;

@interface SSMetricsEventReportingSession : NSObject {

	long long _insertTimestamp;
	NSURL* _reportingURL;
	NSArray* _unreportedEvents;
	NSMutableArray* _unreportedEventPIDs;
	SSMetricsEventController* _eventController;

}
-(id)initWithReportingURL:(id)arg1 insertTimestamp:(long long)arg2 eventController:(id)arg3 ;
-(id)_unreportedEvents;
-(void)_writeString:(id)arg1 toData:(id)arg2 ;
-(BOOL)anyUnreportedEvents;
-(BOOL)markEventsAsReported;
-(id)writeEventsToStream:(id)arg1 ;
-(void)dealloc;
@end


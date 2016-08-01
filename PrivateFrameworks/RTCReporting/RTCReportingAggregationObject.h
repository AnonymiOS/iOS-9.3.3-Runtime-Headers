/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:12 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ClientSessionReplyInterface.h>

@interface RTCReportingAggregationObject : NSObject <ClientSessionReplyInterface> {

	/*^block*/id _aggregationBlock;

}
-(void)dealloc;
-(void)sendMessageToClient:(id)arg1 timestamp:(double)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5 ;
-(id)initWithAggregationBlock:(/*^block*/id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ServerDocsProtocol/ServerDocsProtocol-Structs.h>
@interface SDFTimeUtils : NSObject
+(void)setTimeVal:(timeval*)arg1 withDate:(id)arg2 ;
+(void)setTimeSpec:(timespec*)arg1 withDate:(id)arg2 ;
+(void)setTimeVal:(timeval*)arg1 withTimeSpec:(timespec*)arg2 ;
+(void)setTimeSpec:(timespec*)arg1 withTimeVal:(timeval*)arg2 ;
+(double)timeIntervalWithTimeSpec:(timespec*)arg1 ;
+(double)timeIntervalWithTimeVal:(timeval*)arg1 ;
@end

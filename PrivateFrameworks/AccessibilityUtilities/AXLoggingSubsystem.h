/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:52 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXLoggingSubsystem : NSObject
+(id)identifier;
+(void)initialize;
+(BOOL)shouldProcessMessageForLogs;
+(BOOL)shouldIncludeBacktraceInLogs;
+(BOOL)shouldLogToFile;
+(BOOL)shouldIncludeFileLineAndFunctionInLogs;
+(int)defaultLogLevel;
+(void)initializeSubsytem;
+(id)_errorWithMessage:(id)arg1 underlyingError:(id)arg2 ;
+(int)effectiveLogLevel;
+(id)subsystems;
+(id)wrapError:(id)arg1 description:(id)arg2 ;
+(void)setPreferredLogLevel:(int)arg1 ;
+(void)resetPreferredLogLevel;
+(BOOL)willLog;
+(void)setShouldLogToFile:(BOOL)arg1 ;
+(id)errorWithDescription:(id)arg1 ;
+(double)threshold;
@end

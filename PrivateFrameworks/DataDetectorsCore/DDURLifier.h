/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
@interface DDURLifier : NSObject
+(void)initialize;
+(id)urlMatchesForString:(id)arg1 phoneNumberTypes:(unsigned long long)arg2 ;
+(BOOL)urlIfyTextNode:(id)arg1 inNode:(id)arg2 forMatches:(id)arg3 ;
+(id)urlIfyNode:(id)arg1 usingScanner:(DDScannerRef)arg2 phoneNumberTypes:(unsigned long long)arg3 withReferenceDate:(id)arg4 andTimeZone:(id)arg5 ;
+(id)urlMatchesForString:(id)arg1 usingScanner:(DDScannerRef)arg2 withPhoneNumberTypes:(unsigned long long)arg3 referenceDate:(id)arg4 timeZone:(id)arg5 storingResultsIn:(id)arg6 ;
+(id)urlIfyNode:(id)arg1 usingScanner:(DDScannerRef)arg2 phoneNumberTypes:(unsigned long long)arg3 ;
+(BOOL)urlIfyNode:(id)arg1 phoneNumberTypes:(unsigned long long)arg2 ;
+(id)urlMatchesForString:(id)arg1 ;
+(BOOL)urlIfyNode:(id)arg1 ;
+(id)urlMatchesForString:(id)arg1 includingTel:(BOOL)arg2 ;
@end


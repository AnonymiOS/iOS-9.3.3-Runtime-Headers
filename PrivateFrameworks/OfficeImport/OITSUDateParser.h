/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableArray, TSULocale;

@interface OITSUDateParser : NSObject {

	NSMutableArray* mFormatCategories;
	TSULocale* mLocale;
	BOOL mIsJapaneseLocale;
	CFDateFormatterRef mSpecialCaseFormatter;

}
-(void)addFormat:(id)arg1 locale:(CFLocaleRef)arg2 formatCategoryMap:(id)arg3 ;
-(void)parseFormat:(id)arg1 initialPattern:(id*)arg2 separator:(unsigned short*)arg3 ;
-(void)dealloc;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 preferredFormatString:(CFStringRef)arg2 successfulFormatString:(const _CFString*)arg3 tryAggressiveFormats:(BOOL)arg4 ;
-(id)initWithLocale:(id)arg1 ;
-(id)formatStringsDictionary;
-(CFDateFormatterRef)specialCaseDateFormatterForLocale:(CFLocaleRef)arg1 ;
-(CFDateRef)newDateFromStringTryingFormats:(CFStringRef)arg1 locale:(CFLocaleRef)arg2 formats:(id)arg3 outSuccessfulFormatString:(const _CFString*)arg4 ;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 successfulFormatString:(const _CFString*)arg2 ;
@end


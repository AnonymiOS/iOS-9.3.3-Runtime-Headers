/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:20 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@interface WBSSQLiteRow : NSObject {

	sqlite3_stmtRef _handle;

}
-(id)stringAtIndex:(unsigned long long)arg1 ;
-(id)dataAtIndex:(unsigned long long)arg1 ;
-(double)doubleAtIndex:(unsigned long long)arg1 ;
-(long long)int64AtIndex:(unsigned long long)arg1 ;
-(RawData*)uncopiedRawDataAtIndex:(unsigned long long)arg1 ;
-(id)uncopiedDataAtIndex:(unsigned long long)arg1 ;
-(BOOL)boolAtIndex:(unsigned long long)arg1 ;
-(BOOL)_isNullAtIndex:(unsigned long long)arg1 ;
-(id)initWithCurrentRowOfEnumerator:(id)arg1 ;
-(id)debugDictionaryRepresentationWithStatement:(id)arg1 ;
-(int)intAtIndex:(unsigned long long)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSEntityMigrationPolicy.h>

@class NSMutableDictionary, NSString;

@interface CHMigrationPolicy : NSEntityMigrationPolicy {

	NSMutableDictionary* mccToISOCountryCodeMap;
	NSString* lastQueriedISOCountryCode;
	NSString* currentLocale;

}
-(id)init;
-(id)getLocationForCallerId:(id)arg1 andIsoCountryCode:(id)arg2 ;
-(id)isoCountryCodeForMCC:(id)arg1 ;
-(id)isoCountryCodeIfAbsent:(id)arg1 ;
@end


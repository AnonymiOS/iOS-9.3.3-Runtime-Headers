/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:19 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSAutomaticReadingListSocialSource.h>

@interface WBSAutomaticReadingListSinaWeiboSource : WBSAutomaticReadingListSocialSource
+(id)sharedSource;
-(id)serviceName;
-(id)serviceType;
-(id)accountTypeIdentifier;
-(id)resourceURLString;
-(id)requestParametersForRecordsWithAge:(int)arg1 relativeTo:(id)arg2 ;
-(long long)compareNewestRecordInRange:(id)arg1 toOldestRecordInRange:(id)arg2 ;
-(long long)compareNewestRecordInRange:(id)arg1 toNewestRecordInRange:(id)arg2 ;
-(long long)compareOldestRecordInRange:(id)arg1 toOldestRecordInRange:(id)arg2 ;
-(long long)compareItem:(id)arg1 toItem:(id)arg2 ;
-(Class)itemClass;
@end


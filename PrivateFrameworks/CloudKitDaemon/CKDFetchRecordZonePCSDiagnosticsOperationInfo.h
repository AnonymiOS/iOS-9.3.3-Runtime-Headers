/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKDFetchRecordZonePCSDiagnosticsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	NSArray* _recordZoneIDs;

}

@property (nonatomic,retain) NSArray * recordZoneIDs;              //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(NSArray *)recordZoneIDs;
@end


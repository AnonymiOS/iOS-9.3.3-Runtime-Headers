/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKModifyRecordZonesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _allowDefaultZoneSave;
	BOOL _markZonesAsUserPurged;
	NSArray* _recordZonesToSave;
	NSArray* _recordZoneIDsToDelete;
	long long _maxZoneSaveAttempts;

}

@property (nonatomic,retain) NSArray * recordZonesToSave;                  //@synthesize recordZonesToSave=_recordZonesToSave - In the implementation block
@property (nonatomic,retain) NSArray * recordZoneIDsToDelete;              //@synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete - In the implementation block
@property (assign,nonatomic) BOOL allowDefaultZoneSave;                    //@synthesize allowDefaultZoneSave=_allowDefaultZoneSave - In the implementation block
@property (assign,nonatomic) BOOL markZonesAsUserPurged;                   //@synthesize markZonesAsUserPurged=_markZonesAsUserPurged - In the implementation block
@property (assign,nonatomic) long long maxZoneSaveAttempts;                //@synthesize maxZoneSaveAttempts=_maxZoneSaveAttempts - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRecordZonesToSave:(NSArray *)arg1 ;
-(void)setAllowDefaultZoneSave:(BOOL)arg1 ;
-(void)setMaxZoneSaveAttempts:(long long)arg1 ;
-(NSArray *)recordZonesToSave;
-(NSArray *)recordZoneIDsToDelete;
-(BOOL)allowDefaultZoneSave;
-(BOOL)markZonesAsUserPurged;
-(long long)maxZoneSaveAttempts;
-(void)setMarkZonesAsUserPurged:(BOOL)arg1 ;
-(void)setRecordZoneIDsToDelete:(NSArray *)arg1 ;
@end


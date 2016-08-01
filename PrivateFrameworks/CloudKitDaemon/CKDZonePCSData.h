/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDPCSData.h>

@class CKRecordZoneID;

@interface CKDZonePCSData : CKDPCSData {

	CKRecordZoneID* _zoneID;

}

@property (nonatomic,retain) CKRecordZoneID * zoneID;              //@synthesize zoneID=_zoneID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dataWithZoneID:(id)arg1 pcsData:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)itemID;
-(CKRecordZoneID *)zoneID;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(BOOL)decryptPCSDataWithManager:(id)arg1 error:(id*)arg2 ;
-(id)initWithZoneID:(id)arg1 pcsData:(id)arg2 ;
@end


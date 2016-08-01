/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKShareID, NSData, NSString;

@interface CKDModifyShareTokenInfo : NSObject {

	CKShareID* _shareID;
	NSData* _shortSharingTokenHashData;
	NSData* _encryptedFullTokenData;
	NSString* _baseToken;

}

@property (nonatomic,retain) CKShareID * shareID;                             //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,retain) NSData * shortSharingTokenHashData;              //@synthesize shortSharingTokenHashData=_shortSharingTokenHashData - In the implementation block
@property (nonatomic,retain) NSData * encryptedFullTokenData;                 //@synthesize encryptedFullTokenData=_encryptedFullTokenData - In the implementation block
@property (nonatomic,retain) NSString * baseToken;                            //@synthesize baseToken=_baseToken - In the implementation block
-(CKShareID *)shareID;
-(NSData *)shortSharingTokenHashData;
-(void)setShortSharingTokenHashData:(NSData *)arg1 ;
-(void)setShareID:(CKShareID *)arg1 ;
-(NSData *)encryptedFullTokenData;
-(NSString *)baseToken;
-(void)setBaseToken:(NSString *)arg1 ;
-(void)setEncryptedFullTokenData:(NSData *)arg1 ;
@end


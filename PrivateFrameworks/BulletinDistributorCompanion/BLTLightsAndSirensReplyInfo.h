/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface BLTLightsAndSirensReplyInfo : NSObject {

	BOOL _replySent;
	BOOL _didLogAggd;
	/*^block*/id _reply;
	unsigned long long _didPlayLightsAndSirens;
	NSDate* _bulletinPublicationDate;
	NSDate* _creation;

}

@property (nonatomic,readonly) BOOL replySent;                                       //@synthesize replySent=_replySent - In the implementation block
@property (nonatomic,copy) id reply;                                                 //@synthesize reply=_reply - In the implementation block
@property (assign,nonatomic) unsigned long long didPlayLightsAndSirens;              //@synthesize didPlayLightsAndSirens=_didPlayLightsAndSirens - In the implementation block
@property (nonatomic,retain) NSDate * bulletinPublicationDate;                       //@synthesize bulletinPublicationDate=_bulletinPublicationDate - In the implementation block
@property (assign,nonatomic) BOOL didLogAggd;                                        //@synthesize didLogAggd=_didLogAggd - In the implementation block
@property (nonatomic,readonly) NSDate * creation;                                    //@synthesize creation=_creation - In the implementation block
-(id)init;
-(BOOL)hasExpired;
-(id)reply;
-(unsigned long long)didPlayLightsAndSirens;
-(BOOL)sendReply;
-(BOOL)replySent;
-(void)setReply:(id)arg1 ;
-(void)setDidPlayLightsAndSirens:(unsigned long long)arg1 ;
-(NSDate *)bulletinPublicationDate;
-(void)setBulletinPublicationDate:(NSDate *)arg1 ;
-(BOOL)didLogAggd;
-(void)setDidLogAggd:(BOOL)arg1 ;
-(NSDate *)creation;
@end

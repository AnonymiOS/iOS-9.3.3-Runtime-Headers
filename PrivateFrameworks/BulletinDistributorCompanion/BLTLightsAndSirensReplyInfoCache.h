/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSDate, NSObject;

@interface BLTLightsAndSirensReplyInfoCache : NSObject {

	NSMutableDictionary* _localReplyInfo;
	NSDate* _timeToCheck;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableDictionary * localReplyInfo;              //@synthesize localReplyInfo=_localReplyInfo - In the implementation block
@property (nonatomic,retain) NSDate * timeToCheck;                              //@synthesize timeToCheck=_timeToCheck - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
+(id)sharedReplyCache;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_checkCache;
-(NSDate *)timeToCheck;
-(BOOL)_isTimeToCheck;
-(void)setTimeToCheck:(NSDate *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)retrieveReplyInfoWithSectionID:(id)arg1 bulletinID:(id)arg2 ;
-(void)cacheReply:(/*^block*/id)arg1 withSectionID:(id)arg2 bulletinID:(id)arg3 publicationDate:(id)arg4 ;
-(void)purgeReplyInfo:(id)arg1 withSectionID:(id)arg2 bulletinID:(id)arg3 ;
-(void)cacheDidPlayLightsAndSirens:(unsigned long long)arg1 withSectionID:(id)arg2 bulletinID:(id)arg3 ;
-(void)setLocalReplyInfo:(NSMutableDictionary *)arg1 ;
-(void)_setNextTimeToCheck;
-(id)_firstReplyInfoWithNoReplyWithSectionID:(id)arg1 bulletinID:(id)arg2 ;
-(void)_addReplyInfo:(id)arg1 forSectionID:(id)arg2 bulletinID:(id)arg3 ;
-(id)_firstReplyInfoWithNoDidPlayStateWithSectionID:(id)arg1 bulletinID:(id)arg2 ;
-(id)_keyForSectionID:(id)arg1 bulletinID:(id)arg2 ;
-(NSMutableDictionary *)localReplyInfo;
@end


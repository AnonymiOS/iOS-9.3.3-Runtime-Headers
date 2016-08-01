/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:35 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKDKeyValueDiskCache : NSObject {

	double _expirationTimeout;

}

@property (assign,nonatomic) double expirationTimeout;              //@synthesize expirationTimeout=_expirationTimeout - In the implementation block
-(void)setExpirationTimeout:(double)arg1 ;
-(id)initWithIdentifier:(id)arg1 context:(id)arg2 ;
-(void)deleteCachedValuesBecauseOfLowDisk;
-(void)setCachedValue:(id)arg1 forKey:(id)arg2 ;
-(id)cachedValueForKey:(id)arg1 ;
-(void)removeCachedValueForKey:(id)arg1 ;
-(double)expirationTimeout;
@end


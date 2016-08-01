/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BulletinBoard/BulletinBoard-Structs.h>
@class NSMutableDictionary, NSString;

@interface BBObjectCache : NSObject {

	opaque_pthread_mutex_t _cacheMutex;
	NSMutableDictionary* _cache;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)description;
+(id)objectCacheForIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)debugDescription;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)cacheObject:(id)arg1 ;
-(void)removeCachedObject:(id)arg1 ;
-(id)cachedObjectForUniqueID:(id)arg1 ;
-(id)_descriptionForObject:(id)arg1 uniqueID:(id)arg2 ;
@end


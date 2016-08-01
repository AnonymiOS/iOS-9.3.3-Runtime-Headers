/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IMPersonRegistrar : NSObject {

	NSMutableDictionary* _personMap;

}

@property (retain) NSMutableDictionary * _personMap;              //@synthesize personMap=_personMap - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(void)registerPerson:(id)arg1 ;
-(void)unregisterPerson:(id)arg1 ;
-(id)personForUniqueID:(id)arg1 ;
-(void)_dumpAllPersons;
-(NSMutableDictionary *)_personMap;
-(void)set_personMap:(NSMutableDictionary *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSMutableDictionary;

@interface SUICPluginManager : NSObject {

	NSString* _path;
	NSArray* _domainKeys;
	/*^block*/id _factoryInitializationBlock;
	NSMutableDictionary* _domainKeyDictionary;

}
+(id)pluginManagerForPath:(id)arg1 domainKeys:(id)arg2 factoryInitializationBlock:(/*^block*/id)arg3 ;
-(id)description;
-(void)_loadBundles;
-(id)initWithPath:(id)arg1 domainKeys:(id)arg2 factoryInitializationBlock:(/*^block*/id)arg3 ;
-(void)_registerBundle:(id)arg1 ;
-(void)enumerateFactoryInstancesForDomainKey:(id)arg1 groupIdentifier:(id)arg2 classIdentifier:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@interface RadioLoadStoreBagRequest : RadioRequest {

	BOOL _ignoresRadioDiskCache;

}

@property (assign,nonatomic) BOOL ignoresRadioDiskCache;              //@synthesize ignoresRadioDiskCache=_ignoresRadioDiskCache - In the implementation block
+(void)_urlBagDidLoadNotification:(id)arg1 ;
+(id)_cachedStoreBagForActiveAccount;
+(void)_writeStoreBagToDiskCache:(id)arg1 ;
+(id)_cachedBagFilenameForActiveAccount;
+(id)_pathForCachedStoreBags;
+(id)_accessQueue;
-(void)_handleFinishedLoadingBag:(id)arg1 withError:(id)arg2 didLoadFromNonDiskCache:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)ignoresRadioDiskCache;
-(void)setIgnoresRadioDiskCache:(BOOL)arg1 ;
-(void)loadStoreBagWithOptions:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end


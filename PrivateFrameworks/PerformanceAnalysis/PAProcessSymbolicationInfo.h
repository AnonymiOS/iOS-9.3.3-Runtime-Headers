/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:56 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSUUID;

@interface PAProcessSymbolicationInfo : NSObject {

	NSArray* _imageInfos;
	NSUUID* _sharedCacheUUID;
	unsigned long long _sharedCacheOffset;

}

@property (readonly) NSArray * imageInfos;                              //@synthesize imageInfos=_imageInfos - In the implementation block
@property (readonly) NSUUID * sharedCacheUUID;                          //@synthesize sharedCacheUUID=_sharedCacheUUID - In the implementation block
@property (readonly) unsigned long long sharedCacheOffset;              //@synthesize sharedCacheOffset=_sharedCacheOffset - In the implementation block
-(void)dealloc;
-(NSArray *)imageInfos;
-(unsigned long long)sharedCacheOffset;
-(NSUUID *)sharedCacheUUID;
-(id)initWithImageInfos:(id)arg1 andSharedCacheUUID:(id)arg2 withOffset:(unsigned long long)arg3 ;
@end


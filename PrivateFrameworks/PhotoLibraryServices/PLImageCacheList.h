/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:47 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, PLLoadRequestKey;

@interface PLImageCacheList : NSObject {

	NSObject*<OS_dispatch_queue> _isolation;
	unsigned _length;
	unsigned _lastFailLocation;
	id* _keys;
	unsigned long long* _keyHashes;
	id* _images;
	PLLoadRequestKey* _dummy[1];

}
+(id)newImageCacheList;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)removeImageForKey:(id)arg1 ;
-(id)imageForKey:(id)arg1 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
@end


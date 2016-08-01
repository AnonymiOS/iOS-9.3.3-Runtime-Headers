/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSCache, NSObject;

@interface PLPlaceholderThumbnailManager : NSObject {

	NSCache* _placeholderDataCache;
	NSCache* _placeholderImageCache;
	NSObject*<OS_dispatch_queue> _isolation;

}
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(id)placeholderDataForFormat:(int)arg1 photoImageSize:(CGSize)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 ;
-(id)newPlaceholderImageForFormat:(int)arg1 photoImageSize:(CGSize)arg2 ;
-(id)_cacheKeyForFormat:(id)arg1 photoImageSize:(CGSize)arg2 ;
-(id)_placeholderImage;
@end


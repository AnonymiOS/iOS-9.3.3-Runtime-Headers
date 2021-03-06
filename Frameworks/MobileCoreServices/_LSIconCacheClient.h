/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:24 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/_LSIconCache.h>

@class NSXPCConnection;

@interface _LSIconCacheClient : _LSIconCache {

	NSXPCConnection* _connection;

}

@property (readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)sharedInstance;
-(BOOL)invalidateItemsForBundleIdentifier:(id)arg1 ;
-(id)iconBitmapDataWithResourceDirectoryURL:(id)arg1 boundContainerURL:(id)arg2 dataContainerURL:(id)arg3 bundleIdentifier:(id)arg4 iconsDictionary:(id)arg5 cacheKey:(id)arg6 variant:(int)arg7 ;
-(id)iconBitmapDataWithResourceDirectoryURL:(id)arg1 bundleIdentifier:(id)arg2 roleIdentifier:(id)arg3 iconFiles:(id)arg4 variant:(int)arg5 options:(int)arg6 ;
-(void)dealloc;
-(id)init;
-(NSXPCConnection *)connection;
@end


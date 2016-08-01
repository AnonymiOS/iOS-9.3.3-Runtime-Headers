/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileRequester.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSMutableArray, NSMutableSet, GEOTileKeyMap, NSString;

@interface GEOSimpleTileRequester : GEOTileRequester <NSURLConnectionDelegate> {

	NSMutableArray* _waiting;
	NSMutableSet* _running;
	GEOTileKeyMap* _keysToBaseOps;
	BOOL _cancelled;
	BOOL _subclassImplementsTileEdition;
	NSMutableArray* _errors;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)eTagType;
-(void)cancel;
-(void)dealloc;
-(void)start;
-(void)_cleanup;
-(BOOL)isRunning;
-(id)localizationURLForTileKey:(GEOTileKey*)arg1 ;
-(int)checksumMethodForIncomingTileDataWithKey:(GEOTileKey*)arg1 ;
-(id)urlForTileKey:(GEOTileKey*)arg1 ;
-(id)mergeBaseTileEtag:(id)arg1 withLocalizationTileEtag:(id)arg2 ;
-(void)_doWorkOrFinish;
-(id)editionHeader;
-(id)_nextPendingOperation;
-(void)_operationFailed:(id)arg1 error:(id)arg2 ;
-(unsigned)tileEditionForKey:(GEOTileKey*)arg1 ;
-(void)_operationFinished:(id)arg1 ;
-(void)cancelKey:(const GEOTileKey*)arg1 ;
-(void)reprioritizeKey:(const GEOTileKey*)arg1 newPriority:(unsigned)arg2 ;
-(id)initWithKeyList:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 cachedEtags:(id)arg4 cachedData:(id)arg5 priorities:(id)arg6 ;
-(BOOL)_verifyDataIntegrity:(id)arg1 checksumMethod:(int)arg2 ;
-(void)_startNextPendingOperation:(id)arg1 ;
-(id)mergeBaseTile:(id)arg1 withLocalizationTile:(id)arg2 ;
-(BOOL)allowsCookies;
@end


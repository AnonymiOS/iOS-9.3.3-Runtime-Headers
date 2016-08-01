/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:07 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface GEOTileEditionUpdate : NSObject {

	NSMutableArray* _entries;
	BOOL _flushEverything;
	BOOL _invalidateEverything;

}

@property (assign,nonatomic) BOOL flushEverything;                   //@synthesize flushEverything=_flushEverything - In the implementation block
@property (assign,nonatomic) BOOL invalidateEverything;              //@synthesize invalidateEverything=_invalidateEverything - In the implementation block
-(void)dealloc;
-(id)init;
-(BOOL)invalidateEverything;
-(void)setFlushEverything:(BOOL)arg1 ;
-(void)tileset:(unsigned*)arg1 edition:(unsigned*)arg2 provider:(unsigned*)arg3 invalidateOnly:(BOOL*)arg4 atIndex:(unsigned long long)arg5 ;
-(void)setInvalidateEverything:(BOOL)arg1 ;
-(BOOL)flushEverything;
-(void)addTileset:(unsigned)arg1 edition:(unsigned)arg2 provider:(unsigned)arg3 invalidateOnly:(BOOL)arg4 ;
-(unsigned long long)tilesetCount;
@end

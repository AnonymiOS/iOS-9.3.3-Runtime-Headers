/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOSimpleTileRequester.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSString;

@interface GEOVoltaireSimpleTileRequester : GEOSimpleTileRequester <NSURLConnectionDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)localizationURLForTileKey:(GEOTileKey*)arg1 ;
-(int)checksumMethodForIncomingTileDataWithKey:(GEOTileKey*)arg1 ;
-(id)urlForTileKey:(GEOTileKey*)arg1 ;
-(unsigned)tileEditionForKey:(GEOTileKey*)arg1 ;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(id)_localizationURLForTileKey:(GEOTileKey*)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOTileKeyList, GEOTileRequester;

@interface GEOTileServerLocalProxyBatchContext : NSObject {

	GEOTileKeyList* _fullList;
	GEOTileKeyList* _interestList;
	GEOTileKeyList* _networkList;
	GEOTileKeyList* _pendingNetworkList;
	GEOTileRequester* _tileRequester;

}

@property (nonatomic,retain) GEOTileKeyList * fullList;                        //@synthesize fullList=_fullList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * interestList;                    //@synthesize interestList=_interestList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * networkList;                     //@synthesize networkList=_networkList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * pendingNetworkList;              //@synthesize pendingNetworkList=_pendingNetworkList - In the implementation block
@property (nonatomic,retain) GEOTileRequester * tileRequester;                 //@synthesize tileRequester=_tileRequester - In the implementation block
-(void)dealloc;
-(GEOTileRequester *)tileRequester;
-(GEOTileKeyList *)interestList;
-(void)setInterestList:(GEOTileKeyList *)arg1 ;
-(GEOTileKeyList *)pendingNetworkList;
-(void)setNetworkList:(GEOTileKeyList *)arg1 ;
-(GEOTileKeyList *)fullList;
-(GEOTileKeyList *)networkList;
-(void)setFullList:(GEOTileKeyList *)arg1 ;
-(void)setPendingNetworkList:(GEOTileKeyList *)arg1 ;
-(void)setTileRequester:(GEOTileRequester *)arg1 ;
@end


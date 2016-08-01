/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@protocol OS_dispatch_queue;
@class NSObject, SSURLConnectionRequest;

@interface RadioGetFeaturedStationsRequest : RadioRequest {

	NSObject*<OS_dispatch_queue> _artworkQueue;
	SSURLConnectionRequest* _request;
	unsigned _stationCount;
	BOOL _disableArtworkLoading;
	BOOL _disableCachedResponses;

}

@property (assign,nonatomic) BOOL disableArtworkLoading;               //@synthesize disableArtworkLoading=_disableArtworkLoading - In the implementation block
@property (assign,nonatomic) BOOL disableCachedResponses;              //@synthesize disableCachedResponses=_disableCachedResponses - In the implementation block
-(void)cancel;
-(id)init;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDisableArtworkLoading:(BOOL)arg1 ;
-(BOOL)disableArtworkLoading;
-(id)initWithStationCount:(unsigned)arg1 ;
-(id)_importFeaturedStationWithDictionary:(id)arg1 inModel:(id)arg2 loadArtworkSynchronously:(BOOL)arg3 ;
-(void)startWithFeaturedStationsCompletionHandler:(/*^block*/id)arg1 ;
-(id)_stationDictionariesByApplyingResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)disableCachedResponses;
-(void)setDisableCachedResponses:(BOOL)arg1 ;
@end


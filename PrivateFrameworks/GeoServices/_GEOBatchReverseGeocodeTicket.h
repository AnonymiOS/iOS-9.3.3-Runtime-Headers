/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapServiceTicket.h>

@class GEOMapServiceTraits, GEOMapRegion, NSDictionary, NSString, GEOBatchRevGeocodeRequest;

@interface _GEOBatchReverseGeocodeTicket : NSObject <GEOMapServiceTicket> {

	GEOBatchRevGeocodeRequest* _batchReverseGeocodeRequest;
	GEOMapServiceTraits* _traits;
	GEOMapRegion* _resultBoundingRegion;
	BOOL _shiftLocationsIfNeeded;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits;                             //@synthesize traits=_traits - In the implementation block
@property (nonatomic,readonly) GEOMapRegion * resultBoundingRegion;                      //@synthesize resultBoundingRegion=_resultBoundingRegion - In the implementation block
@property (getter=isChainResultSet,nonatomic,readonly) BOOL chainResultSet; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@property (nonatomic,readonly) NSString * resultSectionHeader; 
-(void)cancel;
-(void)dealloc;
-(NSString *)description;
-(GEOMapServiceTraits *)traits;
-(BOOL)isChainResultSet;
-(void)applyToCorrectedSearch:(id)arg1 ;
-(void)applyToPlaceInfo:(id)arg1 ;
-(GEOMapRegion *)resultBoundingRegion;
-(NSString *)resultSectionHeader;
-(NSDictionary *)responseUserInfo;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 ;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(BOOL)isEqualForHistoryToTicket:(id)arg1 ;
-(void)_batchReverseGeocodeWithRequest:(id)arg1 handler:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 ;
-(void)submitWithHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 ;
-(id)initWithBatchReverseGeocodeRequest:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 traits:(id)arg3 ;
@end


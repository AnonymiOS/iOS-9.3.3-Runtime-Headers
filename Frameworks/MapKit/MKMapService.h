/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@interface MKMapService : NSObject
+(id)sharedService;
-(id)ticketForMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 paymentNetwork:(id)arg3 transactionDate:(id)arg4 transactionLocation:(id)arg5 traits:(id)arg6 ;
-(id)ticketForProblemResubmission:(id)arg1 traits:(id)arg2 ;
-(id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned)arg3 includeETA:(BOOL)arg4 traits:(id)arg5 ;
-(id)ticketForMapItemToRefine:(id)arg1 traits:(id)arg2 ;
-(id)ticketForPlaceRefinementRequestWithCoordinate:(SCD_Struct_MK7*)arg1 addressLine:(id)arg2 placeName:(id)arg3 traits:(id)arg4 ;
-(id)ticketForCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2 ;
-(id)ticketForPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3 ;
-(id)ticketForURLQuery:(id)arg1 coordinate:(SCD_Struct_MK7)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 maxResults:(unsigned)arg6 traits:(id)arg7 ;
-(id)ticketForMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 includeETA:(BOOL)arg4 traits:(id)arg5 ;
-(id)ticketForExternalBusinessID:(id)arg1 contentProvider:(id)arg2 includeETA:(BOOL)arg3 traits:(id)arg4 ;
-(id)ticketForFreshBusinessClaimComponentWithMUID:(unsigned long long)arg1 resultProviderID:(int)arg2 traits:(id)arg3 ;
-(id)ticketForFreshMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 includeETA:(BOOL)arg4 traits:(id)arg5 ;
-(void)submitUsageForTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 ;
-(id)ticketForCategoryListWithTraits:(id)arg1 ;
-(id)ticketForSearchFieldPlaceholderWithTraits:(id)arg1 ;
-(id)ticketForSearchCategory:(id)arg1 searchString:(id)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)ticketForBatchPopularNearbyForSearchCategories:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForPopularNearbyForSearchCategory:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)defaultTraits;
-(void)submitUsageForTraits:(id)arg1 ;
-(void)submitUsageForTraits:(id)arg1 actionDetails:(id)arg2 routeDetails:(id)arg3 ;
-(void)submitUsageForTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 ;
-(id)ticketForMUIDs:(id)arg1 includeETA:(BOOL)arg2 traits:(id)arg3 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 providerID:(id)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 ;
-(void)submitUserAction:(id)arg1 sharingType:(id)arg2 ;
-(void)submitUsageForTraitsWithSearchFieldType:(int)arg1 prefix:(id)arg2 displayedResults:(id)arg3 selectedIndex:(int)arg4 ;
-(void)submitUserAction:(id)arg1 eventKey:(int)arg2 uniqueURL:(id)arg3 ;
-(id)_ticketForReverseGeocodeCoordinate:(SCD_Struct_MK7)arg1 includeEntryPoints:(BOOL)arg2 includeETA:(BOOL)arg3 traits:(id)arg4 ;
-(void)submitUserAction:(id)arg1 eventKey:(int)arg2 selectedIndex:(unsigned long long)arg3 uniqueID:(id)arg4 ;
-(id)ticketForForwardGeocodeAddress:(id)arg1 traits:(id)arg2 ;
-(id)ticketForForwardGeocodeString:(id)arg1 traits:(id)arg2 ;
-(void)submitUserAction:(id)arg1 eventKey:(int)arg2 ;
-(id)ticketForReverseGeocodeCoordinate:(SCD_Struct_MK7)arg1 includeETA:(BOOL)arg2 traits:(id)arg3 ;
-(id)ticketForReverseGeocodeDroppedPinCoordinate:(SCD_Struct_MK7)arg1 traits:(id)arg2 ;
-(id)ticketForProblem:(id)arg1 mapItemForProblemContext:(id)arg2 mapItemForStartDirectionsSearchInput:(id)arg3 mapitemForEndDirectionsSearchInput:(id)arg4 pushToken:(id)arg5 allowContactBackAtEmailAddress:(id)arg6 traits:(id)arg7 ;
-(void)_mapItemsForResponseData:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)mapItemsForPlacesInDetails:(id)arg1 ;
-(id)ticketForCategory:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)defaultTraitsWithTraits:(id)arg1 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 providerID:(id)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7 ;
-(id)_mk_ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 ;
-(id)defaultTraitsWithTransportType:(unsigned long long)arg1 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 providerID:(id)arg3 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 regionName:(id)arg2 ;
-(void)submitUsageForTraits:(id)arg1 eventValue:(id)arg2 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 targetID:(unsigned long long)arg3 ;
-(void)submitUserAction:(id)arg1 eventKey:(int)arg2 eventValue:(id)arg3 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 providerID:(id)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7 transitIncident:(id)arg8 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 flyoverAnimationID:(unsigned long long)arg2 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 mapRegion:(id)arg2 zoomLevel:(double)arg3 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 actionDetails:(id)arg2 uiTarget:(int)arg3 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 providerID:(id)arg3 targetID:(unsigned long long)arg4 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 categoriesDisplayed:(id)arg2 categorySelected:(id)arg3 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 actionDetails:(id)arg2 uiTarget:(int)arg3 eventValue:(id)arg4 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 providerID:(id)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7 transitDepartureSequence:(id)arg8 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 uiTarget:(int)arg2 ;
@end


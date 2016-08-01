/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOPlace, GEOPDPlace, GEOMapItemClientAttributes, NSData, NSArray, GEOPDFlyover, NSString, NSURL, GEOMapItemPlaceAttribution, GEOMapItemPhotosAttribution, GEOMapItemReviewsAttribution, GEOMapItemAttribution, GEOFeatureStyleAttributes, GEOPDBusinessClaim;


@protocol GEOMapItemPrivate <GEOMapItem>
@property (getter=_place,nonatomic,readonly) GEOPlace * place; 
@property (getter=_placeData,nonatomic,readonly) GEOPDPlace * placeData; 
@property (getter=_clientAttributes,nonatomic,readonly) GEOMapItemClientAttributes * clientAttributes; 
@property (getter=_placeDataAsData,nonatomic,readonly) NSData * placeDataAsData; 
@property (getter=_hasResolvablePartialInformation,nonatomic,readonly) BOOL hasResolvablePartialInformation; 
@property (getter=_placeType,nonatomic,readonly) int placeType; 
@property (getter=_addressGeocodeAccuracy,nonatomic,readonly) int addressGeocodeAccuracy; 
@property (getter=_roadAccessPoints,nonatomic,readonly) NSArray * roadAccessPoints; 
@property (getter=_hasResultProviderID,nonatomic,readonly) BOOL hasResultProviderID; 
@property (getter=_resultProviderID,nonatomic,readonly) int resultProviderID; 
@property (getter=_hasTransit,nonatomic,readonly) BOOL hasTransit; 
@property (getter=_transitInfo,nonatomic,readonly) id<GEOMapItemTransitInfo> transitInfo; 
@property (getter=_transitAttribution,nonatomic,readonly) id<GEOMapItemTransitAttribution> transitAttribution; 
@property (getter=_hasFlyover,nonatomic,readonly) BOOL hasFlyover; 
@property (getter=_flyover,nonatomic,readonly) GEOPDFlyover * flyover; 
@property (getter=_flyoverAnnouncementMessage,nonatomic,readonly) NSString * flyoverAnnouncementMessage; 
@property (getter=_hasMUID,nonatomic,readonly) BOOL hasMUID; 
@property (getter=_muid,nonatomic,readonly) unsigned long long muid; 
@property (getter=_hasAreaInMeters,nonatomic,readonly) BOOL hasAreaInMeters; 
@property (getter=_areaInMeters,nonatomic,readonly) double areaInMeters; 
@property (getter=_businessURL,nonatomic,readonly) NSString * businessURL; 
@property (getter=_hasUserRatingScore,nonatomic,readonly) BOOL hasUserRatingScore; 
@property (getter=_sampleSizeForUserRatingScore,nonatomic,readonly) unsigned sampleSizeForUserRatingScore; 
@property (getter=_normalizedUserRatingScore,nonatomic,readonly) float normalizedUserRatingScore; 
@property (getter=_hasPriceRange,nonatomic,readonly) BOOL hasPriceRange; 
@property (getter=_priceRange,nonatomic,readonly) unsigned priceRange; 
@property (getter=_hasAnyAmenities,nonatomic,readonly) BOOL hasAnyAmenities; 
@property (getter=_hasDeliveryAmenity,nonatomic,readonly) BOOL hasDeliveryAmenity; 
@property (getter=_hasDelivery,nonatomic,readonly) BOOL hasDelivery; 
@property (getter=_hasGoodForKidsAmenity,nonatomic,readonly) BOOL hasGoodForKidsAmenity; 
@property (getter=_goodForKids,nonatomic,readonly) BOOL goodForKids; 
@property (getter=_hasTakesReservationsAmenity,nonatomic,readonly) BOOL hasTakesReservationsAmenity; 
@property (getter=_takesReservations,nonatomic,readonly) BOOL takesReservations; 
@property (getter=_hasAcceptsApplePayAmenity,nonatomic,readonly) BOOL hasAcceptsApplePayAmenity; 
@property (getter=_acceptsApplePay,nonatomic,readonly) BOOL acceptsApplePay; 
@property (getter=_hasOperatingHours,nonatomic,readonly) BOOL hasOperatingHours; 
@property (getter=_hasCurrentOperatingHours,nonatomic,readonly) BOOL hasCurrentOperatingHours; 
@property (getter=_operatingHours,nonatomic,readonly) NSArray * operatingHours; 
@property (getter=_hasTelephone,nonatomic,readonly) BOOL hasTelephone; 
@property (getter=_telephone,nonatomic,readonly) NSString * telephone; 
@property (getter=_hasTextBlock,nonatomic,readonly) BOOL hasTextBlock; 
@property (getter=_textBlockTitle,nonatomic,readonly) NSString * textBlockTitle; 
@property (getter=_textBlockText,nonatomic,readonly) NSString * textBlockText; 
@property (getter=_hasPairOfFactoids,nonatomic,readonly) BOOL hasPairOfFactoids; 
@property (getter=_factoids,nonatomic,readonly) NSArray * factoids; 
@property (getter=_disambiguationName,nonatomic,readonly) NSString * disambiguationName; 
@property (getter=_openingHoursOptions,nonatomic,readonly) unsigned long long openingHoursOptions; 
@property (getter=_needsAttribution,nonatomic,readonly) BOOL needsAttribution; 
@property (getter=_webURL,nonatomic,copy,readonly) NSURL * webURL; 
@property (getter=_providerURL,nonatomic,copy,readonly) NSURL * providerURL; 
@property (getter=_vendorID,nonatomic,copy,readonly) NSString * vendorID; 
@property (getter=_attribution,nonatomic,readonly) GEOMapItemPlaceAttribution * attribution; 
@property (getter=_photosAttribution,nonatomic,readonly) GEOMapItemPhotosAttribution * photosAttribution; 
@property (getter=_reviewsAttribution,nonatomic,readonly) GEOMapItemReviewsAttribution * reviewsAttribution; 
@property (getter=_encyclopedicAttribution,nonatomic,readonly) GEOMapItemAttribution * encyclopedicAttribution; 
@property (getter=_poiSurveyURLString,nonatomic,readonly) NSString * poiSurveyURLString; 
@property (getter=_poiPinpointURLString,nonatomic,readonly) NSString * poiPinpointURLString; 
@property (getter=_styleAttributes,nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
@property (getter=_customIconID,nonatomic,readonly) unsigned long long customIconID; 
@property (getter=_additionalPlaceInfos,nonatomic,readonly) NSArray * additionalPlaceInfos; 
@property (getter=_hasBusinessClaim,nonatomic,readonly) BOOL hasBusinessClaim; 
@property (getter=_businessClaim,nonatomic,readonly) GEOPDBusinessClaim * businessClaim; 
@property (getter=_resultSnippetLocationString,nonatomic,readonly) NSString * resultSnippetLocationString; 
@property (getter=_resultSnippetDistanceDisplayThreshold,nonatomic,readonly) unsigned resultSnippetDistanceDisplayThreshold; 
@property (getter=_reviews,nonatomic,readonly) NSArray * reviews; 
@property (getter=_photos,nonatomic,readonly) NSArray * photos; 
@required
-(id)_roadAccessPoints;
-(unsigned long long)_muid;
-(id)_telephone;
-(id)_photos;
-(id)_styleAttributes;
-(int)_addressGeocodeAccuracy;
-(id)_place;
-(id)_operatingHours;
-(id)_reviews;
-(unsigned long long)_customIconID;
-(id)_transitAttribution;
-(id)_flyover;
-(id)_poiPinpointURLString;
-(BOOL)_hasFlyover;
-(BOOL)_hasTransit;
-(id)_encyclopedicAttribution;
-(id)_transitInfo;
-(id)_reviewsAttribution;
-(BOOL)_hasMUID;
-(unsigned)_resultSnippetDistanceDisplayThreshold;
-(id)_resultSnippetLocationString;
-(BOOL)_hasAreaInMeters;
-(id)_businessClaim;
-(BOOL)_hasBusinessClaim;
-(id)_flyoverAnnouncementMessage;
-(id)_additionalPlaceInfos;
-(unsigned)_sampleSizeForUserRatingScore;
-(BOOL)_hasUserRatingScore;
-(int)_recommendedTransportType;
-(double)_areaInMeters;
-(id)_businessURL;
-(id)_spokenAddressForLocale:(id)arg1;
-(BOOL)_hasAnyAmenities;
-(unsigned)_priceRange;
-(BOOL)_hasDelivery;
-(BOOL)_hasTravelTimeForTransportType:(int)arg1;
-(BOOL)_hasDeliveryAmenity;
-(id)_poiSurveyURLString;
-(unsigned)_travelDistanceForTransportType:(int)arg1;
-(BOOL)_hasPriceRange;
-(unsigned)_travelTimeForTransportType:(int)arg1;
-(BOOL)_acceptsApplePay;
-(BOOL)_hasLocalizedCategoryNamesForType:(unsigned)arg1;
-(BOOL)_takesReservations;
-(BOOL)_hasAcceptsApplePayAmenity;
-(id)_arrivalMapRegionForTransportType:(int)arg1;
-(BOOL)_goodForKids;
-(BOOL)_hasTakesReservationsAmenity;
-(id)_localizedCategoryNamesForType:(unsigned)arg1;
-(BOOL)_hasGoodForKidsAmenity;
-(id)_mapItemByStrippingOptionalData;
-(BOOL)_hasTextBlock;
-(id)_textBlockTitle;
-(id)_asPlaceInfo;
-(BOOL)_hasTelephone;
-(BOOL)_hasOperatingHours;
-(BOOL)_hasCurrentOperatingHours;
-(BOOL)_needsAttribution;
-(id)_placeDataAsData;
-(id)_webURL;
-(unsigned long long)_openingHoursOptions;
-(BOOL)_hasResolvablePartialInformation;
-(id)_placeData;
-(id)_factoids;
-(id)_disambiguationName;
-(id)_clientAttributes;
-(id)_textBlockText;
-(BOOL)_hasPairOfFactoids;
-(id)_photosAttribution;
-(BOOL)_hasResultProviderID;
-(int)_resultProviderID;
-(id)_vendorID;
-(id)_attribution;
-(int)_placeType;
-(float)_normalizedUserRatingScore;
-(id)_providerURL;

@end


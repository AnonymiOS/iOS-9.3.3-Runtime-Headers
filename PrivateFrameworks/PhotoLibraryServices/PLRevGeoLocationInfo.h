/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapItemPrivate;
@class PLRevGeoCompoundNameInfo, NSString;

@interface PLRevGeoLocationInfo : NSObject {

	BOOL _isValid;
	BOOL _isHome;
	id<GEOMapItemPrivate> _geoMapItem;
	PLRevGeoCompoundNameInfo* _compoundNameInfo;
	PLRevGeoCompoundNameInfo* _compoundSecondaryNameInfo;
	NSString* _providerId;
	unsigned long long _providerVersion;

}

@property (nonatomic,readonly) BOOL isValid;                                                    //@synthesize isValid=_isValid - In the implementation block
@property (nonatomic,retain) id<GEOMapItemPrivate> geoMapItem;                                  //@synthesize geoMapItem=_geoMapItem - In the implementation block
@property (nonatomic,retain) PLRevGeoCompoundNameInfo * compoundNameInfo;                       //@synthesize compoundNameInfo=_compoundNameInfo - In the implementation block
@property (nonatomic,retain) PLRevGeoCompoundNameInfo * compoundSecondaryNameInfo;              //@synthesize compoundSecondaryNameInfo=_compoundSecondaryNameInfo - In the implementation block
@property (assign,nonatomic) BOOL isHome;                                                       //@synthesize isHome=_isHome - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode; 
@property (nonatomic,retain) NSString * providerId;                                             //@synthesize providerId=_providerId - In the implementation block
@property (assign,nonatomic) unsigned long long providerVersion;                                //@synthesize providerVersion=_providerVersion - In the implementation block
+(id)_newRevGeoLocationInfoFromData:(id)arg1 ;
+(id)newDataFromRevGeoLocationInfo:(id)arg1 ;
+(id)_namingOrderForAssetReverseGeoDescription;
+(BOOL)isValidFromData:(id)arg1 ;
+(/*^block*/id)sortedNameAndAreaInfoComparatorWithHomeAtEnd:(BOOL)arg1 ;
+(unsigned long long)qualityTypeForPointInCountryCode:(id)arg1 withDataProviderId:(id)arg2 ;
+(unsigned long long)currentVersion;
-(void)dealloc;
-(id)description;
-(id)localizedDescription;
-(BOOL)isValid;
-(id)initWithData:(id)arg1 ;
-(void)setProviderId:(NSString *)arg1 ;
-(NSString *)providerId;
-(NSString *)countryCode;
-(id<GEOMapItemPrivate>)geoMapItem;
-(PLRevGeoCompoundNameInfo *)compoundNameInfo;
-(void)setCompoundNameInfo:(PLRevGeoCompoundNameInfo *)arg1 ;
-(void)setCompoundSecondaryNameInfo:(PLRevGeoCompoundNameInfo *)arg1 ;
-(void)setIsHome:(BOOL)arg1 ;
-(void)setProviderVersion:(unsigned long long)arg1 ;
-(id)dataForInfo;
-(void)_addNameInfo:(id)arg1 inPlaceInfoMap:(id)arg2 totalPlaceCount:(long long*)arg3 ;
-(void)setGeoMapItem:(id<GEOMapItemPrivate>)arg1 ;
-(PLRevGeoCompoundNameInfo *)compoundSecondaryNameInfo;
-(unsigned long long)providerVersion;
-(BOOL)isHome;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:23 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUICacheCoding.h>

@class NSMutableDictionary, NSString, NSDictionary;

@interface SKUIItemOffer : NSObject <SKUICacheCoding> {

	NSString* _actionParameters;
	NSString* _buttonText;
	NSString* _confirmationText;
	long long _fileSize;
	NSString* _fileSizeText;
	NSString* _offerTypeString;
	float _price;
	NSString* _variantIdentifier;

}

@property (nonatomic,readonly) NSString * actionParameters;                            //@synthesize actionParameters=_actionParameters - In the implementation block
@property (nonatomic,readonly) NSString * buttonText;                                  //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,readonly) NSString * confirmationText;                            //@synthesize confirmationText=_confirmationText - In the implementation block
@property (nonatomic,readonly) long long fileSize;                                     //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,readonly) NSString * fileSizeText; 
@property (nonatomic,readonly) NSDictionary * lookupDictionary; 
@property (nonatomic,readonly) long long offerType; 
@property (nonatomic,readonly) float price;                                            //@synthesize price=_price - In the implementation block
@property (nonatomic,readonly) NSString * variantIdentifier;                           //@synthesize variantIdentifier=_variantIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
-(long long)fileSize;
-(float)price;
-(NSString *)buttonText;
-(NSString *)variantIdentifier;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(void)_setFileSizeWithAssets:(id)arg1 ;
-(void)_setFileSizeWithFlavors:(id)arg1 ;
-(id)initWithButtonText:(id)arg1 ;
-(id)initWithLookupDictionary:(id)arg1 ;
-(id)initWithOfferDictionary:(id)arg1 ;
-(id)initWithRedownloadToken:(id)arg1 ;
-(NSString *)fileSizeText;
-(NSDictionary *)lookupDictionary;
-(long long)offerType;
-(void)_addActionParameterWithName:(id)arg1 value:(id)arg2 ;
-(void)_setFileSizeWithDeviceSizes:(id)arg1 ;
-(NSString *)actionParameters;
-(NSString *)confirmationText;
@end


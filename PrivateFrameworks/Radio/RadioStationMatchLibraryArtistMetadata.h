/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioStationMatchMetadata.h>

@class NSString, NSNumber;

@interface RadioStationMatchLibraryArtistMetadata : RadioStationMatchMetadata {

	NSString* _artistName;
	NSNumber* _artistStoreID;
	NSNumber* _representativeCloudID;

}

@property (nonatomic,copy) NSString * artistName;                         //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSNumber * artistStoreID;                      //@synthesize artistStoreID=_artistStoreID - In the implementation block
@property (nonatomic,copy) NSNumber * representativeCloudID;              //@synthesize representativeCloudID=_representativeCloudID - In the implementation block
+(id)metadataKey;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(id)copyMetadataDictionary;
-(NSNumber *)representativeCloudID;
-(NSNumber *)artistStoreID;
-(void)setRepresentativeCloudID:(NSNumber *)arg1 ;
-(void)setArtistStoreID:(NSNumber *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSNumber, NSDate;

@interface AssetCollectionInfo : NSObject <NSSecureCoding> {

	BOOL _isMine;
	BOOL _isVideo;
	BOOL _isPhotoIris;
	BOOL _isDeletable;
	NSString* _GUID;
	NSString* _personID;
	NSDictionary* _metaData;
	NSNumber* _width;
	NSNumber* _height;
	NSDate* _timestamp;

}

@property (getter=UID,nonatomic,retain,readonly) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain,readonly) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (nonatomic,readonly) BOOL isMine;                                    //@synthesize isMine=_isMine - In the implementation block
@property (nonatomic,readonly) BOOL isVideo;                                   //@synthesize isVideo=_isVideo - In the implementation block
@property (nonatomic,readonly) BOOL isPhotoIris;                               //@synthesize isPhotoIris=_isPhotoIris - In the implementation block
@property (nonatomic,readonly) BOOL isDeletable;                               //@synthesize isDeletable=_isDeletable - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * metaData;                 //@synthesize metaData=_metaData - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * width;                        //@synthesize width=_width - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * height;                       //@synthesize height=_height - In the implementation block
@property (nonatomic,retain,readonly) NSDate * timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSDate *)timestamp;
-(NSNumber *)width;
-(NSNumber *)height;
-(BOOL)isVideo;
-(NSString *)personID;
-(BOOL)isMine;
-(BOOL)isDeletable;
-(id)initWithAssetCollection:(id)arg1 ;
-(NSDictionary *)metaData;
-(BOOL)isPhotoIris;
-(NSString *)GUID;
@end


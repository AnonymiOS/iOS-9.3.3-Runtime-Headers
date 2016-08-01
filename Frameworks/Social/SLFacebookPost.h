/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:08 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSString, NSURL, SLFacebookPlace, SLFacebookAlbum, SLFacebookPostPrivacySetting, NSArray;

@interface SLFacebookPost : NSObject <NSSecureCoding> {

	NSMutableArray* _imageData;
	NSMutableArray* _imageAssetURLs;
	NSMutableArray* _videoData;
	NSMutableArray* _videoAssetURLs;
	NSString* _maskedApplicationID;
	NSString* _text;
	NSString* _videoExportPreset;
	NSURL* _link;
	SLFacebookPlace* _place;
	SLFacebookAlbum* _album;
	SLFacebookPostPrivacySetting* _privacySetting;
	NSArray* _taggedUserIDs;

}

@property (retain) NSString * text;                                            //@synthesize text=_text - In the implementation block
@property (retain) NSArray * imageData; 
@property (retain) NSArray * imageAssetURLs; 
@property (retain) NSArray * videoData; 
@property (retain) NSArray * videoAssetURLs; 
@property (retain) NSString * videoExportPreset;                               //@synthesize videoExportPreset=_videoExportPreset - In the implementation block
@property (retain) NSURL * link;                                               //@synthesize link=_link - In the implementation block
@property (retain) SLFacebookPlace * place;                                    //@synthesize place=_place - In the implementation block
@property (retain) SLFacebookAlbum * album;                                    //@synthesize album=_album - In the implementation block
@property (retain) SLFacebookPostPrivacySetting * privacySetting;              //@synthesize privacySetting=_privacySetting - In the implementation block
@property (retain) NSString * maskedApplicationID;                             //@synthesize maskedApplicationID=_maskedApplicationID - In the implementation block
@property (retain) NSArray * taggedUserIDs;                                    //@synthesize taggedUserIDs=_taggedUserIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copy;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setImageData:(NSArray *)arg1 ;
-(NSURL *)link;
-(void)setLink:(NSURL *)arg1 ;
-(SLFacebookPlace *)place;
-(void)setPlace:(SLFacebookPlace *)arg1 ;
-(SLFacebookPostPrivacySetting *)privacySetting;
-(void)setPrivacySetting:(SLFacebookPostPrivacySetting *)arg1 ;
-(void)addImageData:(id)arg1 ;
-(void)addImageAssetURL:(id)arg1 ;
-(void)addVideoData:(id)arg1 ;
-(void)addVideoAssetURL:(id)arg1 ;
-(void)setVideoExportPreset:(NSString *)arg1 ;
-(id)_encodableObjectProperties;
-(void)setImageAssetURLs:(NSArray *)arg1 ;
-(void)setVideoAssetURLs:(NSArray *)arg1 ;
-(void)setVideoData:(NSArray *)arg1 ;
-(void)setMaskedApplicationID:(NSString *)arg1 ;
-(NSArray *)imageAssetURLs;
-(NSArray *)videoData;
-(NSArray *)videoAssetURLs;
-(NSString *)maskedApplicationID;
-(NSString *)videoExportPreset;
-(NSArray *)taggedUserIDs;
-(void)setTaggedUserIDs:(NSArray *)arg1 ;
-(NSArray *)imageData;
-(SLFacebookAlbum *)album;
-(void)setAlbum:(SLFacebookAlbum *)arg1 ;
@end


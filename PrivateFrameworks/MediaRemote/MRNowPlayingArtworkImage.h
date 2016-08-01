/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:11 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRNowPlayingArtwork.h>

@class NSData, NSString;

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork {

	NSData* _imageData;
	NSString* _mimeType;

}

@property (nonatomic,copy,readonly) NSData * imageData;               //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,copy,readonly) NSString * mimeType;              //@synthesize mimeType=_mimeType - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)type;
-(NSString *)mimeType;
-(id)initWithImageData:(id)arg1 mimeType:(id)arg2 ;
-(BOOL)hasArtworkData;
-(void)bindToXPCDictionary:(id)arg1 ;
-(id)copyImageData;
-(NSData *)imageData;
@end


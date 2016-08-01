/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPAVItem, MPTimeMarker;

@interface MPAVItemTimeMarkerEvent : NSObject {

	MPAVItem* _AVItem;
	MPTimeMarker* _chapterMarker;
	MPTimeMarker* _artworkMarker;
	MPTimeMarker* _URLMarker;
	MPTimeMarker* _closedCaptionMarker;

}

@property (nonatomic,retain) MPAVItem * AVItem;                               //@synthesize AVItem=_AVItem - In the implementation block
@property (nonatomic,retain) MPTimeMarker * chapterMarker;                    //@synthesize chapterMarker=_chapterMarker - In the implementation block
@property (nonatomic,retain) MPTimeMarker * artworkMarker;                    //@synthesize artworkMarker=_artworkMarker - In the implementation block
@property (nonatomic,retain) MPTimeMarker * URLMarker;                        //@synthesize URLMarker=_URLMarker - In the implementation block
@property (nonatomic,retain) MPTimeMarker * closedCaptionMarker;              //@synthesize closedCaptionMarker=_closedCaptionMarker - In the implementation block
-(void)setChapterMarker:(MPTimeMarker *)arg1 ;
-(void)setArtworkMarker:(MPTimeMarker *)arg1 ;
-(void)setURLMarker:(MPTimeMarker *)arg1 ;
-(void)setClosedCaptionMarker:(MPTimeMarker *)arg1 ;
-(MPTimeMarker *)chapterMarker;
-(MPTimeMarker *)artworkMarker;
-(MPTimeMarker *)URLMarker;
-(MPTimeMarker *)closedCaptionMarker;
-(id)initWithTimeMarkerNotificationUserInfo:(id)arg1 ;
-(id)crossedMarkerOfType:(int)arg1 ;
-(MPAVItem *)AVItem;
-(void)setAVItem:(MPAVItem *)arg1 ;
@end


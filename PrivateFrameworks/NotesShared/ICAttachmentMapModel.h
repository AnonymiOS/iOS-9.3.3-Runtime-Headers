/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICAttachmentModel.h>

@class MKMapSnapshotter;

@interface ICAttachmentMapModel : ICAttachmentModel {

	MKMapSnapshotter* _mapSnapshotter;

}

@property (retain) MKMapSnapshotter * mapSnapshotter;              //@synthesize mapSnapshotter=_mapSnapshotter - In the implementation block
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
-(BOOL)needToGeneratePreviews;
-(BOOL)hasPreviews;
-(/*^block*/id)genericListThumbnailCreator;
-(/*^block*/id)genericBrickThumbnailCreator;
-(BOOL)generateAsynchronousPreviews;
-(void)generatePreviews;
-(void)setMapSnapshotter:(MKMapSnapshotter *)arg1 ;
-(MKMapSnapshotter *)mapSnapshotter;
@end


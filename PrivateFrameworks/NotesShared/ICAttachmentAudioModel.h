/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:08 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICAttachmentModel.h>

@class NSString, NSDate;

@interface ICAttachmentAudioModel : ICAttachmentModel {

	BOOL _recordedInNotes;
	NSString* _title;
	NSDate* _creationDate;

}

@property (assign,nonatomic) BOOL recordedInNotes;              //@synthesize recordedInNotes=_recordedInNotes - In the implementation block
@property (nonatomic,copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;               //@synthesize creationDate=_creationDate - In the implementation block
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithAttachment:(id)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(/*^block*/id)genericListThumbnailCreator;
-(/*^block*/id)genericBrickThumbnailCreator;
-(void)updateFileBasedAttributes;
-(BOOL)recordedInNotes;
-(void)setRecordedInNotes:(BOOL)arg1 ;
@end


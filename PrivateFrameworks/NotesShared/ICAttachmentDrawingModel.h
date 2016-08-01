/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICAttachmentModel.h>

@class ICDrawingVersionedDocument, ICDrawing, UIImage;

@interface ICAttachmentDrawingModel : ICAttachmentModel {

	ICDrawingVersionedDocument* _drawingDocument;

}

@property (nonatomic,readonly) ICDrawing * drawing; 
@property (nonatomic,readonly) UIImage * imageForActivityItem; 
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
-(id)previewItemURL;
-(id)previewItemTitle;
-(id)activityItems;
-(BOOL)needToGeneratePreviews;
-(BOOL)hasPreviews;
-(/*^block*/id)genericListThumbnailCreator;
-(/*^block*/id)genericBrickThumbnailCreator;
-(void)generatePreviews;
-(BOOL)showThumbnailInNoteList;
-(id)previewImageURL;
-(CGAffineTransform)previewImageOrientationTransform;
-(long long)previewImageOrientation;
-(ICDrawing *)drawing;
-(void)mergeWithMergeableData:(id)arg1 ;
-(void)writeMergeableData;
-(BOOL)generatePreviewsDuringCloudActivity;
-(id)activityItem;
-(id)drawingDocument;
-(id)sharedDrawingController;
-(UIImage *)imageForActivityItem;
-(void)asyncLoadDrawingCompletion:(/*^block*/id)arg1 ;
-(void)setImage:(UIImage*)arg1 forDrawing:(id)arg2 updateChangeCount:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
@end


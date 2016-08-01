/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKTranscriptCollectionViewControllerDelegate <NSObject>
@required
-(void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
-(void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewTappedForItemWithIndexPath:(id)arg2;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewTitleTappedForItemWithIndexPath:(id)arg2;
-(void)transcriptCollectionViewController:(id)arg1 moreButtonTappedForRowAtIndexPath:(id)arg2;
-(void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout UIEdgeInsets*)arg2;
-(void)transcriptCollectionViewControllerDidInset:(id)arg1;
-(BOOL)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1;
-(void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;
-(void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;
-(void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(CGSize)arg2;
-(void)transcriptCollectionViewControllerWillScrollToBottom:(id)arg1;
-(void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)arg1;

@end

/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFMailComposeViewDelegate <UIPickerViewDelegate,UITableViewDelegate,UITableViewDataSource,UIDocumentPickerDelegate,UIPopoverPresentationControllerDelegate,MFMailMarkupDelegate>
@optional
-(void)composeBodyFieldDidFinishLoad;

@required
-(BOOL)hasAttachments;
-(void)markupAttachment:(id)arg1;
-(void)changeQuoteLevel:(long long)arg1;
-(void)insertPhotoOrVideo;
-(BOOL)canShowFromField;
-(BOOL)canShowImageSizeField;
-(id)sendingEmailAddressIfExists;
-(id)currentScaleImageSize;
-(void)selectCurrentEntryForFromAddressPickerView:(id)arg1;
-(void)scrollToSelectedEntryInFromAddressTableView:(id)arg1;
-(void)updateSignature;
-(id)sendingEmailAddress;
-(void)setSendingEmailAddress:(id)arg1;
-(BOOL)bccAddressesDirtied;
-(id)sendingAccountProxy;
-(void)didInsertBodyText:(id)arg1;
-(int)compositionType;
-(void)importDocument;
-(id)compositionContext;
-(void)showPhotoPickerWithSourceType:(long long)arg1 fromSource:(id)arg2;
-(BOOL)canShowAttachmentPicker;
-(void)didInsertAttachment:(id)arg1;
-(BOOL)sendingEmailDirtied;
-(id)popoverManager;
-(id)presentationViewController;
-(id)emailAddresses;

@end

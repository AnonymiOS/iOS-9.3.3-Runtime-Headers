/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/MSCLTokenTextViewDelegate.h>
#import <libobjc.A.dylib/MSCLSettingsTableViewCellDelegate.h>

@protocol MSCLAttachmentPropertiesTableViewSectionDelegate;
@class SKUIClientContext, NSArray, MSCLVideoCoverImageSelectionView, UIImage, NSString;

@interface MSCLAttachmentPropertiesTableViewSection : NSObject <UITextFieldDelegate, MSCLTokenTextViewDelegate, MSCLSettingsTableViewCellDelegate> {

	SKUIClientContext* _clientContext;
	BOOL _isExplicit;
	double _sectionHeaderHeight;
	long long _sectionType;
	NSArray* _tableViewCells;
	MSCLVideoCoverImageSelectionView* _videoCoverImageView;
	id<MSCLAttachmentPropertiesTableViewSectionDelegate> _sectionDelegate;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;                                                      //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<MSCLAttachmentPropertiesTableViewSectionDelegate> sectionDelegate;              //@synthesize sectionDelegate=_sectionDelegate - In the implementation block
@property (nonatomic,readonly) long long sectionType;                                                                  //@synthesize sectionType=_sectionType - In the implementation block
@property (nonatomic,readonly) double sectionHeaderHeight;                                                             //@synthesize sectionHeaderHeight=_sectionHeaderHeight - In the implementation block
@property (nonatomic,readonly) UIImage * selectedCoverImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)resignFirstResponder;
-(double)sectionHeaderHeight;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(SKUIClientContext *)clientContext;
-(long long)sectionType;
-(void)tableViewCell:(id)arg1 valueChanged:(BOOL)arg2 ;
-(id)initWithSectionType:(long long)arg1 clientContext:(id)arg2 ;
-(void)setSectionDelegate:(id<MSCLAttachmentPropertiesTableViewSectionDelegate>)arg1 ;
-(void)setTableCellsWithAttachment:(id)arg1 configuration:(id)arg2 ;
-(id)tokenTextViewForRowAtIndexPath:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(UIImage *)selectedCoverImage;
-(void)commitValuesToAttachment:(id)arg1 ;
-(void)setCoverImage:(id)arg1 ;
-(void)textView:(id)arg1 didChange:(long long)arg2 ;
-(id)_newTextFieldCellWithTitle:(id)arg1 placeholder:(id)arg2 value:(id)arg3 ;
-(id<MSCLAttachmentPropertiesTableViewSectionDelegate>)sectionDelegate;
-(id)_newTextViewCellWithTitle:(id)arg1 placeholder:(id)arg2 artists:(id)arg3 changeDelegate:(id)arg4 ;
-(id)_newTableViewCellWithContentView:(id)arg1 ;
-(id)_newTextViewCellWithTitle:(id)arg1 placeholder:(id)arg2 artists:(id)arg3 ;
@end


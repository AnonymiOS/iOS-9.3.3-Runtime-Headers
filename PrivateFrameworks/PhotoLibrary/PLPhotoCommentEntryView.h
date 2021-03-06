/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:12 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol PLPhotoCommentEntryViewDelegate;
@class UILabel, UITextView, UIButton, NSString;

@interface PLPhotoCommentEntryView : UIView <UITextViewDelegate> {

	UILabel* placeholderLabel;
	UILabel* _placeholderLabel;
	UITextView* _textView;
	UIButton* _postButton;
	id<PLPhotoCommentEntryViewDelegate> _delegate;

}

@property (nonatomic,retain,readonly) UITextView * textView;                            //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain,readonly) UILabel * placeholderLabel;                       //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,retain,readonly) UIButton * postButton;                            //@synthesize postButton=_postButton - In the implementation block
@property (assign,nonatomic) id<PLPhotoCommentEntryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<PLPhotoCommentEntryViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<PLPhotoCommentEntryViewDelegate>)delegate;
-(void)setText:(id)arg1 ;
-(void)clearText;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(BOOL)textViewShouldEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(double)preferredHeight;
-(UITextView *)textView;
-(UILabel *)placeholderLabel;
-(id)trimmedText;
-(UIButton *)postButton;
@end


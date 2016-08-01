/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNLabeledCell.h>

@protocol CNPropertyCellDelegate;
@class CNTransportButton, UILabel;

@interface CNFaceTimeCell : CNLabeledCell {

	BOOL _isFaceTimeAudioAvailable;
	CNTransportButton* _transportIcon1;
	CNTransportButton* _transportIcon2;
	id<CNPropertyCellDelegate> _delegate;
	UILabel* _faceTimeLabel;

}

@property (nonatomic,readonly) CNTransportButton * transportIcon1;                    //@synthesize transportIcon1=_transportIcon1 - In the implementation block
@property (nonatomic,readonly) CNTransportButton * transportIcon2;                    //@synthesize transportIcon2=_transportIcon2 - In the implementation block
@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UILabel * faceTimeLabel;                               //@synthesize faceTimeLabel=_faceTimeLabel - In the implementation block
@property (assign,nonatomic) BOOL isFaceTimeAudioAvailable;                           //@synthesize isFaceTimeAudioAvailable=_isFaceTimeAudioAvailable - In the implementation block
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<CNPropertyCellDelegate>)delegate;
-(void)tintColorDidChange;
-(BOOL)isFaceTimeAudioAvailable;
-(id)variableConstraints;
-(double)minCellHeight;
-(id)constantConstraints;
-(id)rightMostView;
-(void)setIsFaceTimeAudioAvailable:(BOOL)arg1 ;
-(void)transportButtonClicked:(id)arg1 ;
-(CNTransportButton *)transportIcon1;
-(CNTransportButton *)transportIcon2;
-(UILabel *)faceTimeLabel;
-(void)performDefaultAction;
-(id)labelView;
@end


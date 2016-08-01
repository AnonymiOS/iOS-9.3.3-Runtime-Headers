/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIDocumentPickerCell.h>

@class UIImageView, NSLayoutConstraint;

@interface _UIDocumentPickerContainerCell : _UIDocumentPickerCell {

	UIImageView* _containerIconView;
	id _observerToken;
	NSLayoutConstraint* _containerIconWidthConstraint;
	NSLayoutConstraint* _containerIconHeightConstraint;
	NSLayoutConstraint* _containerIconBottomConstraint;

}

@property (nonatomic,retain) UIImageView * containerIconView;                                 //@synthesize containerIconView=_containerIconView - In the implementation block
@property (nonatomic,retain) id observerToken;                                                //@synthesize observerToken=_observerToken - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * containerIconWidthConstraint;               //@synthesize containerIconWidthConstraint=_containerIconWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * containerIconHeightConstraint;              //@synthesize containerIconHeightConstraint=_containerIconHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * containerIconBottomConstraint;              //@synthesize containerIconBottomConstraint=_containerIconBottomConstraint - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)_showPickableDiagnostic;
-(void)reloadItem:(BOOL)arg1 ;
-(UIImageView *)containerIconView;
-(void)setContainerIconView:(UIImageView *)arg1 ;
-(void)updateContents;
-(void)setContainerIconBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)containerIconBottomConstraint;
-(void)setContainerIconWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContainerIconHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)containerIconWidthConstraint;
-(NSLayoutConstraint *)containerIconHeightConstraint;
-(void)setObserverToken:(id)arg1 ;
-(id)observerToken;
@end


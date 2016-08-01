/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardCandidateView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIKeyboardCandidateBarDelegate.h>

@class UIKeyboardCandidatePageControl, UIKBInputBackdropView, NSString;

@interface UIKeyboardCandidateView_iPad : UIKeyboardCandidateView <UICollectionViewDelegate, UIKeyboardCandidateBarDelegate> {

	UIKeyboardCandidatePageControl* _pageControl;
	UIKBInputBackdropView* _backdropView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultExtendedControlHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)_clipCornersOfView:(id)arg1 ;
-(void)setCandidateViewExtended:(BOOL)arg1 ;
-(void)didEndSplitTransition;
-(void)candidateBarDidScroll:(id)arg1 ;
-(void)updatePageControlStatus;
-(BOOL)shouldUseKeyboardBackground:(id)arg1 ;
-(unsigned long long)_numberOfColumns:(BOOL)arg1 ;
-(double)_additionalClipHeight;
-(double)rightButtonYOffset;
@end


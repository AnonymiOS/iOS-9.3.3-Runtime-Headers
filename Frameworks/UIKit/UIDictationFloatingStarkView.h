/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDictationView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIDimmingView, NSString;

@interface UIDictationFloatingStarkView : UIDictationView <UIGestureRecognizerDelegate> {

	UIDimmingView* _dimmingView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)show;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setState:(int)arg1 ;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(void)finishReturnToKeyboard;
-(void)prepareForReturnToKeyboard;
-(void)returnToKeyboard;
-(CGPoint)positionForShow;
-(void)endpointButtonPressed;
-(void)setInputViewsHiddenForDictation:(BOOL)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PKLinkedApplicationDelegate.h>

@class WLEasyToHitCustomButton, UIImage, UIVisualEffectView, CALayer, PKLinkedApplication, NSString;

@interface PKLinkedAppIconView : UIView <PKLinkedApplicationDelegate> {

	WLEasyToHitCustomButton* _iconButton;
	UIImage* _iconImage;
	UIVisualEffectView* _blurView;
	CALayer* _blurMask;
	BOOL _translucent;
	PKLinkedApplication* _linkedApplication;

}

@property (nonatomic,readonly) PKLinkedApplication * linkedApplication;              //@synthesize linkedApplication=_linkedApplication - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent;                  //@synthesize translucent=_translucent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(BOOL)isTranslucent;
-(CGSize)intrinsicContentSize;
-(void)setTranslucent:(BOOL)arg1 ;
-(id)initWithLinkedApplication:(id)arg1 ;
-(void)linkedApplicationDidChangeState:(id)arg1 ;
-(PKLinkedApplication *)linkedApplication;
-(void)tapped:(id)arg1 ;
-(void)_updateWithIconImage:(id)arg1 animated:(BOOL)arg2 ;
@end


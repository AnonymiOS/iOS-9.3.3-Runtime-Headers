/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNAvatarCardController.h>
#import <libobjc.A.dylib/CNAvatarCardViewControllerDelegate.h>
#import <UIKit/UIAlertControllerSystemProvidedPresentationDelegate.h>

@class UIView, CNAvatarCardViewController, UIAlertController, NSString;

@interface CNAvatarCardHybridController : CNAvatarCardController <CNAvatarCardViewControllerDelegate, UIAlertControllerSystemProvidedPresentationDelegate> {

	UIView* _sourceView;
	CNAvatarCardViewController* _cardViewController;
	UIAlertController* _alertController;

}

@property (nonatomic,retain) CNAvatarCardViewController * cardViewController;              //@synthesize cardViewController=_cardViewController - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                          //@synthesize alertController=_alertController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)sourceView;
-(void)setSourceView:(id)arg1 ;
-(BOOL)isVisible;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(id)_presentingViewControllerForSystemProvidedPresentationOfAlertController:(id)arg1 ;
-(void)_willBeginSystemProvidedPresentationOfAlertController:(id)arg1 ;
-(BOOL)_shouldPerformSystemProvidedPresentationOfAlertController:(id)arg1 atSystemProvidedPresentationRegisteredViewLocation:(CGPoint)arg2 ;
-(UIAlertController *)alertController;
-(void)_didBeginSystemProvidedPresentationOfAlertController:(id)arg1 ;
-(void)presentAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)bypassActionValidation;
-(id)actionCategories;
-(void)setCardViewController:(CNAvatarCardViewController *)arg1 ;
-(CNAvatarCardViewController *)cardViewController;
-(id)cardViewController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(void)cardViewController:(id)arg1 willShowActions:(id)arg2 ;
-(void)cardViewControllerWillDismiss:(id)arg1 ;
-(void)cardViewControllerDidDismiss:(id)arg1 ;
-(void)cardViewControllerDidUpdatePreferredSize:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setupAlertController;
-(void)_prepareAlertController;
-(id)preparedViewControllerForPresentationWithGestureRecognizer:(id)arg1 ;
-(void)setBypassActionValidation:(BOOL)arg1 ;
-(void)setActionCategories:(id)arg1 ;
-(void)setContacts:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:58 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIAlertController.h>
#import <libobjc.A.dylib/MusicJSContextualActionsNativeViewControllerDelegate.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>
#import <libobjc.A.dylib/MusicJSNativeViewControllerFactory.h>

@class MusicClientContext, MusicViewControllerPresenter, NSString, SKUIClientContext;

@interface MusicContextualActionsAlertController : UIAlertController <MusicJSContextualActionsNativeViewControllerDelegate, MusicClientContextConsuming, MusicJSNativeViewControllerFactory> {

	id _strongSelfRef;
	MusicClientContext* _clientContext;
	MusicViewControllerPresenter* _presenter;

}

@property (nonatomic,retain) MusicViewControllerPresenter * presenter;              //@synthesize presenter=_presenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
+(id)selectedNavigationController;
+(void)dismissAllModalViewsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)loadJSNativeViewControllerWithAppContext:(id)arg1 ;
-(MusicViewControllerPresenter *)presenter;
-(void)jsContextualActionsNativeViewController:(id)arg1 presentShareDocument:(id)arg2 options:(id)arg3 ;
-(void)handleSelectionOfHeaderWithInformation:(SCD_Struct_Mu17)arg1 ;
-(void)prepareForJSCallback;
-(void)setPresenter:(MusicViewControllerPresenter *)arg1 ;
@end


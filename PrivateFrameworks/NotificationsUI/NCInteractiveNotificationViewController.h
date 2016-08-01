/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:55 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NCInteractiveNotificationServiceInterface.h>

@class NSDictionary;

@interface NCInteractiveNotificationViewController : UIViewController <NCInteractiveNotificationServiceInterface> {

	BOOL _modal;
	NSDictionary* _context;
	double _maximumHeight;

}

@property (nonatomic,copy) NSDictionary * context;                   //@synthesize context=_context - In the implementation block
@property (assign,getter=isModal,nonatomic) BOOL modal;              //@synthesize modal=_modal - In the implementation block
@property (assign,nonatomic) double maximumHeight;                   //@synthesize maximumHeight=_maximumHeight - In the implementation block
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)dealloc;
-(NSDictionary *)context;
-(void)viewDidLoad;
-(BOOL)showsKeyboard;
-(void)setContext:(NSDictionary *)arg1 ;
-(void)_setContext:(id)arg1 ;
-(double)preferredContentHeight;
-(double)bottomOverhangHeight;
-(id)inlayViewService;
-(id)accessoryViewService;
-(void)interactiveNotificationDidAppear;
-(void)didChangeRevealPercent:(double)arg1 ;
-(id)actionTitles;
-(void)handleActionIdentifier:(id)arg1 ;
-(void)willPresentFromActionIdentifier:(id)arg1 ;
-(void)_getInitialStateWithCompletion:(/*^block*/id)arg1 ;
-(void)_setMaximumHeight:(double)arg1 ;
-(void)_setModal:(BOOL)arg1 ;
-(void)_interactiveNotificationDidAppear;
-(void)_proximityStateDidChange:(BOOL)arg1 ;
-(void)_didChangeRevealPercent:(double)arg1 ;
-(void)_willPresentFromActionIdentifier:(id)arg1 ;
-(void)_getActionContextWithCompletion:(/*^block*/id)arg1 ;
-(void)_getActionTitlesWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleActionAtIndex:(unsigned long long)arg1 ;
-(void)_handleActionIdentifier:(id)arg1 ;
-(void)dismissWithContext:(id)arg1 ;
-(void)requestDismissalEnabled:(BOOL)arg1 ;
-(void)requestPreferredContentHeight:(double)arg1 ;
-(void)setActionEnabled:(BOOL)arg1 atIndex:(unsigned long long)arg2 ;
-(void)requestProximityMonitoringEnabled:(BOOL)arg1 ;
-(BOOL)isModal;
-(void)setModal:(BOOL)arg1 ;
-(void)setMaximumHeight:(double)arg1 ;
-(double)maximumHeight;
-(id)actionContext;
-(void)handleActionAtIndex:(unsigned long long)arg1 ;
-(void)proximityStateDidChange:(BOOL)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/CNFRegChangeAccountPasswordDelegate.h>
#import <libobjc.A.dylib/CNFRegAccountAuthorizationDelegate.h>
#import <libobjc.A.dylib/IMSystemMonitorListener.h>

@class CNFRegController, NSString;

@interface CNFRegListController : PSListController <CNFRegChangeAccountPasswordDelegate, CNFRegAccountAuthorizationDelegate, IMSystemMonitorListener> {

	/*^block*/id _appearBlock;
	BOOL _appeared;
	BOOL _showingChildController;
	BOOL _shouldRerootPreferences;
	CNFRegController* _regController;

}

@property (nonatomic,readonly) long long currentAppearanceStyle; 
@property (nonatomic,retain) CNFRegController * regController;                //@synthesize regController=_regController - In the implementation block
@property (nonatomic,copy) id appearBlock;                                    //@synthesize appearBlock=_appearBlock - In the implementation block
@property (assign,nonatomic) BOOL showingChildController;                     //@synthesize showingChildController=_showingChildController - In the implementation block
@property (assign,nonatomic) BOOL shouldRerootPreferences;                    //@synthesize shouldRerootPreferences=_shouldRerootPreferences - In the implementation block
@property (nonatomic,readonly) BOOL appeared;                                 //@synthesize appeared=_appeared - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)applicationDidResume;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(BOOL)shouldSelectResponderOnAppearance;
-(void)handleURL:(id)arg1 ;
-(id)customTitle;
-(CNFRegController *)regController;
-(void)changePasswordControllerDidCancel:(id)arg1 ;
-(void)changePasswordControllerDidFinish:(id)arg1 withAppleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(void)authorizationController:(id)arg1 authorizedAccount:(BOOL)arg2 ;
-(void)setRegController:(CNFRegController *)arg1 ;
-(id)initWithRegController:(id)arg1 ;
-(id)_existingLabelForSpecifier:(id)arg1 header:(BOOL)arg2 ;
-(id)specifierList;
-(id)logName;
-(void)_performAppearBlock;
-(id)appearBlock;
-(void)setAppearBlock:(id)arg1 ;
-(BOOL)wantsWiFiChooser;
-(void)setShowingChildController:(BOOL)arg1 ;
-(BOOL)shouldRerootPreferences;
-(void)setShouldRerootPreferences:(BOOL)arg1 ;
-(BOOL)_handleURLDictionary:(id)arg1 ;
-(BOOL)showingChildController;
-(void)_updateExistingLabelForSpecifier:(id)arg1 header:(BOOL)arg2 ;
-(id)_existingLabelForSection:(long long)arg1 header:(BOOL)arg2 ;
-(void)_updateTableLabel:(id)arg1 withTableView:(id)arg2 isTopMostHeader:(BOOL)arg3 ;
-(void)removeAllHandlers;
-(id)initWithParentController:(id)arg1 ;
-(BOOL)_showWiFiAlertIfNecessary;
-(void)_setSpecifierEnabled:(id)arg1 enabled:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)currentAppearanceStyle;
-(void)_setLabel:(id)arg1 forSpecifier:(id)arg2 header:(BOOL)arg3 ;
-(void)_setupEventHandlers;
-(BOOL)appeared;
-(void)systemApplicationWillEnterForeground;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationDidBecomeActive;
-(void)systemApplicationWillResignActive;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationDidResume;
-(void)_updateTitle;
-(id)specifiers;
@end


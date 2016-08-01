/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <CommunicationsSetupUI/CNFRegListController.h>
#import <libobjc.A.dylib/CNFRegWizardControllerDelegate.h>
#import <libobjc.A.dylib/CNFRegViewAccountControllerDelegate.h>
#import <libobjc.A.dylib/CNFRegFirstRunDelegate.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationDelegate.h>

@class PSSpecifier, NSArray, NSString, NSMutableArray, NSNumber;

@interface CNFRegSettingsController : CNFRegListController <CNFRegWizardControllerDelegate, CNFRegViewAccountControllerDelegate, CNFRegFirstRunDelegate, AKAppleIDAuthenticationDelegate> {

	PSSpecifier* _faceTimeEnabledGroupSpecifier;
	PSSpecifier* _faceTimeEnabledSpecifier;
	NSArray* _accountGroupSpecifiers;
	NSArray* _aliasGroupSpecifiers;
	NSArray* _callerIdGroupSpecifiers;
	PSSpecifier* _addAddressButtonSpecifier;
	NSArray* _replyWithMessageGroupSpecifiers;
	NSArray* _blacklistGroupSpecifiers;
	NSArray* _receiveRelayCallsGroupSpecifiers;
	PSSpecifier* _blankAddressSpecifier;
	NSString* _pendingAddress;
	NSMutableArray* _addresses;
	NSNumber* _delayedRefreshAnimatedFlag;
	struct {
		unsigned listeningForFinishedEditingEvents : 1;
		unsigned appeared : 1;
		unsigned ignoringTextFieldChanges : 1;
		unsigned showEnableSwitch : 1;
		unsigned refreshingCallerIdValues : 1;
	}  _settingsFlags;
	BOOL _showReceiveRelayCalls;

}

@property (assign,nonatomic) BOOL showEnableSwitch; 
@property (nonatomic,readonly) BOOL showReceiveRelayCalls;              //@synthesize showReceiveRelayCalls=_showReceiveRelayCalls - In the implementation block
@property (nonatomic,copy) NSString * pendingAddress;                   //@synthesize pendingAddress=_pendingAddress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)dealloc;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)bundle;
-(void)formSheetViewWillDisappear;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)formSheetViewDidDisappear;
-(id)customTitle;
-(id)specifierList;
-(id)logName;
-(void)_handleFaceTimeStateChanged;
-(void)_handleFaceTimeCTRegistrationStatusChanged;
-(void)_handleFaceTimeEntitlementStatusChanged;
-(void)_handleDeactivation:(id)arg1 ;
-(void)_handleRelayCapabilitiesChanged;
-(void)_handleThumperCapabilitiesChanged;
-(void)_handleOutgoingRelayCallerIDChanged;
-(void)_handleAccountRegistrarChanged;
-(id)_appleIDAccounts;
-(id)createSpecifierForAccount:(id)arg1 ;
-(id)_useableAccounts;
-(id)createSpecifierForAlias:(id)arg1 ;
-(id)possibleCallerIdAliases;
-(id)createSpecifierForCallerIdAlias:(id)arg1 ;
-(void)_buildSpecifierCache:(id)arg1 ;
-(BOOL)shouldShowReplyWithMessage;
-(NSString *)pendingAddress;
-(BOOL)shouldShowBlacklistSettings;
-(BOOL)shouldShowReceiveThumperCalls;
-(BOOL)shouldShowReceiveRelayCalls;
-(void)_updateAddAliasButtonText;
-(id)aliasDetailControllerForSpecifier:(id)arg1 ;
-(void)refreshFaceTimeSettingsAnimated:(BOOL)arg1 ;
-(void)refreshAllAliasSpecifiers;
-(void)refreshAllCallerIdAliasSpecifiers;
-(void)_showAuthKitSignInIfNecessary;
-(void)startEditingTextField;
-(void)_setupAllListeners;
-(void)stopListeningForFinishedEditingEventNotifications;
-(void)stopEditingTextField:(BOOL)arg1 ;
-(void)_setupAccountHandlers;
-(BOOL)isShowingBlankAlias;
-(void)showAddAliasButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)showBlankAlias:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)startListeningForFinishedEditingEventNotifications;
-(void)returnKeyPressed:(id)arg1 ;
-(void)keyboardDismissed:(id)arg1 ;
-(id)blankAliasTextField;
-(void)_cacheIndividualSpecifier:(id)arg1 includeInGroup:(BOOL*)arg2 ;
-(void)_cacheSpecifierGroup:(id)arg1 withSpecifiers:(id)arg2 ;
-(BOOL)showEnableSwitch;
-(id)_switchFooterText;
-(void)_updateSwitch;
-(BOOL)popToFirstRunControllerAnimated:(BOOL)arg1 ;
-(void)_setupAccountHandlersForDisabling;
-(void)setFaceTimeEnabled:(id)arg1 specifier:(id)arg2 animated:(BOOL)arg3 ;
-(void)_refreshFaceTimeSettingsDelayed:(id)arg1 ;
-(id)_operationalAccounts;
-(void)refreshAccountsAnimated:(BOOL)arg1 ;
-(BOOL)showAccounts:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)showAliases:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)showCallerId:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)showBlacklistSettings:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)showReceiveRelayCallsSettings:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)refreshAliasesAnimated:(BOOL)arg1 ;
-(void)refreshCallerIdAliasesAnimated:(BOOL)arg1 ;
-(void)refreshBlacklistSettingsAnimated:(BOOL)arg1 ;
-(void)refreshReceiveRelayCallsSettingsAnimated:(BOOL)arg1 ;
-(void)refreshEnabledStateAnimated:(BOOL)arg1 ;
-(BOOL)_popFromSettingsAnimated:(BOOL)arg1 ;
-(BOOL)_canDeselectAlias:(id)arg1 ;
-(void)showSpecifiers:(id)arg1 afterGroupId:(id)arg2 animated:(BOOL)arg3 ;
-(void)_showLocaleChooserWithAccount:(id)arg1 ;
-(void)_showAccountAlertForAccount:(id)arg1 ;
-(void)_showSignInController;
-(id)getAccountNameForSpecifier:(id)arg1 ;
-(void)accountTappedWithSpecifier:(id)arg1 ;
-(id)_specifierIdentifierForAccount:(id)arg1 ;
-(void)_reloadSpecifier:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)accountSpecifiers;
-(void)updateSpecifier:(id)arg1 withAccount:(id)arg2 ;
-(void)setFaceTimeEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)_tearDownAllListeners;
-(id)_localeChooserForAccount:(id)arg1 ;
-(void)_updateControllerStateAnimated:(BOOL)arg1 ;
-(void)_hideLocaleChooser;
-(BOOL)_shouldShowAliasInfo;
-(id)aliasSpecifiers;
-(void)updateSpecifier:(id)arg1 withAlias:(id)arg2 ;
-(BOOL)isShowingAddButton;
-(void)setAliasSelected:(id)arg1 ;
-(id)statusForSpecifier:(id)arg1 ;
-(void)refreshAliasSpecifier:(id)arg1 ;
-(long long)indexOfLastSpecifierInGroup:(id)arg1 ;
-(void)_clearBlankAliasField;
-(id)statusForAlias:(id)arg1 ;
-(void)setPendingAddress:(NSString *)arg1 ;
-(id)callerIdAliasSpecifiers;
-(void)updateSpecifier:(id)arg1 withCallerIdAlias:(id)arg2 ;
-(void)setCallerId:(id)arg1 ;
-(void)refreshCallerIdSpecifier:(id)arg1 ;
-(id)_operationalAccountsForService:(long long)arg1 ;
-(long long)groupIdForSpecifier:(id)arg1 ;
-(BOOL)_shouldUseDisabledHandlers;
-(void)_setupAccountHandlersForDisabledOperation;
-(void)_setupAccountHandlersForNormalOperation;
-(BOOL)_allAccountsAreDeactivated;
-(void)_updateSwitchDelayed;
-(void)_handleSuccessfulAccountReactivation:(id)arg1 ;
-(void)_handleFailedAccountReactivation:(id)arg1 error:(id)arg2 ;
-(void)refreshFaceTimeSettingsWithDelayAnimated:(BOOL)arg1 ;
-(void)_showAliasValidationError:(id)arg1 ;
-(void)firstRunControllerDidFinish:(id)arg1 finished:(BOOL)arg2 ;
-(void)viewAccountControllerDidFinish:(id)arg1 withAppleId:(id)arg2 ;
-(void)firstRunController:(id)arg1 finishedWithState:(unsigned long long)arg2 ;
-(BOOL)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 ;
-(id)getFaceTimeEnabledForSpecifier:(id)arg1 ;
-(void)setReceiveRelayedCallsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getReceiveRelayedCallsEnabledForSpecifier:(id)arg1 ;
-(void)setShowEnableSwitch:(BOOL)arg1 ;
-(void)showAllSettings:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_showViewAccountControllerForAccount:(id)arg1 ;
-(void)clearAccountCache;
-(BOOL)additionalAliasesAvailable;
-(id)aliasForSpecifier:(id)arg1 ;
-(void)addAddressTapped:(id)arg1 ;
-(id)getAddAliasTextForSpecifier:(id)arg1 ;
-(void)textFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2 ;
-(id)pendingAddressForSpecifier:(id)arg1 ;
-(void)setPendingAddress:(id)arg1 forSpecifier:(id)arg2 ;
-(id)aliasWithIdentifier:(id)arg1 ;
-(void)showReplyWithMessage:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)groupIdForSpecifierId:(id)arg1 ;
-(BOOL)showReceiveRelayCalls;
-(void)systemApplicationWillEnterForeground;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationDidResume;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:11 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, NSString, UIAlertView;

@interface PSUIResetPrefController : PSListController {

	BOOL _requireRestrictionsCode;
	BOOL _requirePasscode;
	BOOL _returningFromPINSheetWithSuccess;
	BOOL _shouldEraseWithFMiP;
	BOOL _shouldTryEraseAgainWithFMiP;
	BOOL _shouldEraseDataPlans;
	int _codesNeeded;
	int _codesEntered;
	PSSpecifier* _currentSpecifier;
	PSSpecifier* _locationSpecifier;
	long long _locationSpecifierIndex;
	NSString* _passcode;
	UIAlertView* _alert;

}
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)popupViewDidDisappear;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)didAppear;
-(void)profileNotification:(id)arg1 ;
-(void)locatorStateDidChange:(id)arg1 ;
-(void)confirmationSpecifierConfirmed:(id)arg1 ;
-(void)updateLocationResetSpecifier;
-(void)eraseSettingsAndContent:(id)arg1 ;
-(void)eraseSettings:(id)arg1 ;
-(void)_eraseSettingsAndContent;
-(void)_resetWithMode:(int)arg1 ;
-(void)eraseCellularSettings;
-(void)reprovisionAccount;
-(void)resetAKey;
-(void)confirmEraseCellularSettings;
-(void)resetKeyboardDictionary:(id)arg1 ;
-(void)resetIconPositions:(id)arg1 ;
-(void)resetPrivacyWarnings:(id)arg1 ;
-(void)resetNetworkSettings:(id)arg1 ;
-(void)subscriberOptions:(id)arg1 ;
-(id)specifiers;
@end


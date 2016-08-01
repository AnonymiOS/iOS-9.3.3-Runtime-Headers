/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:11 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, ACAccountStore;

@interface PSUIPrivacyController : PSListController {

	PSSpecifier* _locationSpecifier;
	ACAccountStore* _accountStore;

}
+(void)formatSearchEntries:(id)arg1 parent:(id)arg2 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)_accountStore;
-(void)setCapabilityEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)capabilityEnabled:(id)arg1 ;
-(BOOL)hasSocialSpecifiers:(id)arg1 ;
-(void)updateLocationServicesVisibility;
-(id)specifiers;
-(id)locationServicesEnabled:(id)arg1 ;
@end


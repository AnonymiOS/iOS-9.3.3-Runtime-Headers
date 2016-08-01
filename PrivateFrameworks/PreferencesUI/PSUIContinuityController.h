/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:12 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class SuggestedAppsController;

@interface PSUIContinuityController : PSListController {

	SuggestedAppsController* _suggestedAppsController;

}
-(id)init;
-(void)profileNotification:(id)arg1 ;
-(BOOL)isContinuityRestricted;
-(void)updateContinuitySpecifiers;
-(id)isContinuityEnabled:(id)arg1 ;
-(void)setContinuityEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)specifiers;
@end


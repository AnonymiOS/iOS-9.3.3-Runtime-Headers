/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:11 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <Preferences/DevicePINController.h>

@interface RestrictionsPINController : DevicePINController
+(void)initialize;
-(CFStringRef)defaultsID;
-(BOOL)validatePIN:(id)arg1 ;
-(BOOL)isNumericPIN;
-(CFStringRef)failedAttemptsKey;
-(CFStringRef)blockTimeIntervalKey;
-(CFStringRef)blockedStateKey;
-(id)stringsTable;
-(BOOL)simplePIN;
-(int)pinLength;
-(BOOL)pinIsAcceptable:(id)arg1 outError:(id*)arg2 ;
-(void)performActionAfterPINSet;
-(void)setPIN:(id)arg1 ;
-(void)performActionAfterPINRemove;
-(id)pinInstructionsPromptFont;
-(void)delegateUpdateToggleState;
@end


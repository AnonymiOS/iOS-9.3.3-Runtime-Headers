/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBUIPasscodeLockViewFactory : NSObject
+(id)passcodeLockViewForStyle:(int)arg1 ;
+(id)_passcodeLockViewForStyle:(int)arg1 withLightStyle:(BOOL)arg2 ;
+(id)lightPasscodeLockViewForStyle:(int)arg1 ;
+(void)_commonInitPasscodeView:(id)arg1 forStyle:(int)arg2 ;
+(void)_warmupKBDIfNecessary;
+(id)lightPasscodeLockViewForUsersCurrentStyle;
+(id)installTonightPasscodeLockViewForUsersCurrentStyle;
+(id)passcodeLockViewForUsersCurrentStyle;
@end


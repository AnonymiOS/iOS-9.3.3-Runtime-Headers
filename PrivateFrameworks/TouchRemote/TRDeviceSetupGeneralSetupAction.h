/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRDeviceSetupAction.h>

@class NSString;

@interface TRDeviceSetupGeneralSetupAction : TRDeviceSetupAction

@property (nonatomic,copy,readonly) NSString * countryCode; 
@property (nonatomic,copy,readonly) NSString * language; 
@property (nonatomic,copy,readonly) NSString * homeSharingID; 
@property (nonatomic,copy,readonly) NSString * homeSharingGroupID; 
@property (nonatomic,readonly) BOOL rememberPassword; 
@property (getter=isDiagnosticsEnabled,nonatomic,readonly) BOOL diagnosticsEnabled; 
-(id)init;
-(NSString *)language;
-(NSString *)countryCode;
-(NSString *)homeSharingGroupID;
-(NSString *)homeSharingID;
-(BOOL)isDiagnosticsEnabled;
-(BOOL)rememberPassword;
-(id)initWithCountryCode:(id)arg1 language:(id)arg2 homeSharingID:(id)arg3 homeSharingGroupID:(id)arg4 isDiagnosticsEnabled:(BOOL)arg5 rememberPassword:(BOOL)arg6 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DADaemonEAS.bundle/DADaemonEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASPolicyPreflighterDelegate
@required
-(void)preflighter:(id)arg1 error:(id)arg2;
-(void)preflighterRemoteWipeRequested:(id)arg1;
-(void)preflighter:(id)arg1 needsComplianceWithMCFeatures:(id)arg2 perAccountPolicies:(id)arg3;
-(void)preflighter:(id)arg1 successWithMCFeatures:(id)arg2 perAccountPolicies:(id)arg3 policyKey:(id)arg4;
-(void)preflighterRemoteWipeRequestResponseAcknowledged:(id)arg1;

@end


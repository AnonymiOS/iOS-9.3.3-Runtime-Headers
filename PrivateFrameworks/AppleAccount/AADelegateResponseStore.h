/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:22 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AADelegateResponseStore : NSObject
+(void)saveiCloudResponseParameters:(id)arg1 ;
+(void)restoreFinished;
+(void)saveiCloudToken:(id)arg1 hsaToken:(id)arg2 fmipToken:(id)arg3 faceTimeToken:(id)arg4 madridToken:(id)arg5 gameCenterToken:(id)arg6 ;
+(id)responseAndTokenRuntimeStore;
+(void)_saveKeychainItem:(id)arg1 forUsername:(id)arg2 service:(id)arg3 itemDescription:(id)arg4 ;
@end


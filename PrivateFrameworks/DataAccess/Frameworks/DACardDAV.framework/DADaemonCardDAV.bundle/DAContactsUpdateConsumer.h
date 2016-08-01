/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:39 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DADaemonCardDAV.bundle/DADaemonCardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DAContactsUpdateConsumer <DAActionConsumer>
@optional
-(void)contactsFolderWithId:(id)arg1 successfullyPushedActions:(id)arg2;

@required
-(void)syncResultForContactsFolder:(id)arg1 newTag:(id)arg2 previousTag:(id)arg3 newSyncToken:(id)arg4 actions:(id)arg5 results:(id)arg6 changeIdContext:(id)arg7 isInitialSync:(BOOL)arg8 moreAvailable:(BOOL)arg9 moreLocalChangesAvailable:(BOOL)arg10 pushedActions:(id)arg11;

@end


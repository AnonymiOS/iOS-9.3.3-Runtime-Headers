/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <CompanionSync/SYStoreSessionOwner.h>

@interface SYStoreIncomingSessionOwner : SYStoreSessionOwner
-(BOOL)isResetSync;
-(void)syncSession:(id)arg1 applyChanges:(NSArray*)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithIncomingSession:(id)arg1 ;
-(BOOL)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2 ;
@end


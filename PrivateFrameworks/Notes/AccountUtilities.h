/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSArray, NoteContext, ACAccountStore, NSObject, NSLock;

@interface AccountUtilities : NSObject {

	NSArray* _accountIDsEnabledForNotes;
	NoteContext* _noteContext;
	ACAccountStore* _accountStore;
	NSObject*<OS_dispatch_group> _backgroundDispatchGroup;
	NSLock* _updateAccountInfosLock;

}

@property (nonatomic,retain) ACAccountStore * accountStore;                                     //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> backgroundDispatchGroup;              //@synthesize backgroundDispatchGroup=_backgroundDispatchGroup - In the implementation block
@property (retain) NSLock * updateAccountInfosLock;                                             //@synthesize updateAccountInfosLock=_updateAccountInfosLock - In the implementation block
+(id)sharedAccountUtilities;
-(void)dealloc;
-(id)init;
-(id)localAccountDisplayName;
-(id)defaultStoreSyncIdWithDesiredSyncId:(id)arg1 ;
-(void)updateAccountInfos;
-(BOOL)localNotesExist;
-(NSObject*<OS_dispatch_group>)backgroundDispatchGroup;
-(NSLock *)updateAccountInfosLock;
-(id)freshContext;
-(void)startKeepingAccountInfosUpToDate;
-(id)accountsEnabledForNotes;
-(id)accountIDsEnabledForNotes;
-(void)setBackgroundDispatchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setUpdateAccountInfosLock:(NSLock *)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(void)_accountStoreDidChange:(id)arg1 ;
@end


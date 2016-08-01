/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:29 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSMapTable;

@interface VMUProcList : NSObject {

	NSLock* procLock;
	NSMapTable* allProcs;
	NSMapTable* filteredProcs;
	BOOL appsOnly;
	BOOL ownedOnly;

}
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(BOOL)update;
-(BOOL)updateFromSystem;
-(void)_populateFromSystem;
-(id)newestProcInfoSatisfyingCondition:(SEL)arg1 forTarget:(id)arg2 withContext:(void*)arg3 ;
-(void)setProcInfos:(id)arg1 ;
-(void)addProcInfo:(id)arg1 ;
-(void)removeProcInfo:(id)arg1 ;
-(void)setOwnedOnly:(BOOL)arg1 ;
-(BOOL)ownedOnly:(BOOL)arg1 ;
-(void)setAppsOnly:(BOOL)arg1 ;
-(BOOL)appsOnly;
-(id)allProcInfos;
-(id)allPIDs;
-(id)allPathNames;
-(id)newestProcInfo;
-(id)newestProcInfoWithName:(id)arg1 ;
-(id)newestProcInfoSatisfyingCondition:(SEL)arg1 forTarget:(id)arg2 ;
-(id)procInfoWithPID:(int)arg1 ;
-(id)allNames;
-(void)finalize;
@end


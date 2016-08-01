/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:58 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MusicLibraryActionPendingValues : NSObject {

	BOOL _hasPendingKeepLocalValue;
	BOOL _hasPendingLibraryState;
	long long _pendingKeepLocalValue;
	unsigned long long _pendingLibraryState;

}

@property (assign,nonatomic) BOOL hasPendingKeepLocalValue;                       //@synthesize hasPendingKeepLocalValue=_hasPendingKeepLocalValue - In the implementation block
@property (assign,nonatomic) long long pendingKeepLocalValue;                     //@synthesize pendingKeepLocalValue=_pendingKeepLocalValue - In the implementation block
@property (assign,nonatomic) BOOL hasPendingLibraryState;                         //@synthesize hasPendingLibraryState=_hasPendingLibraryState - In the implementation block
@property (assign,nonatomic) unsigned long long pendingLibraryState;              //@synthesize pendingLibraryState=_pendingLibraryState - In the implementation block
-(BOOL)hasPendingKeepLocalValue;
-(void)setHasPendingKeepLocalValue:(BOOL)arg1 ;
-(long long)pendingKeepLocalValue;
-(void)setPendingKeepLocalValue:(long long)arg1 ;
-(BOOL)hasPendingLibraryState;
-(void)setHasPendingLibraryState:(BOOL)arg1 ;
-(unsigned long long)pendingLibraryState;
-(void)setPendingLibraryState:(unsigned long long)arg1 ;
@end


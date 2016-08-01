/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:14 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class NSObject;

@interface SUMescalSession : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _complete;
	FairPlayHWInfo_ _hardwareInfo;
	FPSAPContextOpaque_Ref _session;

}

@property (getter=isComplete,readonly) BOOL complete; 
-(void)dealloc;
-(id)init;
-(BOOL)verifyPrimeSignature:(id)arg1 error:(id*)arg2 ;
-(id)primeForAccountCreationWithData:(id)arg1 error:(id*)arg2 ;
-(id)_newDataWithBytes:(char*)arg1 length:(unsigned)arg2 ;
-(void)_teardownSession;
-(id)exchangeData:(id)arg1 error:(id*)arg2 ;
-(id)signData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isComplete;
@end


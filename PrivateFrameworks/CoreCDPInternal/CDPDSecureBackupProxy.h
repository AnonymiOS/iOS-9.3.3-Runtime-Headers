/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPDSecureBackupProxy <NSObject>
@required
-(void)recoverWithInfo:(id)arg1 completionBlockWithResults:(/*^block*/id)arg2;
-(void)disableWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)enableWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)getAccountInfoWithInfo:(id)arg1 completionBlockWithResults:(/*^block*/id)arg2;
-(void)uncachePassphraseWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)backOffDateWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)setBackOffDateWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2;

@end


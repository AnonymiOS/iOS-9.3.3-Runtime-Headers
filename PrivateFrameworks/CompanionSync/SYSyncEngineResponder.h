/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:07 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SYSyncEngineResponder <NSObject>
@required
-(BOOL)willAcceptMessageWithHeader:(id)arg1 messageID:(id)arg2;
-(void)handleSyncRequest:(id)arg1 ofType:(unsigned short)arg2 response:(/*^block*/id)arg3;
-(void)handleSyncResponse:(id)arg1 ofType:(unsigned short)arg2 completion:(/*^block*/id)arg3;
-(void)handleOutOfBandData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)handleFileTransfer:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3;
-(void)handleSyncError:(id)arg1 forMessageWithIdentifier:(id)arg2;
-(void)enqueuedMessageWithID:(id)arg1 context:(id)arg2;
-(void)sentMessageWithID:(id)arg1 context:(id)arg2;
-(void)deliveredMessageWithID:(id)arg1 context:(id)arg2;
-(void)serializeForIncomingSession:(/*^block*/id)arg1;

@end


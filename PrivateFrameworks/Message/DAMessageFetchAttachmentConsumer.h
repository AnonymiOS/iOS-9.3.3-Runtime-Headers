/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DAMessageFetchAttachmentConsumer
@optional
-(void)attachmentFetchCompletedWithStatus:(long long)arg1 forAttachmentNamed:(id)arg2 ofMessageWithServerID:(id)arg3 dataWasBase64:(BOOL)arg4;
-(void)attachmentFetchCompletedWithStatus:(long long)arg1 forAttachmentNamed:(id)arg2 ofMessageWithServerID:(id)arg3 dataWasBase64:(BOOL)arg4 sentBytesCount:(unsigned long long)arg5 receivedBytesCount:(unsigned long long)arg6;

@required
-(void)consumeData:(id)arg1 ofContentType:(id)arg2 forAttachmentNamed:(id)arg3 ofMessageWithServerID:(id)arg4;

@end


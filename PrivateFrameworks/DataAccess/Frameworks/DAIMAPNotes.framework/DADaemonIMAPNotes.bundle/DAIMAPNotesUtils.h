/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAIMAPNotes.framework/DADaemonIMAPNotes.bundle/DADaemonIMAPNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFLogClass.h>

@interface DAIMAPNotesUtils : NSObject <MFLogClass>
+(void)logBytes:(const char*)arg1 length:(int)arg2 ;
+(void)flushLog;
+(id)messageFromLocalNoteObject:(id)arg1 inMailboxUid:(id)arg2 inAccount:(id)arg3 ;
+(id)_copyMessageDetailsForNote:(id)arg1 inLibrary:(id)arg2 ;
+(BOOL)messageIsSyncableNote:(id)arg1 ;
+(id)_noteObjectFromMessage:(id)arg1 withTextContentData:(id)arg2 inStore:(id)arg3 attachmentManager:(id)arg4 andContext:(id)arg5 ;
+(void)setUpMailLogging;
+(id)outgoingMessageFromLocalNoteObject:(id)arg1 imapAccount:(id)arg2 attachmentManager:(id)arg3 ;
+(id)noteAttachmentObjectsFromAttachmentsOfMessage:(id)arg1 attachmentManager:(id)arg2 noteContext:(id)arg3 ;
+(void)drainWorkerThreadAndInvokeBlock:(/*^block*/id)arg1 ;
+(id)_mimeVersion;
+(id)headersFromLocalNoteObject:(id)arg1 imapAccount:(id)arg2 ;
+(id)messageAttachmentsFromNoteAttachmentObjects:(id)arg1 attachmentManager:(id)arg2 ;
+(void)_runInterimWorkerThreadWithStartupLock:(id)arg1 ;
-(void)logBytes:(const char*)arg1 length:(int)arg2 ;
-(void)flushLog;
@end


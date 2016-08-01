/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CKAttachmentSaver : NSObject {

	unsigned long long _errorCount;
	NSMutableArray* _attachments;

}
-(void)dealloc;
-(void)_saveNextAttachment;
-(void)_done;
-(void)_saveCompletionForVideoWithPath:(id)arg1 error:(id)arg2 context:(void*)arg3 ;
-(void)_saveCompletionForImage:(id)arg1 error:(id)arg2 context:(void*)arg3 ;
-(void)_pop;
-(void)_saveCompletion:(id)arg1 ;
-(id)initWithAttachments:(id)arg1 ;
-(void)runToCompletion;
@end


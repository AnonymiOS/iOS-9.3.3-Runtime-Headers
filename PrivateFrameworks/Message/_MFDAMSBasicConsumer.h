/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFBufferedQueue.h>

@class MFDAMailbox, MFDAMessageStore, MFMailMessageLibrary, MFActivityMonitor, MFError;

@interface _MFDAMSBasicConsumer : MFBufferedQueue {

	MFDAMailbox* mailbox;
	MFDAMessageStore* store;
	MFMailMessageLibrary* library;
	MFActivityMonitor* monitor;
	MFError* error;
	unsigned long long numNewMessages;

}

@property (nonatomic,retain) MFActivityMonitor * monitor; 
@property (nonatomic,retain) MFError * error; 
-(void)dealloc;
-(MFActivityMonitor *)monitor;
-(id)initWithMaximumSize:(unsigned)arg1 latency:(double)arg2 ;
-(void)setError:(MFError *)arg1 ;
-(MFError *)error;
-(void)setMonitor:(MFActivityMonitor *)arg1 ;
@end


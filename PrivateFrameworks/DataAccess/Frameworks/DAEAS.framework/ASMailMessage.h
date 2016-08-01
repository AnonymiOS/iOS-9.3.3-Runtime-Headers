/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:22 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAMailMessage.h>

@class ASEmailItem;

@interface ASMailMessage : DAMailMessage {

	ASEmailItem* _ASEmailItem;

}
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)date;
-(id)body;
-(id)attachments;
-(id)subject;
-(id)to;
-(id)from;
-(id)remoteID;
-(id)folderID;
-(int)bodySize;
-(id)meetingRequestUUID;
-(id)longID;
-(BOOL)readIsSet;
-(BOOL)flaggedIsSet;
-(BOOL)flagged;
-(BOOL)verbIsSet;
-(int)lastVerb;
-(int)smimeType;
-(id)meetingRequestMetaData;
-(BOOL)meetingRequestIsActionable;
-(id)conversationId;
-(id)rfc822Data;
-(id)cc;
-(int)importance;
-(int)bodyTruncated;
-(id)initWithASEmailItem:(id)arg1 ;
-(id)replyTo;
-(id)displayTo;
-(id)threadTopic;
-(id)conversationIndex;
-(id)messageClass;
-(BOOL)read;
@end


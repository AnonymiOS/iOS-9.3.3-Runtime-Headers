/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFMutableMessageHeaders, NSArray, MFOutgoingLibraryMessageContent, MFOutgoingRichtextMessageContent, MFOutgoingMultipartRelatedContent;

@interface MFOutgoingMessageContent : NSObject {

	MFMutableMessageHeaders* _headers;
	NSArray* _placeholders;

}

@property (nonatomic,retain) MFMutableMessageHeaders * headers;                                   //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSArray * placeholders;                                              //@synthesize placeholders=_placeholders - In the implementation block
@property (nonatomic,readonly) MFOutgoingLibraryMessageContent * libraryContent; 
@property (nonatomic,readonly) MFOutgoingRichtextMessageContent * richtextContent; 
@property (nonatomic,readonly) MFOutgoingMultipartRelatedContent * multipartContent; 
-(void)dealloc;
-(id)copy;
-(void)setHeaders:(MFMutableMessageHeaders *)arg1 ;
-(MFOutgoingRichtextMessageContent *)richtextContent;
-(MFOutgoingMultipartRelatedContent *)multipartContent;
-(MFOutgoingLibraryMessageContent *)libraryContent;
-(void)setPlaceholders:(NSArray *)arg1 ;
-(MFMutableMessageHeaders *)headers;
-(NSArray *)placeholders;
@end


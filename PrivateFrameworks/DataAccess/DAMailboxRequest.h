/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DAMailboxRequest : NSObject {

	int _requestType;
	int _bodyFormat;
	NSString* _messageID;

}

@property (assign,nonatomic) int requestType;                 //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) int bodyFormat;                  //@synthesize bodyFormat=_bodyFormat - In the implementation block
@property (nonatomic,copy) NSString * messageID;              //@synthesize messageID=_messageID - In the implementation block
-(id)init;
-(void)setRequestType:(int)arg1 ;
-(void)setBodyFormat:(int)arg1 ;
-(int)bodyFormat;
-(int)requestType;
-(NSString *)messageID;
-(void)setMessageID:(NSString *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:56 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHAMessage.h>

@protocol OS_xpc_object;
@class AXHAXPCClient, NSObject;

@interface AXHAXPCMessage : AXHAMessage {

	AXHAXPCClient* _client;
	NSObject*<OS_xpc_object> _xpcPayload;
	NSObject*<OS_xpc_object> _xpcMessage;

}

@property (assign,nonatomic) AXHAXPCClient * client;                                    //@synthesize client=_client - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_xpc_object> xpcPayload;              //@synthesize xpcPayload=_xpcPayload - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcMessage;                       //@synthesize xpcMessage=_xpcMessage - In the implementation block
+(id)messageWithPayload:(id)arg1 xpcMessage:(id)arg2 andClient:(id)arg3 ;
-(void)dealloc;
-(void)setXpcMessage:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)xpcMessage;
-(void)setClient:(AXHAXPCClient *)arg1 ;
-(id)replyMessageWithPayload:(id)arg1 ;
-(NSObject*<OS_xpc_object>)xpcPayload;
-(AXHAXPCClient *)client;
@end

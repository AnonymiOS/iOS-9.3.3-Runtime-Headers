/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CATHTTPMessageParserDelegate;
#import <Catalyst/Catalyst-Structs.h>
@class NSDictionary;

@interface CATHTTPMessageParser : NSObject {

	CFHTTPMessageRef mCurrentMessage;
	NSDictionary* mAllHeaderFields;
	id<CATHTTPMessageParserDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CATHTTPMessageParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)encodeData:(id)arg1 ;
-(void)setDelegate:(id<CATHTTPMessageParserDelegate>)arg1 ;
-(void)dealloc;
-(id<CATHTTPMessageParserDelegate>)delegate;
-(BOOL)appendBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)delegateDidReceiveData:(id)arg1 ;
@end


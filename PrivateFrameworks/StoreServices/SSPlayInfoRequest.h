/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSPlayInfoRequestContext, SSPlayInfoResponse, NSString;

@interface SSPlayInfoRequest : SSRequest <SSXPCCoding> {

	SSPlayInfoRequestContext* _context;
	SSPlayInfoResponse* _response;

}

@property (readonly) SSPlayInfoRequestContext * playInfoContext; 
@property (readonly) SSPlayInfoResponse * playInfoResponse; 
@property (assign,nonatomic) id<SSPlayInfoRequestDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPlayInfoContext:(id)arg1 ;
-(void)startWithPlayInfoResponseBlock:(/*^block*/id)arg1 ;
-(SSPlayInfoRequestContext *)playInfoContext;
-(SSPlayInfoResponse *)playInfoResponse;
-(void)dealloc;
-(id)init;
-(BOOL)start;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
@end


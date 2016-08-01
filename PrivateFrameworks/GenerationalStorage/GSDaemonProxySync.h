/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GenerationalStorage/GenerationalStorage-Structs.h>
#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/GSProtocol.h>

@protocol GSProtocol, OS_dispatch_group;
@class NSObject, NSError;

@interface GSDaemonProxySync : NSProxy <GSProtocol> {

	NSObject*<GSProtocol> _proxy;
	NSObject*<OS_dispatch_group> _group;
	NSError* _error;
	id _result;
	int _recursive;

}

@property (nonatomic,retain) id result;                    //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
+(id)proxy;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)result;
-(void)setResult:(id)arg1 ;
-(void)handleObjResult:(id)arg1 error:(id)arg2 ;
-(void)handleBoolResult:(BOOL)arg1 error:(id)arg2 ;
-(id)waitForResultWithError:(id*)arg1 ;
-(id)waitForResultWithCFError:(_CFError*)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)initWithXPCObject:(id)arg1 ;
-(void)finalize;
@end


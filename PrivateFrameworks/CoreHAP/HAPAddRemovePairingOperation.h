/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:08 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSData, NSObject;

@interface HAPAddRemovePairingOperation : NSObject {

	BOOL _admin;
	BOOL _operationExecuting;
	long long _operation;
	NSString* _identifier;
	NSData* _publicKey;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _completionHandler;

}

@property (assign,nonatomic) long long operation;                             //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSData * publicKey;                              //@synthesize publicKey=_publicKey - In the implementation block
@property (assign,nonatomic) BOOL admin;                                      //@synthesize admin=_admin - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL operationExecuting;                         //@synthesize operationExecuting=_operationExecuting - In the implementation block
-(long long)operation;
-(void)setOperation:(long long)arg1 ;
-(NSString *)identifier;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAdmin:(BOOL)arg1 ;
-(void)setOperationExecuting:(BOOL)arg1 ;
-(id)initWith:(long long)arg1 identifier:(id)arg2 publicKey:(id)arg3 admin:(BOOL)arg4 queue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)admin;
-(BOOL)operationExecuting;
-(void)setPublicKey:(NSData *)arg1 ;
-(NSData *)publicKey;
@end


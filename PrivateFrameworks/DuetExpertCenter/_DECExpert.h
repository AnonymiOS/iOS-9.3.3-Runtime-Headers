/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, _DECExpertDelegate;
#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
@class NSXPCConnection, NSObject, _DECBackupHelper, NSString;

@interface _DECExpert : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	_DECBackupHelper* _backupHelper;
	unsigned long long _category;
	NSString* _identifier;
	id<_DECExpertDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long category;                  //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) id<_DECExpertDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<_DECExpertDelegate>)arg1 ;
-(id)init;
-(id<_DECExpertDelegate>)delegate;
-(void)setCategory:(unsigned long long)arg1 ;
-(unsigned long long)category;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)prewarmPredictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)receiveFeedback:(id)arg1 consumer:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)trainWithReply:(/*^block*/id)arg1 ;
-(void)saveModelWithByteLimit:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)restoreModelWithReply:(/*^block*/id)arg1 ;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 limit:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(id)initWithCategory:(unsigned long long)arg1 identifier:(NSString*)arg2 ;
-(id)initWithCategory:(unsigned long long)arg1 identifier:(NSString*)arg2 queue:(id)arg3 ;
-(void)setPrediction:(id)arg1 category:(unsigned long long)arg2 consumer:(unsigned long long)arg3 ;
@end


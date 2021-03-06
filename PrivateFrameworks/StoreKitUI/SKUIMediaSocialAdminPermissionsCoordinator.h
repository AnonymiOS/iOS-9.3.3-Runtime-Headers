/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:28 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSDate, NSMutableArray, NSNumber;

@interface SKUIMediaSocialAdminPermissionsCoordinator : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSArray* _lastKnownAuthors;
	NSDate* _lastRequestDate;
	NSMutableArray* _resultBlocks;

}

@property (copy,readonly) NSNumber * lastKnownAdminStatus; 
@property (copy,readonly) NSArray * lastKnownAuthors; 
+(id)sharedCoordinator;
-(id)init;
-(void)reset;
-(NSNumber *)lastKnownAdminStatus;
-(void)getAdminStatusWithOptions:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(NSArray *)lastKnownAuthors;
-(void)getAuthorsWithOptions:(id)arg1 authorsBlock:(/*^block*/id)arg2 ;
-(void)getAuthorsAndWaitWithOptions:(id)arg1 authorsBlock:(/*^block*/id)arg2 ;
-(void)_authenticateOnCompletion:(/*^block*/id)arg1 ;
-(void)_queueResultBlock:(/*^block*/id)arg1 ;
-(void)_getAuthors;
-(void)_handleOperationResponseWithAuthors:(id)arg1 error:(id)arg2 ;
-(void)_fireResultsBlocksWithAuthors:(id)arg1 error:(id)arg2 ;
@end


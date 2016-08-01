/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreResult.h>

@class NSProgress, NSError, NSManagedObjectContext;

@interface NSPersistentStoreAsynchronousResult : NSPersistentStoreResult {

	NSProgress* _requestProgress;
	NSError* _requestError;
	NSManagedObjectContext* _requestContext;
	id _requestCompletionBlock;
	int _flags;

}

@property (readonly) NSManagedObjectContext * managedObjectContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (retain) NSError * operationError;                                     //@synthesize requestError=_requestError - In the implementation block
@property (retain) NSProgress * progress;                                        //@synthesize requestProgress=_requestProgress - In the implementation block
@property (copy) id requestCompletionBlock;                                      //@synthesize requestCompletionBlock=_requestCompletionBlock - In the implementation block
-(id)initWithContext:(id)arg1 andProgress:(id)arg2 completetionBlock:(id)arg3 ;
-(void)_cancelProgress;
-(NSError *)operationError;
-(void)setOperationError:(NSError *)arg1 ;
-(id)requestCompletionBlock;
-(void)cancel;
-(void)dealloc;
-(void)setProgress:(NSProgress *)arg1 ;
-(NSProgress *)progress;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setRequestCompletionBlock:(id)arg1 ;
-(BOOL)_isCancelled;
@end


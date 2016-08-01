/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface _PFLock : NSObject <NSLocking> {

	int _cd_rc;
	opaque_pthread_mutex_t _lock;
	opaque_pthread_t* _owner;
	unsigned long long _count;

}
+(void)initialize;
-(BOOL)tryLock;
-(void)dealloc;
-(id)init;
-(void)lock;
-(void)unlock;
-(void)finalize;
@end


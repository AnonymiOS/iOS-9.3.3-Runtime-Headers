/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSMutableArray, NSObject;

@interface SDFFreshObjectQueue : NSObject {

	double _lifetime;
	unsigned long long _expired;
	NSMutableArray* _queue;
	NSObject*<OS_dispatch_source> _flusher;

}
-(void)removeObject:(id)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(id)lastObject;
-(id)description;
-(id)debugDescription;
-(BOOL)containsObject:(id)arg1 ;
-(void)removeLastObject;
-(void)flushOldObjects;
-(void)_renewFlusher;
-(void)_flushOldObjects;
-(id)initWithObjectLifetime:(double)arg1 ;
-(unsigned long long)expiredObjectsCount;
-(void)_addEntry:(id)arg1 ;
-(id)_objectAtIndex:(unsigned long long)arg1 metadata:(id*)arg2 date:(id*)arg3 ;
-(void)addObject:(id)arg1 andMetadata:(id)arg2 ;
-(id)objectAtIndex:(unsigned long long)arg1 metadata:(id*)arg2 ;
-(id)objectAtIndex:(unsigned long long)arg1 metadata:(id*)arg2 date:(id*)arg3 ;
@end


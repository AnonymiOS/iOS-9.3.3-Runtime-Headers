/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:23 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableOrderedSet.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSOrderedSetChanges : NSMutableOrderedSet <NSCopying>

@property (readonly) unsigned long long changeCount; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)updateObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)applyChangesToOrderedSet:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2 ;
-(void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)addChanges:(id)arg1 ;
-(BOOL)_isToManyChangeInformation;
-(void)enumerateChangesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateChanges:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addChange:(id)arg1 ;
-(long long)_toManyPropertyType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)changeCount;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


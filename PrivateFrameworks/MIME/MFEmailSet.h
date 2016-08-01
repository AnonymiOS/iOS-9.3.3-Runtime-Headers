/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:21 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MIME-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@interface MFEmailSet : NSMutableSet {

	CFSetRef _set;

}
+(id)set;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MF2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)unionSet:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(id)allObjects;
-(void)minusSet:(id)arg1 ;
-(id)objectEnumerator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToSet:(id)arg1 ;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(BOOL)intersectsSet:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)member:(id)arg1 ;
-(void)_setupSetWithCapacity:(unsigned long long)arg1 ;
-(id)_generateAllObjectsFromSelector:(SEL)arg1 ;
-(id)allCommentedAddresses;
-(void)setSet:(id)arg1 ;
@end


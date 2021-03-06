/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class PLManagedObjectContext, NSArray;

@interface PLPTPdAssetEnumerator : NSObject <NSFastEnumeration> {

	PLManagedObjectContext* _managedObjectContext;
	NSArray* _assetObjectIDs;
	NSArray* _albumObjectIDs;

}
+(id)enumeratorWithAssetObjectIDs:(id)arg1 albumObjectIDs:(id)arg2 managedObjectContext:(id)arg3 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PL24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)init;
-(void)enumerateDictionariesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)getPTPdInfo:(id*)arg1 count:(unsigned long long)arg2 fetchOffset:(unsigned long long)arg3 ;
-(void)enumerateDictionariesWithCount:(unsigned long long)arg1 fetchOffset:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)assetsFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
@end


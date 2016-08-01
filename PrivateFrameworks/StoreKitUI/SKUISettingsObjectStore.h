/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableOrderedSet;

@interface SKUISettingsObjectStore : NSObject {

	NSMutableOrderedSet* _allObjects;
	BOOL _dirty;
	NSMutableOrderedSet* _visibleObjects;

}
-(void)removeObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)description;
-(BOOL)containsObject:(id)arg1 ;
-(id)allObjects;
-(void)addObject:(id)arg1 hidden:(BOOL)arg2 ;
-(unsigned long long)numberOfObjects;
-(unsigned long long)numberOfVisibleObjects;
-(void)hideObject:(id)arg1 ;
-(unsigned long long)indexOfVisibleObject:(id)arg1 ;
-(BOOL)objectIsVisible:(id)arg1 ;
-(void)enumerateObjects:(/*^block*/id)arg1 ;
-(void)revealObject:(id)arg1 ;
-(id)visibleObjectAtIndex:(unsigned long long)arg1 ;
-(void)_updateVisibleOrder;
-(void)enumerateVisibleObjects:(/*^block*/id)arg1 ;
@end


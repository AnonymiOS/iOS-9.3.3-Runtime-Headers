/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UICollectionViewFocusDelegate_Legacy <UICollectionViewDelegate>
@optional
-(BOOL)_collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
-(void)_collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2;
-(BOOL)collectionView:(id)arg1 shouldChangeFocusedItem:(id)arg2 fromItemAtIndexPath:(id)arg3;
-(id)indexPathForPreferredFocusedItemForCollectionView:(id)arg1;
-(BOOL)collectionView:(id)arg1 shouldUpdateFocusFromItemAtIndexPath:(id)arg2 toView:(id)arg3 heading:(unsigned long long)arg4;

@end


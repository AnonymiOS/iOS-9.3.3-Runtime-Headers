/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:57 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSSearchableIndexObserver <NSObject>
@optional
-(void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2;
-(void)purgeSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
-(void)addUserAction:(id)arg1 withItem:(id)arg2;
-(id)supportedUTIs;

@required
-(void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg1;
-(void)addOrUpdateSearchableItems:(id)arg1;

@end


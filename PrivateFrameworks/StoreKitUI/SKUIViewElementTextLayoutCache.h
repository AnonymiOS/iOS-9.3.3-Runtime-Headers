/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:29 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class SKUILayoutCache, NSMutableDictionary;

@interface SKUIViewElementTextLayoutCache : NSObject {

	SKUILayoutCache* _layoutCache;
	NSMutableDictionary* _layoutMapTables;

}

@property (nonatomic,readonly) SKUILayoutCache * layoutCache;              //@synthesize layoutCache=_layoutCache - In the implementation block
-(CGSize)sizeForViewElement:(id)arg1 width:(double)arg2 ;
-(id)initWithLayoutCache:(id)arg1 ;
-(void)requestLayoutForButton:(id)arg1 attributedString:(id)arg2 width:(long long)arg3 ;
-(void)requestLayoutForLabel:(id)arg1 attributedString:(id)arg2 width:(long long)arg3 ;
-(void)requestLayoutForBadge:(id)arg1 width:(long long)arg2 ;
-(void)requestLayoutForViewElement:(id)arg1 attributedString:(id)arg2 width:(long long)arg3 ;
-(SKUILayoutCache *)layoutCache;
-(id)layoutForWidth:(long long)arg1 viewElement:(id)arg2 ;
-(void)requestLayoutForOrdinal:(id)arg1 attributedString:(id)arg2 width:(long long)arg3 ;
-(CGSize)estimatedSizeForLabel:(id)arg1 width:(double)arg2 ;
-(void)invalidateLayoutsForUpdatedElements;
-(CGSize)sizeForButton:(id)arg1 width:(double)arg2 ;
-(CGSize)estimatedSizeForOrdinal:(id)arg1 width:(double)arg2 ;
-(CGSize)sizeForLabel:(id)arg1 width:(double)arg2 ;
-(id)_existingLayoutForViewElement:(id)arg1 width:(long long)arg2 ;
-(CGSize)_bestGuessSizeForButton:(id)arg1 width:(double)arg2 ;
-(CGSize)_bestGuessSizeForLabel:(id)arg1 width:(double)arg2 ;
-(CGSize)_bestGuessSizeForOrdinal:(id)arg1 width:(double)arg2 ;
-(id)_createLayoutRequestForBadge:(id)arg1 width:(long long)arg2 ;
-(void)_addRequest:(id)arg1 forViewElement:(id)arg2 ;
-(id)_createLayoutRequestForButton:(id)arg1 attributedString:(id)arg2 width:(long long)arg3 ;
-(id)_createLayoutRequestForLabel:(id)arg1 attributedString:(id)arg2 width:(long long)arg3 ;
-(id)_createLayoutRequestForOrdinal:(id)arg1 attributedString:(id)arg2 width:(long long)arg3 ;
-(id)_createLayoutRequestForViewElement:(id)arg1 attributedString:(id)arg2 width:(long long)arg3 ;
-(id)_layoutIndexForViewElement:(id)arg1 width:(long long)arg2 ;
-(id)_bestGuessCache;
-(CGSize)estimatedSizeForButton:(id)arg1 width:(double)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:28 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

@interface SKUIShelfViewElement : SKUIViewElement {

	long long _numberOfRows;
	NSString* _slideshowTitle;
	/*^block*/id _shelfItemViewElementValidator;

}

@property (nonatomic,readonly) long long numberOfRows;                    //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (nonatomic,readonly) NSString * slideshowTitle;                 //@synthesize slideshowTitle=_slideshowTitle - In the implementation block
@property (nonatomic,copy) id shelfItemViewElementValidator;              //@synthesize shelfItemViewElementValidator=_shelfItemViewElementValidator - In the implementation block
-(long long)numberOfRows;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(NSString *)slideshowTitle;
-(id)shelfItemViewElementValidator;
-(void)setShelfItemViewElementValidator:(id)arg1 ;
@end


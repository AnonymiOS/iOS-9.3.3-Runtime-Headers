/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:25 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIShelfMenuBarViewElement.h>
#import <libobjc.A.dylib/SKUIDynamicShelfViewElement.h>

@class SKUIViewElement, NSString;

@interface SKUIDynamicShelfMenuBarViewElement : SKUIShelfMenuBarViewElement <SKUIDynamicShelfViewElement> {

	SKUIViewElement* _cellTemplateViewElement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SKUIViewElement * cellTemplateViewElement; 
@property (nonatomic,readonly) id<SKUIEntityProviding> entityProvider; 
-(SKUIViewElement *)cellTemplateViewElement;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(BOOL)isDynamicContainer;
-(void)setShelfItemViewElementValidator:(/*^block*/id)arg1 ;
@end


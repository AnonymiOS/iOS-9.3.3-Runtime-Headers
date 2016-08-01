/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:23 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPageComponent.h>

@class NSString, SKUIDividerViewElement;

@interface SKUIDividerPageComponent : SKUIPageComponent {

	NSString* _title;

}

@property (nonatomic,readonly) SKUIDividerViewElement * viewElement; 
@property (nonatomic,readonly) NSString * dividerTitle;                           //@synthesize title=_title - In the implementation block
-(long long)componentType;
-(NSString *)dividerTitle;
-(id)initWithCustomPageContext:(id)arg1 ;
-(id)initWithViewElement:(id)arg1 ;
-(id)initWithDividerTitle:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:29 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageDataConsumer.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, SKUIColorScheme;

@interface SKUIProductImageDataConsumer : SKUIImageDataConsumer <NSCopying> {

	UIColor* _backgroundColor;
	CGSize _iconSize;
	SKUIColorScheme* _colorScheme;

}

@property (nonatomic,readonly) CGSize iconSize;                          //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,retain) UIColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
+(id)smartBannerConsumer;
+(id)giftComposePosterConsumer;
+(id)giftComposeLetterboxConsumer;
+(id)giftComposeConsumer;
+(id)giftResultConsumer;
+(id)giftThemePosterConsumer;
+(id)giftThemeLetterboxConsumer;
+(id)giftThemeConsumer;
+(id)lockupConsumerWithSize:(long long)arg1 itemKind:(long long)arg2 ;
+(id)consumerWithSize:(CGSize)arg1 ;
+(id)gridConsumer;
+(id)wishlistConsumer;
+(id)cardConsumer;
+(id)chartsConsumer;
+(id)updatesConsumer;
+(id)purchasedConsumer;
+(id)productPageConsumer;
+(id)swooshConsumer;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)imageSize;
-(id)imageForImage:(id)arg1 ;
-(id)imageForColor:(id)arg1 ;
-(id)imageForColor:(id)arg1 size:(CGSize)arg2 ;
-(CGSize)iconSize;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
@end


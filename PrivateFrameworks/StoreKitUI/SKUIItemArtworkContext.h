/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:28 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class UIColor, SKUIColorScheme, SKUIProductImageDataConsumer, SKUIStyledImageDataConsumer, NSMutableDictionary;

@interface SKUIItemArtworkContext : NSObject {

	UIColor* _backgroundColor;
	SKUIColorScheme* _colorScheme;
	SKUIProductImageDataConsumer* _generalImageConsumer;
	SKUIStyledImageDataConsumer* _iconConsumer;
	SKUIProductImageDataConsumer* _letterboxConsumer;
	SKUIStyledImageDataConsumer* _newsstandConsumer;
	NSMutableDictionary* _placeholders;
	SKUIProductImageDataConsumer* _posterConsumer;

}

@property (nonatomic,retain) SKUIProductImageDataConsumer * generalConsumer;                //@synthesize generalImageConsumer=_generalImageConsumer - In the implementation block
@property (nonatomic,retain) SKUIStyledImageDataConsumer * iconConsumer;                    //@synthesize iconConsumer=_iconConsumer - In the implementation block
@property (nonatomic,retain) SKUIProductImageDataConsumer * letterboxConsumer;              //@synthesize letterboxConsumer=_letterboxConsumer - In the implementation block
@property (nonatomic,retain) SKUIStyledImageDataConsumer * newsstandConsumer;               //@synthesize newsstandConsumer=_newsstandConsumer - In the implementation block
@property (nonatomic,retain) SKUIProductImageDataConsumer * posterConsumer;                 //@synthesize posterConsumer=_posterConsumer - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme;                                 //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                     //@synthesize backgroundColor=_backgroundColor - In the implementation block
+(id)wishlistContext;
+(id)lockupContextWithSize:(long long)arg1 ;
+(id)roomContext;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)placeholderImageForItem:(id)arg1 ;
-(id)dataConsumerForItem:(id)arg1 ;
-(void)setIconConsumer:(SKUIStyledImageDataConsumer *)arg1 ;
-(void)setGeneralConsumer:(SKUIProductImageDataConsumer *)arg1 ;
-(void)setNewsstandConsumer:(SKUIStyledImageDataConsumer *)arg1 ;
-(void)setPosterConsumer:(SKUIProductImageDataConsumer *)arg1 ;
-(void)setLetterboxConsumer:(SKUIProductImageDataConsumer *)arg1 ;
-(CGSize)imageSizeForItem:(id)arg1 ;
-(id)URLForItem:(id)arg1 ;
-(CGSize)largestImageSizeForLockups:(id)arg1 ;
-(SKUIStyledImageDataConsumer *)iconConsumer;
-(id)artworkForItem:(id)arg1 ;
-(CGSize)largestImageSizeForItems:(id)arg1 ;
-(SKUIProductImageDataConsumer *)generalConsumer;
-(SKUIProductImageDataConsumer *)letterboxConsumer;
-(SKUIStyledImageDataConsumer *)newsstandConsumer;
-(SKUIProductImageDataConsumer *)posterConsumer;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
@end


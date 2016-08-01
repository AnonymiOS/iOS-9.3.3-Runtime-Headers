/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:25 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUISwooshArtworkLoader.h>

@class SKUIItemArtworkContext, SKUIVideoImageDataConsumer, UIImage, SKUILockupSwooshViewController;

@interface SKUILockupSwooshArtworkLoader : SKUISwooshArtworkLoader {

	SKUIItemArtworkContext* _context;
	SKUIVideoImageDataConsumer* _videoImageConsumer;
	UIImage* _videoPlaceholderImage;

}

@property (nonatomic,readonly) SKUILockupSwooshViewController * swooshViewController; 
-(id)placeholderImageForItem:(id)arg1 ;
-(id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2 ;
-(void)setImage:(id)arg1 forRequest:(id)arg2 ;
-(void)loadImagesForNextPageWithReason:(long long)arg1 ;
-(BOOL)loadImageForItem:(id)arg1 reason:(long long)arg2 ;
-(BOOL)loadImageForVideo:(id)arg1 reason:(long long)arg2 ;
-(id)cachedImageForItem:(id)arg1 ;
-(id)cachedImageForVideo:(id)arg1 ;
-(id)placeholderImageForVideo:(id)arg1 ;
@end


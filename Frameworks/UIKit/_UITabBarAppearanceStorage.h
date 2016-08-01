/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, UIImage, UIColor, _UITabBarItemAppearanceStorage, NSDictionary;

@interface _UITabBarAppearanceStorage : NSObject {

	NSMutableDictionary* _dividerImages;
	UIImage* backgroundImage;
	UIImage* shadowImage;
	UIImage* selectionIndicatorImage;
	UIColor* barTintColor;
	UIColor* selectedImageTintColor;
	_UITabBarItemAppearanceStorage* tabItemAppearanceStorage;

}

@property (nonatomic,retain) UIImage * backgroundImage; 
@property (nonatomic,retain) UIImage * shadowImage; 
@property (nonatomic,retain) UIImage * selectionIndicatorImage; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (nonatomic,retain) UIColor * selectedImageTintColor; 
@property (nonatomic,retain) _UITabBarItemAppearanceStorage * tabItemAppearanceStorage; 
@property (nonatomic,copy,readonly) NSDictionary * dividerImagesForCoding; 
-(void)dealloc;
-(UIImage *)backgroundImage;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(UIColor *)barTintColor;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setTabItemAppearanceStorage:(_UITabBarItemAppearanceStorage *)arg1 ;
-(_UITabBarItemAppearanceStorage *)tabItemAppearanceStorage;
-(id)_tabItemAppearanceStorage;
-(void)_setDividerImage:(id)arg1 forLeftButtonState:(unsigned long long)arg2 rightButtonState:(unsigned long long)arg3 ;
-(id)_dividerImageForLeftButtonState:(unsigned long long)arg1 rightButtonState:(unsigned long long)arg2 ;
-(NSDictionary *)dividerImagesForCoding;
-(UIImage *)selectionIndicatorImage;
-(void)setSelectionIndicatorImage:(UIImage *)arg1 ;
-(UIColor *)selectedImageTintColor;
-(void)setSelectedImageTintColor:(UIColor *)arg1 ;
@end


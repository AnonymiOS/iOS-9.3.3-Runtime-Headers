/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:45 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKBCacheableView.h>

@class CALayer, NSString;

@interface UIKBThemedView : UIView <UIKBCacheableView> {

	CALayer* _borders;
	CALayer* _background;
	BOOL _lightKeyboard;
	BOOL _active;
	BOOL _usePersistentCaching;
	BOOL _noBorders;
	int _style;
	UIEdgeInsets _cacheInsets;

}

@property (assign,nonatomic) BOOL active;                            //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) int style;                              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) UIEdgeInsets cacheInsets;               //@synthesize cacheInsets=_cacheInsets - In the implementation block
@property (assign,nonatomic) BOOL usePersistentCaching;              //@synthesize usePersistentCaching=_usePersistentCaching - In the implementation block
@property (assign,nonatomic) BOOL noBorders;                         //@synthesize noBorders=_noBorders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) BOOL cacheDeferable; 
@property (nonatomic,readonly) double cachedWidth; 
@property (nonatomic,readonly) BOOL keepNonPersistent; 
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(BOOL)_canDrawContent;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(NSString *)cacheKey;
-(double)cachedWidth;
-(id)cacheKeysForRenderFlags:(id)arg1 ;
-(void)drawContentsOfRenderers:(id)arg1 ;
-(BOOL)cacheDeferable;
-(BOOL)keepNonPersistent;
-(void)setCacheInsets:(UIEdgeInsets)arg1 ;
-(void)setUsePersistentCaching:(BOOL)arg1 ;
-(UIEdgeInsets)cacheInsets;
-(BOOL)noBorders;
-(void)_populateLayer:(id)arg1 withContents:(id)arg2 ;
-(id)borderFilterTypeForCurrentStyle;
-(BOOL)_hasInsets;
-(id)traitsForCurrentStyle;
-(BOOL)usePersistentCaching;
-(void)setNoBorders:(BOOL)arg1 ;
@end


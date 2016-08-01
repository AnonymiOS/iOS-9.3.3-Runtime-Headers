/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:25 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseCollectionViewCell.h>
#import <libobjc.A.dylib/SKUIItemOfferButtonDelegate.h>
#import <libobjc.A.dylib/SKUIOfferViewDelegate.h>
#import <libobjc.A.dylib/SKUIPerspectiveView.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class NSHashTable, NSMapTable, SKUIProductLockupLayout, SKUILockupViewElement, SKUIGradientView, NSMutableArray, NSString;

@interface SKUIProductLockupCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIItemOfferButtonDelegate, SKUIOfferViewDelegate, SKUIPerspectiveView, SKUIViewElementView> {

	NSHashTable* _artworkRelatedChildViewElementViews;
	NSMapTable* _buyButtonDescriptorToButton;
	NSMapTable* _elementViews;
	NSMapTable* _imageViewToImageResourceCacheKey;
	SKUIProductLockupLayout* _layout;
	SKUILockupViewElement* _lockup;
	SKUIGradientView* _offerConfirmationGradientView;
	long long _offerMetadataPosition;
	NSHashTable* _offerViews;
	NSMutableArray* _segmentedControlControllers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(id)_attributedStringForButton:(id)arg1 context:(id)arg2 ;
+(id)_attributedStringForLabel:(id)arg1 context:(id)arg2 ;
+(double)maximumPerspectiveHeightForSize:(CGSize)arg1 ;
+(void)_requestLayoutForViewElements:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(void)setPerspectiveTargetView:(id)arg1 ;
-(void)setVanishingPoint:(CGPoint)arg1 ;
-(void)updateForChangedDistanceFromVanishingPoint;
-(void)_cancelConfirmationAction:(id)arg1 ;
-(void)_showConfirmationAction:(id)arg1 ;
-(void)_imageTapAction:(id)arg1 ;
-(void)itemOfferButtonDidAnimateTransition:(id)arg1 ;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
-(id)_viewElementForView:(id)arg1 ;
-(CGRect)_stackElements:(id)arg1 alignment:(long long)arg2 inRect:(CGRect)arg3 ;
-(CGRect)_stackBottomRightElements:(id)arg1 inRect:(CGRect)arg2 ;
-(void)_updateLayoutToAnimateOfferTransitionForView:(id)arg1 ;
-(void)_prepareOfferConfirmationGradientForView:(id)arg1 ;
-(CGRect)_frameForSection:(long long)arg1 ;
-(void)_layoutConfirmationGradientRelativeToSection:(long long)arg1 alpha:(double)arg2 ;
-(BOOL)offerViewAnimateTransition:(id)arg1 ;
-(void)offerViewDidAnimateTransition:(id)arg1 ;
-(void)offerViewWillAnimateTransition:(id)arg1 ;
@end


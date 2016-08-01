/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIViewElementText, SKUIBuyButtonDescriptor, SKUIStoreIdentifier, IKDOMElement, IKViewElementStyle, SKUIImageViewElement;

@interface SKUIButtonViewElement : SKUIViewElement {

	NSString* _badgeResourceName;
	BOOL _bigHitButton;
	double _bigHitSize;
	SKUIViewElementText* _buttonText;
	long long _buttonViewType;
	SKUIBuyButtonDescriptor* _buyButtonDescriptor;
	NSString* _confirmationText;
	long long _dataPlaybackId;
	BOOL _disabledButSelectable;
	char _enabled;
	long long _itemIdentifier;
	NSString* _nonToggledText;
	BOOL _selected;
	BOOL _showOnDemand;
	SKUIStoreIdentifier* _storeIdentifier;
	BOOL _toggled;
	NSString* _toggledText;
	NSString* _toggleItemIdentfier;
	NSString* _variantIdentifier;
	IKDOMElement* _xml;
	BOOL _autoIncrementCount;
	NSString* _toggleItemIdentifier;
	long long _buttonViewSubType;
	NSString* _playItemIdentifier;
	NSString* _sizeVariant;

}

@property (nonatomic,readonly) BOOL autoIncrementCount;                                                //@synthesize autoIncrementCount=_autoIncrementCount - In the implementation block
@property (getter=isBigHitButton,nonatomic,readonly) BOOL bigHitButton;                                //@synthesize bigHitButton=_bigHitButton - In the implementation block
@property (nonatomic,readonly) double bigHitSize;                                                      //@synthesize bigHitSize=_bigHitSize - In the implementation block
@property (nonatomic,readonly) SKUIBuyButtonDescriptor * buyButtonDescriptor; 
@property (nonatomic,readonly) long long buttonViewType;                                               //@synthesize buttonViewType=_buttonViewType - In the implementation block
@property (nonatomic,readonly) long long buttonViewSubType;                                            //@synthesize buttonViewSubType=_buttonViewSubType - In the implementation block
@property (nonatomic,readonly) SKUIViewElementText * buttonText; 
@property (nonatomic,readonly) IKViewElementStyle * buttonTitleStyle; 
@property (nonatomic,readonly) NSString * confirmationText;                                            //@synthesize confirmationText=_confirmationText - In the implementation block
@property (nonatomic,readonly) NSString * nonToggledText;                                              //@synthesize nonToggledText=_nonToggledText - In the implementation block
@property (nonatomic,readonly) NSString * toggledText;                                                 //@synthesize toggledText=_toggledText - In the implementation block
@property (nonatomic,readonly) NSString * badgeResourceName;                                           //@synthesize badgeResourceName=_badgeResourceName - In the implementation block
@property (nonatomic,readonly) SKUIImageViewElement * buttonImage; 
@property (nonatomic,readonly) SKUIImageViewElement * additionalButtonImage; 
@property (nonatomic,readonly) long long itemIdentifier;                                               //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) SKUIStoreIdentifier * storeIdentifier;                                  //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,readonly) long long dataPlaybackId;                                               //@synthesize dataPlaybackId=_dataPlaybackId - In the implementation block
@property (nonatomic,readonly) NSString * playItemIdentifier;                                          //@synthesize playItemIdentifier=_playItemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * sizeVariant;                                                 //@synthesize sizeVariant=_sizeVariant - In the implementation block
@property (nonatomic,readonly) BOOL showOnDemand;                                                      //@synthesize showOnDemand=_showOnDemand - In the implementation block
@property (nonatomic,readonly) NSString * toggleItemIdentifier;                                        //@synthesize toggleItemIdentifier=_toggleItemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * variantIdentifier;                                           //@synthesize variantIdentifier=_variantIdentifier - In the implementation block
@property (getter=isDisabledButSelectable,nonatomic,readonly) BOOL disabledButSelectable;              //@synthesize disabledButSelectable=_disabledButSelectable - In the implementation block
@property (getter=isSelected,nonatomic,readonly) BOOL selected;                                        //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isToggled,nonatomic) BOOL toggled;                                            //@synthesize toggled=_toggled - In the implementation block
-(void)dealloc;
-(id)description;
-(BOOL)isEnabled;
-(BOOL)isSelected;
-(SKUIImageViewElement *)buttonImage;
-(unsigned long long)elementType;
-(long long)itemIdentifier;
-(SKUIViewElementText *)buttonText;
-(IKViewElementStyle *)buttonTitleStyle;
-(SKUIStoreIdentifier *)storeIdentifier;
-(NSString *)variantIdentifier;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(NSString *)confirmationText;
-(void)setToggled:(BOOL)arg1 ;
-(SKUIBuyButtonDescriptor *)buyButtonDescriptor;
-(id)personalizationLibraryItems;
-(BOOL)isBigHitButton;
-(BOOL)isToggled;
-(NSString *)toggleItemIdentifier;
-(long long)buttonViewType;
-(NSString *)playItemIdentifier;
-(BOOL)showOnDemand;
-(BOOL)isDisabledButSelectable;
-(long long)buttonViewSubType;
-(NSString *)nonToggledText;
-(NSString *)toggledText;
-(SKUIImageViewElement *)additionalButtonImage;
-(double)bigHitSize;
-(BOOL)autoIncrementCount;
-(NSString *)sizeVariant;
-(NSString *)badgeResourceName;
-(id)_parseButtonText;
-(long long)dataPlaybackId;
@end


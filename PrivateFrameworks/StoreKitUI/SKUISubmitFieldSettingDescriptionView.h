/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:23 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIFieldSettingDescriptionView.h>

@class SKUIInputViewElement, UILabel, SKUIFieldSettingDescription;

@interface SKUISubmitFieldSettingDescriptionView : SKUIFieldSettingDescriptionView {

	double _aggregateLabelWidth;
	SKUIInputViewElement* _inputViewElement;
	UILabel* _label;
	SKUIFieldSettingDescription* _settingDescription;

}
+(BOOL)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(void)_addInputWithElement:(id)arg1 ;
-(id)_currentControllerValue;
-(void)_addSubmitInputWithElement:(id)arg1 ;
@end


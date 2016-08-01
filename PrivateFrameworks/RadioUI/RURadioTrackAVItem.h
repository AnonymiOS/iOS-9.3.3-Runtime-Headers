/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RadioUI/RURadioAVItem.h>

@class NSString;

@interface RURadioTrackAVItem : RURadioAVItem {

	NSString* _assetFlavor;
	NSString* _preferredAssetFlavor;

}
+(id)_currentPreferredAssetFlavor;
-(void)loadAssetAndPlayerItem;
-(id)assetFlavor;
-(id)_bestRadioTrackAssetWithPreferredAssetFlavor:(id)arg1 availableAssets:(id)arg2 ;
-(void)_saveDownloadKeyCookie:(id)arg1 forURL:(id)arg2 ;
-(id)_sinfsByRemovingEmptyPinfsFromSinfs:(id)arg1 ;
-(BOOL)supportsRadioTrackActions;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:44 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UITableViewCellLayoutManager : NSObject
+(id)_alternateUISwitchableSelectorPairs;
+(id)layoutManagerForTableViewCellStyle:(long long)arg1 ;
+(id)_externalTextColor;
+(id)_alternateExternalTextColor;
+(id)_externalDetailTextColor;
+(id)_alternateExternalDetailTextColor;
-(CGRect)_backgroundRectForCell:(id)arg1 forIndentedState:(BOOL)arg2 rowWidth:(double)arg3 ;
-(CGRect)_adjustedBackgroundRectForCell:(id)arg1 forIndentedState:(BOOL)arg2 rowWidth:(double)arg3 ;
-(CGRect)_adjustedBackgroundContentRectForCell:(id)arg1 forIndentedState:(BOOL)arg2 rowWidth:(double)arg3 ;
-(BOOL)_editControlOnSameSideAsReorderControlForCell:(id)arg1 ;
-(CGRect)_adjustedBackgroundRectForCell:(id)arg1 forIndentedState:(BOOL)arg2 ;
-(CGRect)_reorderControlRectForCell:(id)arg1 offscreen:(BOOL)arg2 ;
-(CGRect)_adjustedBackgroundContentRectForCell:(id)arg1 forIndentedState:(BOOL)arg2 ;
-(CGRect)_reorderSeparatorRectForCell:(id)arg1 offscreen:(BOOL)arg2 ;
-(CGRect)_editingAccessoryRectForCell:(id)arg1 offscreen:(BOOL)arg2 ;
-(CGRect)_accessoryRectForCell:(id)arg1 offscreen:(BOOL)arg2 rowWidth:(double)arg3 ;
-(CGRect)_editControlRectForCell:(id)arg1 offscreen:(BOOL)arg2 ;
-(CGRect)_accessoryRectForCell:(id)arg1 offscreen:(BOOL)arg2 ;
-(CGRect)_contentRectForCell:(id)arg1 forEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 rowWidth:(double)arg4 ;
-(CGRect)_backgroundRectForCell:(id)arg1 forIndentedState:(BOOL)arg2 ;
-(CGRect)_contentRectForCell:(id)arg1 forEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(CGRect)contentRectForCell:(id)arg1 forState:(unsigned long long)arg2 ;
-(CGRect)backgroundEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(void)layoutSubviewsOfCell:(id)arg1 ;
-(id)defaultTextLabelFontForCell:(id)arg1 ;
-(CGRect)contentRectForCell:(id)arg1 forState:(unsigned long long)arg2 rowWidth:(double)arg3 ;
-(id)textLabelForCell:(id)arg1 ;
-(id)detailTextLabelForCell:(id)arg1 ;
-(id)editableTextFieldForCell:(id)arg1 ;
-(id)imageViewForCell:(id)arg1 ;
-(id)badgeForCell:(id)arg1 ;
-(CGRect)contentEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(void)cell:(id)arg1 willTransitionToState:(unsigned long long)arg2 ;
-(void)cell:(id)arg1 didTransitionToState:(unsigned long long)arg2 ;
-(CGRect)selectedBackgroundEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(CGRect)backgroundStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(CGSize)intrinsicContentSizeForCell:(id)arg1 rowWidth:(double)arg2 ;
-(BOOL)reorderControlShouldAppearForCell:(id)arg1 ;
-(BOOL)accessoryShouldAppearForCell:(id)arg1 ;
-(BOOL)editingAccessoryShouldAppearForCell:(id)arg1 ;
-(BOOL)reorderSeparatorShouldAppearForCell:(id)arg1 ;
-(BOOL)editControlShouldAppearForCell:(id)arg1 ;
-(CGRect)deleteConfirmationRectForCell:(id)arg1 ;
-(double)defaultTextLabelFontSizeForCell:(id)arg1 ;
-(id)defaultLabelForCell:(id)arg1 ofClass:(Class)arg2 ;
-(id)defaultImageViewForCell:(id)arg1 ;
-(id)defaultLabelForCell:(id)arg1 ;
-(id)defaultBadgeForCell:(id)arg1 ;
-(CGRect)editControlEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(BOOL)editControlShouldFadeForCell:(id)arg1 ;
-(CGRect)reorderControlEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(BOOL)reorderControlShouldFadeForCell:(id)arg1 ;
-(CGRect)reorderSeparatorEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(BOOL)reorderSeparatorShouldFadeForCell:(id)arg1 ;
-(CGRect)accessoryEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(BOOL)accessoryShouldFadeForCell:(id)arg1 ;
-(CGRect)editingAccessoryEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(BOOL)editingAccessoryShouldFadeForCell:(id)arg1 ;
-(CGRect)contentEndingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(BOOL)arg2 ;
-(double)contentIndentationForCell:(id)arg1 ;
-(void)getTextLabelRect:(CGRect*)arg1 detailTextLabelRect:(CGRect*)arg2 forCell:(id)arg3 rowWidth:(double)arg4 ;
-(void)_layoutFocusGuidesForCell:(id)arg1 ;
-(CGRect)editControlStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(CGRect)reorderControlStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(CGRect)reorderSeparatorStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(CGRect)accessoryStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(CGRect)editingAccessoryStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(CGRect)contentStartingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(BOOL)arg2 ;
-(CGRect)contentStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(void)_updateFocusGuidesForCell:(id)arg1 editing:(BOOL)arg2 ;
-(CGRect)textRectForCell:(id)arg1 rowWidth:(double)arg2 ;
-(double)defaultDetailTextLabelFontSizeForCell:(id)arg1 ;
-(id)defaultDetailTextLabelFontForCell:(id)arg1 ;
-(id)defaultEditableTextFieldForCell:(id)arg1 ;
-(CGRect)textRectForCell:(id)arg1 ;
@end


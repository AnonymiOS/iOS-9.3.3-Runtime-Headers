/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:16 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKUIConstrainedFontsTableViewCell.h>

@class UILabel;

@interface SubtitleCellWithAdditionalDetail : EKUIConstrainedFontsTableViewCell {

	UILabel* _additionalDetailLabel;

}

@property (nonatomic,retain,readonly) UILabel * additionalDetailLabel; 
-(void)layoutSubviews;
-(UILabel *)additionalDetailLabel;
-(BOOL)leftFrame:(CGRect)arg1 overlapsRightFrame:(CGRect)arg2 difference:(double*)arg3 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:16 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIView, UILabel, ColorBarView, UIImageView, NSLayoutConstraint, UIColor, NSDate, EKCalendarDate, NSAttributedString, NSString, NSDictionary, NSTimer;

@interface EKUIOccurrenceTableViewCell : UITableViewCell {

	UIView* _separatorViewForNonOpaqueTables;
	UILabel* _travelTextLabel;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UILabel* _attendeesLabel;
	UILabel* _travelDepartureTimeLabel;
	UILabel* _topTimeLabel;
	UILabel* _bottomTimeLabel;
	UILabel* _countdownLabel;
	ColorBarView* _colorBarView;
	ColorBarView* _travelTimeColorBarView;
	UIImageView* _angleStripeBackgroundView;
	UIImageView* _accessoryImageView;
	UIView* _fadingBackgroundView;
	NSLayoutConstraint* _contentTop_to_travelTextBaseline_Constraint;
	NSLayoutConstraint* _contentTop_to_primaryTextBaseline_Constraint;
	NSLayoutConstraint* _attendeesTextBaseline_to_contentBottom_Constraint;
	NSLayoutConstraint* _secondaryTextBaseline_to_attendeesTextBaseline_Constraint;
	NSLayoutConstraint* _attendeesTextBaseline_to_primaryTextBaseline_Constraint;
	NSLayoutConstraint* _contentBottom_to_secondaryTextBaseline_Constraint;
	NSLayoutConstraint* _primaryTextBaseline_to_secondaryTextBaseline_Constraint;
	NSLayoutConstraint* _travelTextBaseline_to_primaryTextBaseLine_Constraint;
	NSLayoutConstraint* _horizontalDividerBarBottom_to_colorBarTop_Constraint;
	NSLayoutConstraint* _contentTop_to_colorBarTop_Constraint;
	NSLayoutConstraint* _timeTextWidthConstraint;
	NSLayoutConstraint* _timeTextLeftMarginConstraint;
	NSLayoutConstraint* _timeTextRightMarginConstraint;
	NSLayoutConstraint* _countdownLabelRightMarginConstraint;
	NSLayoutConstraint* _countdownLabelBaseling_to_contentBottom_Constraint;
	NSLayoutConstraint* _accessoryImageViewToColorBarHorizontalConstraint;
	NSLayoutConstraint* _accessoryImageViewToPrimaryLabelVerticalConstraint;
	NSLayoutConstraint* _accessoryImageViewToPrimaryLabelHorizontalConstraint;
	NSLayoutConstraint* _colorBarViewToPrimaryLabelHorizontalConstraint;
	double _travelTime;
	UIColor* _eventCalendarColor;
	UIColor* _selectedBackGroundColor;
	NSDate* _eventStartDateIncludingTravelTime;
	EKCalendarDate* _eventStartDate;
	EKCalendarDate* _eventEndDate;
	NSAttributedString* _eventTitleAttrString;
	NSString* _eventTitle;
	NSString* _eventLocation;
	NSString* _topTimeString;
	NSString* _bottomTimeString;
	NSString* _countdownLabelString;
	NSString* _attendeesDescription;
	NSString* _travelTextLabelString;
	NSString* _travelAddressString;
	NSString* _travelDepartureTimeString;
	NSDictionary* _secondaryStringDrawingAttributes;
	NSDictionary* _topTimeStringDrawingAttributes;
	NSDictionary* _bottomTimeStringDrawingAttributes;
	NSDictionary* _travelTextLabelStringDrawingAttributes;
	NSDictionary* _travelAddressStringDrawingAttributes;
	NSDictionary* _travelDepartureTimeStringDrawingAttributes;
	BOOL _isPast;
	BOOL _isAllDay;
	BOOL _isRecurring;
	BOOL _isBirthday;
	BOOL _isFacebook;
	BOOL _tentative;
	BOOL _declined;
	BOOL _needsReply;
	BOOL _cancelled;
	BOOL _opaque;
	NSTimer* _countdownLabelUpdateTimer;
	BOOL _drawsOwnRowSeparators;
	BOOL _usesVibrantSeparatorOverlayDrawing;
	BOOL _usesInsetMargin;
	UIColor* _rowSeparatorColor;

}

@property (assign,nonatomic) BOOL drawsOwnRowSeparators;                           //@synthesize drawsOwnRowSeparators=_drawsOwnRowSeparators - In the implementation block
@property (nonatomic,retain) UIColor * rowSeparatorColor;                          //@synthesize rowSeparatorColor=_rowSeparatorColor - In the implementation block
@property (assign,nonatomic) BOOL usesVibrantSeparatorOverlayDrawing;              //@synthesize usesVibrantSeparatorOverlayDrawing=_usesVibrantSeparatorOverlayDrawing - In the implementation block
@property (assign,nonatomic) BOOL usesInsetMargin;                                 //@synthesize usesInsetMargin=_usesInsetMargin - In the implementation block
+(void)initialize;
+(BOOL)requiresConstraintBasedLayout;
+(id)reuseIdentifier;
+(void)clearFontCaches;
+(void)_clearCaches;
+(id)normalBackgroundColor;
+(id)scalablePrimaryTextLabelFont;
+(id)constrainedPrimaryTextLabelFont;
+(id)secondaryTextLabelFont;
+(id)_birthdayIcon;
+(id)_facebookIcon;
+(id)_needsReplyDot;
+(double)_rightImageSpacing;
+(id)needsReplyBackgroundColor;
+(id)needsReplyStripeColor;
+(id)tentativeBackgroundColor;
+(id)tentativeStripeColor;
+(id)normalSecondaryTextColor;
+(id)normalPrimaryTextColor;
+(id)timeLabelsFont;
+(id)normalTopTimeTextColor;
+(id)normalBottomTimeTextColor;
+(id)cancelledDeclinedColorBarColor;
+(id)_needsReplyAngledStripeBackground;
+(double)needsReplyStripeBackgroundAlpha;
+(id)_tentativeAngledStripeBackground;
+(double)tentativeStripeBackgroundAlpha;
+(id)prefixPrimaryTextColor;
+(id)strikethroughPrimaryTextColor;
+(id)invitationPrimaryTextColor;
+(id)strikethroughSecondaryTextColor;
+(id)strikethroughTimeTextColor;
+(double)cellHeightForWidth:(double)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIEdgeInsets)layoutMargins;
-(id)reuseIdentifier;
-(BOOL)isCancelled;
-(void)updateConstraints;
-(void)_updateAccessoryImage;
-(BOOL)isAllDay;
-(void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(BOOL)arg4 drawsDimmedForPast:(BOOL)arg5 ;
-(void)_updateContentForSizeCategoryChange:(id)arg1 ;
-(BOOL)isFacebook;
-(BOOL)isBirthday;
-(BOOL)isTentative;
-(BOOL)isDeclined;
-(BOOL)needsReply;
-(void)setDrawsOwnRowSeparators:(BOOL)arg1 ;
-(void)setUsesInsetMargin:(BOOL)arg1 ;
-(void)_createViews;
-(void)_setUpConstraints;
-(void)_countdownTimerKill;
-(void)forceUpdateOfAllElements;
-(void)_updatePrimaryTextLabel;
-(void)_updateSecondaryTextLabel;
-(void)_updateCountdownLabel;
-(void)_updateTopTimeLabel;
-(void)_updateBottomTimeLabel;
-(void)_updateAttendeesTextLabel;
-(void)_updateTravelTimeLabel;
-(void)_updateTravelDepartureTimeLabel;
-(void)_updateColorBarColor;
-(void)_updateAngleBackgroundColor;
-(void)_updateFadingBackgroundColor;
-(id)accessoryImage;
-(void)contentCategorySizeChanged;
-(BOOL)usesInsetMargin;
-(void)_setMarginExtendsToFullWidth:(BOOL)arg1 ;
-(UIColor *)rowSeparatorColor;
-(id)primaryTextLabelFont;
-(double)_verticalSpacingBottomToBaselineForBottomLabel;
-(double)_verticalSpacingTopToBaselineForTopLabel;
-(double)_verticalSpacingBetweenBaselinesForSecondaryFontLabels;
-(double)_verticalSpacingTopToBaselineForBottomLabel;
-(double)_widthForTimeViews;
-(double)_leftMarginForTimeViewsFromTimeWidth:(double)arg1 ;
-(double)_rightMarginForTimeViewsFromTimeWidth:(double)arg1 ;
-(void)_countdownTimerFired:(id)arg1 ;
-(id)_textForCountdownLabel;
-(BOOL)_eventIsNow;
-(void)_countdownTimerStart;
-(id)_textForTopTimeLabel;
-(id)_textForBottomTimeLabel;
-(id)_textForDepartureTimeLabel;
-(void)setUsesVibrantSeparatorOverlayDrawing:(BOOL)arg1 ;
-(void)setRowSeparatorColor:(UIColor *)arg1 ;
-(id)_selectedBackgroundViewWithColor:(id)arg1 ;
-(BOOL)isPast;
-(id)_sharedNumberFormatter;
-(BOOL)drawsOwnRowSeparators;
-(BOOL)usesVibrantSeparatorOverlayDrawing;
@end


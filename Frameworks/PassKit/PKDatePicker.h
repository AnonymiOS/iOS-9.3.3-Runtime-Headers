/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@protocol PKDatePickerDelegate;
@class NSDate;

@interface PKDatePicker : UIView {

	UIView* _internalPicker;
	BOOL _showsDay;
	BOOL _showsMonth;
	BOOL _showsYear;
	BOOL _usesDarkAppearance;
	NSDate* _date;
	id<PKDatePickerDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL showsDay;                                //@synthesize showsDay=_showsDay - In the implementation block
@property (nonatomic,readonly) BOOL showsMonth;                              //@synthesize showsMonth=_showsMonth - In the implementation block
@property (nonatomic,readonly) BOOL showsYear;                               //@synthesize showsYear=_showsYear - In the implementation block
@property (nonatomic,retain) NSDate * date;                                  //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) id<PKDatePickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL usesDarkAppearance;                        //@synthesize usesDarkAppearance=_usesDarkAppearance - In the implementation block
-(void)pk_applyAppearance:(PKAppearanceSpecifier*)arg1 ;
-(id)pk_childrenForAppearance;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<PKDatePickerDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<PKDatePickerDelegate>)delegate;
-(NSDate *)date;
-(CGSize)intrinsicContentSize;
-(void)setDate:(NSDate *)arg1 ;
-(void)setUsesDarkAppearance:(BOOL)arg1 ;
-(BOOL)showsDay;
-(BOOL)showsMonth;
-(BOOL)showsYear;
-(void)reconfigureToShowDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 ;
-(Class)_classForDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 ;
-(void)_dateValueChanged:(UIView*)arg1 ;
-(void)_forceReloadInternalPicker;
-(BOOL)usesDarkAppearance;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:08 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@protocol MTDateLabelObserver;
@class NSTimeZone, NSDate, UILabel, UIColor, UIFont, NSArray, NSString;

@interface MTDateLabel : UIView {

	NSTimeZone* _timeZone;
	BOOL _hideTimeDesignator;
	BOOL _shouldAddLayoutConstraints;
	NSDate* _date;
	UILabel* _dateLabel;
	UIColor* _textColor;
	UIFont* _font;
	UIFont* _timeDesignatorFont;
	double _paddingFromTimeToDesignator;
	id<MTDateLabelObserver> _observer;
	NSArray* _currentConstraints;
	NSString* _timeDesignatorString;

}

@property (nonatomic,copy) NSDate * date;                                          //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (nonatomic,readonly) UILabel * dateLabel;                                //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                  //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIFont * font;                                        //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIFont * timeDesignatorFont;                          //@synthesize timeDesignatorFont=_timeDesignatorFont - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeDesignator; 
@property (assign,nonatomic) BOOL hideTimeDesignator;                              //@synthesize hideTimeDesignator=_hideTimeDesignator - In the implementation block
@property (assign,nonatomic) double paddingFromTimeToDesignator;                   //@synthesize paddingFromTimeToDesignator=_paddingFromTimeToDesignator - In the implementation block
@property (assign,nonatomic,__weak) id<MTDateLabelObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) BOOL shouldAddLayoutConstraints;                      //@synthesize shouldAddLayoutConstraints=_shouldAddLayoutConstraints - In the implementation block
@property (nonatomic,retain) NSArray * currentConstraints;                         //@synthesize currentConstraints=_currentConstraints - In the implementation block
@property (nonatomic,copy) NSString * timeDesignatorString;                        //@synthesize timeDesignatorString=_timeDesignatorString - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)viewForBaselineLayout;
-(UIFont *)font;
-(UIColor *)textColor;
-(void)updateConstraints;
-(id<MTDateLabelObserver>)observer;
-(void)setObserver:(id<MTDateLabelObserver>)arg1 ;
-(UIFont *)timeDesignatorFont;
-(void)setDate:(NSDate *)arg1 ;
-(double)paddingFromTimeToDesignator;
-(void)setPaddingFromTimeToDesignator:(double)arg1 ;
-(NSTimeZone *)timeZone;
-(UILabel *)dateLabel;
-(void)setCurrentConstraints:(NSArray *)arg1 ;
-(NSArray *)currentConstraints;
-(void)setTimeDesignatorFont:(UIFont *)arg1 ;
-(void)setShouldAddLayoutConstraints:(BOOL)arg1 ;
-(BOOL)shouldAddLayoutConstraints;
-(void)setHideTimeDesignator:(BOOL)arg1 ;
-(void)_updateDateString;
-(NSString *)timeDesignatorString;
-(void)setTimeDesignatorString:(NSString *)arg1 ;
-(void)_noteLayoutChange;
-(BOOL)hasTimeDesignator;
-(BOOL)hideTimeDesignator;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BatteryCenter.framework/BatteryCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BatteryCenter/BatteryCenter-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface BCBatteryView : UIView {

	UIImageView* _shellImageView;
	UIImageView* _highCapacityFillImageView;
	UIImageView* _lowCapacityFillImageView;
	BOOL _lowBattery;
	unsigned long long _percentCharge;

}

@property (assign,nonatomic) unsigned long long percentCharge;                 //@synthesize percentCharge=_percentCharge - In the implementation block
@property (assign,getter=isLowBattery,nonatomic) BOOL lowBattery;              //@synthesize lowBattery=_lowBattery - In the implementation block
+(id)chargeGlyph;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)percentCharge;
-(void)setPercentCharge:(unsigned long long)arg1 ;
-(void)setLowBattery:(BOOL)arg1 ;
-(BOOL)isLowBattery;
-(id)_batteryColorForLowCapacity:(BOOL)arg1 ;
-(void)_setPercentCharge:(unsigned long long)arg1 force:(BOOL)arg2 ;
-(UIEdgeInsets)_edgeInsetsForBatteryInsidesForScale:(double)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKit/UIView.h>

@protocol MPUStackViewDataSource;
@class NSMutableArray, UIWindow, NSString, UIView, NSArray;

@interface MPUStackView : UIView {

	SCD_Struct_MP13 _configuration;
	long long _distanceIgnoreCount;
	NSMutableArray* _items;
	UIWindow* _window;
	id<MPUStackViewDataSource> _dataSource;
	Class _itemClass;
	NSString* _itemReuseIdentifier;
	long long _numberOfItems;
	UIView* _perspectiveTargetView;

}

@property (assign,nonatomic) CGSize baseSize; 
@property (assign,nonatomic,__weak) id<MPUStackViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL forcesIntegralX; 
@property (assign,nonatomic) BOOL forcesIntegralY; 
@property (nonatomic,readonly) Class itemClass;                                         //@synthesize itemClass=_itemClass - In the implementation block
@property (nonatomic,readonly) NSString * itemReuseIdentifier;                          //@synthesize itemReuseIdentifier=_itemReuseIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                         //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) UIOffset maximumRelativeOffsetStep; 
@property (nonatomic,readonly) long long numberOfItems;                                 //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (assign,nonatomic,__weak) UIView * perspectiveTargetView;                     //@synthesize perspectiveTargetView=_perspectiveTargetView - In the implementation block
@property (assign,nonatomic) CGSize sizeInsetStep; 
@property (assign,nonatomic) CGPoint vanishingPoint; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataSource:(id<MPUStackViewDataSource>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)reloadData;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MPUStackViewDataSource>)dataSource;
-(void)setCenter:(CGPoint)arg1 ;
-(void)didMoveToSuperview;
-(NSArray *)items;
-(long long)numberOfItems;
-(id)itemAtIndex:(long long)arg1 ;
-(void)setPerspectiveTargetView:(UIView *)arg1 ;
-(void)setVanishingPoint:(CGPoint)arg1 ;
-(void)updateForChangedDistanceFromVanishingPoint;
-(id)initWithFrame:(CGRect)arg1 itemClass:(Class)arg2 itemReuseIdentifier:(id)arg3 ;
-(void)setForcesIntegralY:(BOOL)arg1 ;
-(UIView *)perspectiveTargetView;
-(void)setBaseSize:(CGSize)arg1 ;
-(void)setMaximumRelativeOffsetStep:(UIOffset)arg1 ;
-(void)setSizeInsetStep:(CGSize)arg1 ;
-(CGPoint)vanishingPoint;
-(void)_updateGeometryFieldsInConfiguration;
-(void)reloadDataWithTransition:(long long)arg1 ;
-(id)_dequeueReusableItem;
-(CGSize)baseSize;
-(BOOL)forcesIntegralX;
-(BOOL)forcesIntegralY;
-(UIOffset)maximumRelativeOffsetStep;
-(void)setForcesIntegralX:(BOOL)arg1 ;
-(CGSize)sizeInsetStep;
-(void)beginIgnoringDistanceUpdates;
-(void)endIgnoringDistanceUpdates;
-(UIOffset)relativeOffsetOfItemAtIndex:(double)arg1 withCenter:(CGPoint)arg2 ;
-(CGSize)sizeOfItemAtIndex:(double)arg1 ;
-(NSString *)itemReuseIdentifier;
-(Class)itemClass;
@end


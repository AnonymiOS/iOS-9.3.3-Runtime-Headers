/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSMutableArray, UICollectionViewFlowLayout, NSArray;

@interface _UIFlowLayoutInfo : NSObject {

	BOOL _useFloatingHeaderFooter;
	CGRect _visibleBounds;
	CGSize _layoutSize;
	BOOL _isValid;
	BOOL _usesFloatingHeaderFooter;
	BOOL _horizontal;
	BOOL _leftToRight;
	BOOL _estimatesSizes;
	NSMutableArray* _sections;
	double _dimension;
	UICollectionViewFlowLayout* _layout;
	SCD_Struct_UI88 _rowAlignmentOptions;
	CGSize _contentSize;

}

@property (nonatomic,readonly) NSMutableArray * sections;                             //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) BOOL usesFloatingHeaderFooter;                           //@synthesize usesFloatingHeaderFooter=_usesFloatingHeaderFooter - In the implementation block
@property (assign,nonatomic) double dimension;                                        //@synthesize dimension=_dimension - In the implementation block
@property (assign,nonatomic) BOOL horizontal;                                         //@synthesize horizontal=_horizontal - In the implementation block
@property (assign,nonatomic) BOOL leftToRight;                                        //@synthesize leftToRight=_leftToRight - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                      //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI88 rowAlignmentOptions;                     //@synthesize rowAlignmentOptions=_rowAlignmentOptions - In the implementation block
@property (assign,nonatomic,__weak) UICollectionViewFlowLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) BOOL estimatesSizes;                                     //@synthesize estimatesSizes=_estimatesSizes - In the implementation block
@property (nonatomic,readonly) NSArray * invalidatedIndexPaths; 
-(id)init;
-(id)copy;
-(CGSize)contentSize;
-(id)snapshot;
-(void)setContentSize:(CGSize)arg1 ;
-(UICollectionViewFlowLayout *)layout;
-(void)setLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)setHorizontal:(BOOL)arg1 ;
-(NSMutableArray *)sections;
-(void)invalidate:(BOOL)arg1 ;
-(BOOL)horizontal;
-(SCD_Struct_UI88)rowAlignmentOptions;
-(void)setSize:(CGSize)arg1 forItemAtIndexPath:(id)arg2 ;
-(NSArray *)invalidatedIndexPaths;
-(double)dimension;
-(void)setLeftToRight:(BOOL)arg1 ;
-(id)addSection;
-(void)setRowAlignmentOptions:(SCD_Struct_UI88)arg1 ;
-(void)setDimension:(double)arg1 ;
-(CGRect)frameForItemAtIndexPath:(id)arg1 ;
-(void)didUpdateSizeForSection:(long long)arg1 withDelta:(double)arg2 ;
-(BOOL)leftToRight;
-(BOOL)usesFloatingHeaderFooter;
-(void)setUsesFloatingHeaderFooter:(BOOL)arg1 ;
-(BOOL)estimatesSizes;
-(void)setEstimatesSizes:(BOOL)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface CertInfoDescriptionCellContentView : UIView {

	NSArray* _labelsAndValues;
	double _idealHeight;
	int _sizesCount;
	CGSize* _sizes;

}
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(double)rowHeight;
-(id)_labelFont;
-(void)setLabelsAndValues:(id)arg1 ;
-(void)_recalculateIdealHeight;
-(id)_valueFont;
@end


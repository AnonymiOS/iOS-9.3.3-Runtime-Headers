/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:46 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, NSString;

@interface UIKBSplitImageView : UIView {

	UIImageView* _fullView;
	UIImageView* _splitLeft;
	UIImageView* _splitRight;
	NSString* _currentFilterType;

}

@property (assign,nonatomic) NSString * filterType;              //@synthesize currentFilterType=_currentFilterType - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setAlpha:(double)arg1 ;
-(BOOL)_shouldInheritScreenScaleAsContentScaleFactor;
-(NSString *)filterType;
-(void)setFilterType:(NSString *)arg1 ;
-(void)prepareForDisplay:(BOOL)arg1 ;
-(void)setImage:(id)arg1 splitLeft:(id)arg2 splitRight:(id)arg3 keyplane:(id)arg4 ;
-(void)insertSubviewAtBottom:(id)arg1 ;
-(void)setImage:(id)arg1 cachedWidth:(double)arg2 keyplane:(id)arg3 ;
-(void)clearImages;
@end


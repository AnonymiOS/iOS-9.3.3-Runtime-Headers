/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:24 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class UIColor, NSAttributedString, UIImage;

@interface SKUIIndexBarEntry : NSObject {

	CGSize _contentSize;
	BOOL _hasValidContentSize;
	UIColor* _tintColor;
	long long _entryType;
	long long _visibilityPriority;
	UIEdgeInsets _contentEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                            //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (nonatomic,readonly) NSAttributedString * entryAttributedString; 
@property (nonatomic,readonly) UIImage * entryImage; 
@property (assign,nonatomic) long long entryType;                                       //@synthesize entryType=_entryType - In the implementation block
@property (assign,nonatomic) long long visibilityPriority;                              //@synthesize visibilityPriority=_visibilityPriority - In the implementation block
@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,copy) UIColor * tintColor; 
+(id)entryWithAttributedString:(id)arg1 ;
+(id)entryWithImage:(id)arg1 ;
+(id)placeholderEntryWithSize:(CGSize)arg1 ;
+(id)systemCombinedEntry;
-(CGSize)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGSize)contentSize;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
-(long long)visibilityPriority;
-(void)setVisibilityPriority:(long long)arg1 ;
-(CGSize)_calculatedContentSize;
-(void)_tintColorDidChange;
-(void)_drawContentInRect:(CGRect)arg1 ;
-(NSAttributedString *)entryAttributedString;
-(UIImage *)entryImage;
-(void)_drawInRect:(CGRect)arg1 ;
-(void)setEntryType:(long long)arg1 ;
-(long long)entryType;
@end


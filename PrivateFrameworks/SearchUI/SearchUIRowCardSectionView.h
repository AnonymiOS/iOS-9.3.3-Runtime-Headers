/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:12 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUICardSectionView.h>

@class UIImage;

@interface SearchUIRowCardSectionView : SearchUICardSectionView {

	UIImage* _leftImage;

}

@property (nonatomic,retain) UIImage * leftImage;                               //@synthesize leftImage=_leftImage - In the implementation block
@property (nonatomic,readonly) id<SearchUIRowCardSection> section; 
-(void)setLeftImage:(UIImage *)arg1 ;
-(UIImage *)leftImage;
-(id)initWithCardSection:(id)arg1 controller:(id)arg2 ;
-(double)separatorLeftInset;
-(id)addContainerWithImage:(id)arg1 text:(id)arg2 formatter:(id)arg3 left:(BOOL)arg4 ;
@end

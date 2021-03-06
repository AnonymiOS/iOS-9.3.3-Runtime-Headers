/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:19 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSArray, IKDocumentBannerElement, IKCarouselElement, IKBackgroundElement;

@interface IKShowcaseTemplate : IKViewElement

@property (nonatomic,retain,readonly) NSArray * modes; 
@property (nonatomic,retain,readonly) IKDocumentBannerElement * documentBanner; 
@property (nonatomic,retain,readonly) IKCarouselElement * carousel; 
@property (nonatomic,retain,readonly) IKBackgroundElement * background; 
@property (nonatomic,readonly) unsigned long long transition; 
-(unsigned long long)transition;
-(IKBackgroundElement *)background;
-(IKCarouselElement *)carousel;
-(NSArray *)modes;
-(IKDocumentBannerElement *)documentBanner;
@end


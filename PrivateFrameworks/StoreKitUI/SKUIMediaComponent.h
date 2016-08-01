/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:28 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPageComponent.h>
#import <libobjc.A.dylib/SSMetricsEventFieldProvider.h>

@class NSString, SKUILink, SKUIArtworkList;

@interface SKUIMediaComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {

	NSString* _accessibilityLabel;
	long long _alignment;
	double _duration;
	SKUILink* _link;
	long long _mediaAppearance;
	long long _mediaIdentifier;
	long long _mediaType;
	NSString* _mediaURLString;
	SKUIArtworkList* _thumbnailArtworkList;
	NSString* _title;
	float _titleFontSize;
	long long _titleFontWeight;

}

@property (nonatomic,readonly) NSString * accessibilityLabel;                       //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,readonly) long long alignment;                                 //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) SKUILink * link;                                     //@synthesize link=_link - In the implementation block
@property (nonatomic,readonly) long long mediaIdentifier;                           //@synthesize mediaIdentifier=_mediaIdentifier - In the implementation block
@property (nonatomic,readonly) long long mediaAppearance;                           //@synthesize mediaAppearance=_mediaAppearance - In the implementation block
@property (nonatomic,readonly) long long mediaType;                                 //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) NSString * mediaURLString;                           //@synthesize mediaURLString=_mediaURLString - In the implementation block
@property (nonatomic,readonly) SKUIArtworkList * thumbnailArtworkList;              //@synthesize thumbnailArtworkList=_thumbnailArtworkList - In the implementation block
@property (nonatomic,readonly) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) float titleFontSize;                                 //@synthesize titleFontSize=_titleFontSize - In the implementation block
@property (nonatomic,readonly) long long titleFontWeight;                           //@synthesize titleFontWeight=_titleFontWeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)duration;
-(NSString *)title;
-(NSString *)accessibilityLabel;
-(long long)alignment;
-(SKUILink *)link;
-(long long)componentType;
-(id)initWithCustomPageContext:(id)arg1 ;
-(id)valueForMetricsField:(id)arg1 ;
-(id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2 ;
-(id)metricsElementName;
-(long long)mediaIdentifier;
-(NSString *)mediaURLString;
-(id)initWithArtworkList:(id)arg1 appearance:(long long)arg2 ;
-(id)bestThumbnailForWidth:(double)arg1 ;
-(long long)mediaAppearance;
-(id)bestThumbnailArtwork;
-(SKUIArtworkList *)thumbnailArtworkList;
-(id)initWithArtwork:(id)arg1 ;
-(id)initWithArtworkList:(id)arg1 ;
-(float)titleFontSize;
-(long long)titleFontWeight;
-(long long)mediaType;
@end


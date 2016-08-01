/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SearchUIResult.h>

@protocol SearchUIActionButtonItem, SearchUIAuxiliaryInfo;
@class UIImage, NSString, NSArray, NSURL, CLLocation;

@interface MKSearchUIResult : NSObject <SearchUIResult> {

	int resultType;
	CLLocation* _referenceLocation;
	id _attributionObserver;
	/*^block*/id _requestUIUpdateBlock;
	BOOL _centered;
	UIImage* _image;
	NSString* _title;
	unsigned long long _titleMaxLines;
	NSString* _secondaryTitle;
	NSArray* _richTextItems;
	NSString* _footnote;
	id<SearchUIActionButtonItem> _actionButton;
	id<SearchUIAuxiliaryInfo> _auxiliaryInfo;
	NSArray* _cardSections;
	NSArray* _rowSections;
	NSURL* _destinationURL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIImage * image;                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long titleMaxLines;                       //@synthesize titleMaxLines=_titleMaxLines - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondaryTitle;                         //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (nonatomic,readonly) NSArray * richTextItems;                                //@synthesize richTextItems=_richTextItems - In the implementation block
@property (nonatomic,copy,readonly) NSString * footnote;                               //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,readonly) id<SearchUIActionButtonItem> actionButton;              //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,readonly) id<SearchUIAuxiliaryInfo> auxiliaryInfo;                //@synthesize auxiliaryInfo=_auxiliaryInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * cardSections;                            //@synthesize cardSections=_cardSections - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rowSections;                             //@synthesize rowSections=_rowSections - In the implementation block
@property (nonatomic,copy,readonly) NSURL * destinationURL;                            //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,readonly) BOOL centered;                                          //@synthesize centered=_centered - In the implementation block
@property (nonatomic,readonly) BOOL requiresTwoLineTitles; 
@property (nonatomic,readonly) BOOL secondaryTitleDetached; 
@property (nonatomic,readonly) BOOL shouldCropImageToCircle; 
@property (nonatomic,readonly) double imageCornerRadius; 
@property (nonatomic,readonly) UIImage * secondaryImage; 
@property (nonatomic,copy,readonly) NSURL * cardURL; 
-(void)dealloc;
-(NSString *)title;
-(UIImage *)image;
-(NSURL *)destinationURL;
-(id)imageFromMapItem:(id)arg1 iconSize:(unsigned long long)arg2 ;
-(id)initWithMapItem:(id)arg1 iconSize:(unsigned long long)arg2 currentLocation:(id)arg3 ;
-(void)didDisplayResultWithRefreshHandler:(/*^block*/id)arg1 ;
-(id)_defaultRichTextItems:(id)arg1 currentLocation:(id)arg2 ;
-(NSString *)footnote;
-(int)_resultsTypeFromMapItem:(id)arg1 ;
-(id)initWithMapsIndexableFavoriteSpotlightRepresentation:(id)arg1 iconSize:(unsigned long long)arg2 currentLocation:(id)arg3 ;
-(NSArray *)richTextItems;
-(NSString *)secondaryTitle;
-(unsigned long long)titleMaxLines;
-(id)_defaultSecondaryText:(id)arg1 ;
-(NSArray *)rowSections;
-(NSArray *)cardSections;
-(id<SearchUIAuxiliaryInfo>)auxiliaryInfo;
-(id)_defaultSearchUIActionButtonItem:(id)arg1 currentLocation:(id)arg2 ;
-(id<SearchUIActionButtonItem>)actionButton;
-(id)_defaultPrimaryText:(id)arg1 ;
-(BOOL)centered;
@end


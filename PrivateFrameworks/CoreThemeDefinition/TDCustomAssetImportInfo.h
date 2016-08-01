/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:39 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TDCustomAssetSource;
#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@class CUIRenditionKey, NSString, NSObject, NSDate;

@interface TDCustomAssetImportInfo : NSObject {

	CUIRenditionKey* _renditionKey;
	NSString* _elementName;
	NSString* _partName;
	NSObject*<TDCustomAssetSource> _customAsset;
	NSDate* _modificationDate;
	long long _renditionType;
	long long _resizingMode;
	long long _templateRenderingMode;
	NSString* _name;
	CGSize _resizableSliceSize;
	SCD_Struct_TD11 _sliceInsets;
	CGRect _alignmentRect;

}

@property (nonatomic,copy) CUIRenditionKey * renditionKey;                  //@synthesize renditionKey=_renditionKey - In the implementation block
@property (nonatomic,copy) NSString * elementName;                          //@synthesize elementName=_elementName - In the implementation block
@property (nonatomic,copy) NSString * partName;                             //@synthesize partName=_partName - In the implementation block
@property (retain) NSObject*<TDCustomAssetSource> customAsset;              //@synthesize customAsset=_customAsset - In the implementation block
@property (nonatomic,copy) NSDate * modificationDate;                       //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) SCD_Struct_TD11 sliceInsets;                   //@synthesize sliceInsets=_sliceInsets - In the implementation block
@property (assign,nonatomic) long long renditionType;                       //@synthesize renditionType=_renditionType - In the implementation block
@property (assign,nonatomic) long long resizingMode;                        //@synthesize resizingMode=_resizingMode - In the implementation block
@property (assign,nonatomic) CGSize resizableSliceSize;                     //@synthesize resizableSliceSize=_resizableSliceSize - In the implementation block
@property (assign,nonatomic) BOOL isTemplate; 
@property (assign,nonatomic) long long templateRenderingMode;               //@synthesize templateRenderingMode=_templateRenderingMode - In the implementation block
@property (assign,nonatomic) CGRect alignmentRect;                          //@synthesize alignmentRect=_alignmentRect - In the implementation block
@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
-(CUIRenditionKey *)renditionKey;
-(long long)renditionType;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(long long)resizingMode;
-(long long)templateRenderingMode;
-(NSDate *)modificationDate;
-(BOOL)isTemplate;
-(void)setIsTemplate:(BOOL)arg1 ;
-(void)setTemplateRenderingMode:(long long)arg1 ;
-(void)setResizingMode:(long long)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSString *)partName;
-(void)setPartName:(NSString *)arg1 ;
-(NSString *)elementName;
-(CGRect)alignmentRect;
-(void)setAlignmentRect:(CGRect)arg1 ;
-(void)setRenditionType:(long long)arg1 ;
-(long long)renditionSubtype;
-(SCD_Struct_TD11)sliceInsets;
-(CGSize)resizableSliceSize;
-(NSObject*<TDCustomAssetSource>)customAsset;
-(void)setSliceInsets:(SCD_Struct_TD11)arg1 ;
-(void)setResizableSliceSize:(CGSize)arg1 ;
-(void)setRenditionKey:(CUIRenditionKey *)arg1 ;
-(void)setElementName:(NSString *)arg1 ;
-(void)setCustomAsset:(NSObject*<TDCustomAssetSource>)arg1 ;
@end


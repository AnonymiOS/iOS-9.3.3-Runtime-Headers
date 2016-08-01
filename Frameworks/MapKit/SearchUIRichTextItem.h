/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol SearchUIRichTextItem <NSObject>
@property (nonatomic,copy,readonly) NSString * text; 
@property (nonatomic,copy,readonly) NSArray * formattedTextItems; 
@property (nonatomic,copy,readonly) NSString * formattedTextDelimiter; 
@property (nonatomic,readonly) unsigned long long textMaxLines; 
@property (nonatomic,readonly) double starRating; 
@property (nonatomic,readonly) NSArray * icons; 
@property (nonatomic,copy,readonly) NSString * contentAdvisory; 
@optional
-(NSString *)text;
-(NSArray *)icons;
-(double)starRating;
-(unsigned long long)textMaxLines;
-(NSString *)formattedTextDelimiter;
-(NSArray *)formattedTextItems;
-(NSString *)contentAdvisory;

@end


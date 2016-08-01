/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:25 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUILayoutRequest.h>

@class NSAttributedString, NSString;

@interface SKUITextLayoutRequest : NSObject <SKUILayoutRequest> {

	NSAttributedString* _attributedText;
	double _fontSize;
	long long _fontWeight;
	long long _numberOfLines;
	NSString* _text;
	unsigned char _textAlignment;
	double _width;

}

@property (assign,nonatomic) double fontSize;                                //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) long long fontWeight;                           //@synthesize fontWeight=_fontWeight - In the implementation block
@property (assign,nonatomic) unsigned char textAlignment;                    //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) long long numberOfLines;                        //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) double width;                                   //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) Class layoutClass; 
-(id)init;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setTextAlignment:(unsigned char)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSAttributedString *)attributedText;
-(double)width;
-(unsigned char)textAlignment;
-(long long)numberOfLines;
-(void)setFontSize:(double)arg1 ;
-(void)setWidth:(double)arg1 ;
-(void)setFontWeight:(long long)arg1 ;
-(double)fontSize;
-(long long)fontWeight;
-(Class)layoutClass;
@end


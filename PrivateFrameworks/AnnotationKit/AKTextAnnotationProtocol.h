/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:04 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSTextStorage, NSDictionary;


@protocol AKTextAnnotationProtocol <NSObject>
@property (retain) NSTextStorage * annotationText; 
@property (copy) NSDictionary * typingAttributes; 
@property (assign) BOOL isEditingText; 
@property (assign) BOOL textIsFixedWidth; 
@property (assign) BOOL textIsFixedHeight; 
@property (assign) BOOL textIsClipped; 
@property (assign) BOOL shouldUsePlaceholderText; 
@required
-(void)setTypingAttributes:(id)arg1;
-(NSDictionary *)typingAttributes;
-(NSTextStorage *)annotationText;
-(void)setAnnotationText:(id)arg1;
-(BOOL)textIsFixedHeight;
-(BOOL)textIsFixedWidth;
-(BOOL)isEditingText;
-(void)setIsEditingText:(BOOL)arg1;
-(void)setTextIsFixedWidth:(BOOL)arg1;
-(void)setTextIsFixedHeight:(BOOL)arg1;
-(BOOL)textIsClipped;
-(void)setTextIsClipped:(BOOL)arg1;
-(BOOL)shouldUsePlaceholderText;
-(void)setShouldUsePlaceholderText:(BOOL)arg1;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:35 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class NSString, DOMDocument, DOMAbstractView;

@interface DOMHTMLFrameElement : DOMHTMLElement

@property (copy) NSString * frameBorder; 
@property (copy) NSString * longDesc; 
@property (copy) NSString * marginHeight; 
@property (copy) NSString * marginWidth; 
@property (copy) NSString * name; 
@property (assign) BOOL noResize; 
@property (copy) NSString * scrolling; 
@property (copy) NSString * src; 
@property (readonly) DOMDocument * contentDocument; 
@property (readonly) DOMAbstractView * contentWindow; 
@property (copy) NSString * location; 
@property (readonly) int width; 
@property (readonly) int height; 
-(int)structuralComplexityContribution;
-(NSString *)frameBorder;
-(void)setFrameBorder:(NSString *)arg1 ;
-(NSString *)longDesc;
-(void)setLongDesc:(NSString *)arg1 ;
-(NSString *)marginHeight;
-(void)setMarginHeight:(NSString *)arg1 ;
-(void)setMarginWidth:(NSString *)arg1 ;
-(BOOL)noResize;
-(void)setNoResize:(BOOL)arg1 ;
-(NSString *)scrolling;
-(void)setScrolling:(NSString *)arg1 ;
-(DOMAbstractView *)contentWindow;
-(DOMDocument *)contentDocument;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(int)width;
-(int)height;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(NSString *)src;
-(void)setSrc:(NSString *)arg1 ;
-(NSString *)marginWidth;
@end


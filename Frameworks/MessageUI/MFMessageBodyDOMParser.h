/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:07 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MFMessageBodyParser.h>

@class DOMDocument;

@interface MFMessageBodyDOMParser : MFMessageBodyParser {

	DOMDocument* _document;

}
+(BOOL)documentContainsAnyQuotation:(id)arg1 ;
-(void)dealloc;
-(id)initWithDOMDocument:(id)arg1 ;
-(id)rangeForElement:(id)arg1 ;
-(Class)messageBodyElementClass;
-(void)_consumeAccumulatedNodes:(id)arg1 ;
-(void)extendRange:(id)arg1 toElement:(id)arg2 ;
-(id)rangeFromElement:(id)arg1 toElement:(id)arg2 ;
-(BOOL)parse;
@end


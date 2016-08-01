/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class DOMNode;

@interface DOMTreeWalker : DOMObject

@property (readonly) DOMNode * root; 
@property (readonly) unsigned whatToShow; 
@property (readonly) id<DOMNodeFilter> filter; 
@property (readonly) BOOL expandEntityReferences; 
@property (retain) DOMNode * currentNode; 
-(unsigned)whatToShow;
-(BOOL)expandEntityReferences;
-(id)previousNode;
-(void)setCurrentNode:(DOMNode *)arg1 ;
-(DOMNode *)currentNode;
-(void)dealloc;
-(id)lastChild;
-(id)firstChild;
-(id)parentNode;
-(id)previousSibling;
-(id)nextSibling;
-(id)nextNode;
-(id<DOMNodeFilter>)filter;
-(DOMNode *)root;
-(void)finalize;
@end


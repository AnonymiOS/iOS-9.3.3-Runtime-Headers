/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:17 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolDOMNode : RWIProtocolJSONObject

@property (assign,nonatomic) int nodeId; 
@property (assign,nonatomic) int nodeType; 
@property (nonatomic,copy) NSString * nodeName; 
@property (nonatomic,copy) NSString * localName; 
@property (nonatomic,copy) NSString * nodeValue; 
@property (assign,nonatomic) int childNodeCount; 
@property (nonatomic,copy) NSArray * children; 
@property (nonatomic,copy) NSArray * attributes; 
@property (nonatomic,copy) NSString * documentURL; 
@property (nonatomic,copy) NSString * baseURL; 
@property (nonatomic,copy) NSString * publicId; 
@property (nonatomic,copy) NSString * systemId; 
@property (nonatomic,copy) NSString * internalSubset; 
@property (nonatomic,copy) NSString * xmlVersion; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * value; 
@property (assign,nonatomic) long long pseudoType; 
@property (nonatomic,copy) NSString * frameId; 
@property (nonatomic,retain) RWIProtocolDOMNode * contentDocument; 
@property (nonatomic,copy) NSArray * shadowRoots; 
@property (nonatomic,retain) RWIProtocolDOMNode * templateContent; 
@property (nonatomic,copy) NSArray * pseudoElements; 
@property (nonatomic,copy) NSString * role; 
-(NSString *)nodeValue;
-(NSString *)xmlVersion;
-(void)setXmlVersion:(NSString *)arg1 ;
-(NSString *)publicId;
-(NSString *)systemId;
-(NSString *)internalSubset;
-(void)setNodeValue:(NSString *)arg1 ;
-(RWIProtocolDOMNode *)contentDocument;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)baseURL;
-(int)nodeType;
-(NSArray *)attributes;
-(void)setAttributes:(NSArray *)arg1 ;
-(void)setDocumentURL:(NSString *)arg1 ;
-(NSString *)documentURL;
-(void)setBaseURL:(NSString *)arg1 ;
-(NSString *)localName;
-(void)setChildren:(NSArray *)arg1 ;
-(void)setRole:(NSString *)arg1 ;
-(NSString *)role;
-(void)setFrameId:(NSString *)arg1 ;
-(NSString *)frameId;
-(void)setNodeId:(int)arg1 ;
-(int)nodeId;
-(void)setNodeName:(NSString *)arg1 ;
-(void)setLocalName:(NSString *)arg1 ;
-(int)childNodeCount;
-(void)setPublicId:(NSString *)arg1 ;
-(void)setSystemId:(NSString *)arg1 ;
-(void)setInternalSubset:(NSString *)arg1 ;
-(void)setPseudoType:(long long)arg1 ;
-(long long)pseudoType;
-(void)setContentDocument:(RWIProtocolDOMNode *)arg1 ;
-(void)setShadowRoots:(NSArray *)arg1 ;
-(NSArray *)shadowRoots;
-(void)setTemplateContent:(RWIProtocolDOMNode *)arg1 ;
-(RWIProtocolDOMNode *)templateContent;
-(void)setPseudoElements:(NSArray *)arg1 ;
-(NSArray *)pseudoElements;
-(id)initWithNodeId:(int)arg1 nodeType:(int)arg2 nodeName:(id)arg3 localName:(id)arg4 nodeValue:(id)arg5 ;
-(void)setChildNodeCount:(int)arg1 ;
-(NSString *)nodeName;
-(NSArray *)children;
-(void)setNodeType:(int)arg1 ;
@end


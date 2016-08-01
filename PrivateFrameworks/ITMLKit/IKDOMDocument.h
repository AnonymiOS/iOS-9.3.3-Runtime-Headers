/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:18 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKDOMNode.h>
#import <libobjc.A.dylib/IKJSDOMDocument.h>
#import <libobjc.A.dylib/JSExport.h>
#import <libobjc.A.dylib/IKJSDOMXPathEvaluator.h>

@protocol IKJSDOMDocumentAppBridge;
@class IKDOMImplementation, IKDOMElement, NSString, IKJSNavigationDocument;

@interface IKDOMDocument : IKDOMNode <IKJSDOMDocument, JSExport, IKJSDOMXPathEvaluator> {

	id<IKJSDOMDocumentAppBridge> _appBridge;
	unsigned long long _itmlIDSequence;

}

@property (assign,nonatomic,__weak) id<IKJSDOMDocumentAppBridge> appBridge;                   //@synthesize appBridge=_appBridge - In the implementation block
@property (assign,nonatomic,__weak) IKJSNavigationDocument * navigationDocument; 
@property (assign,nonatomic) unsigned long long itmlIDSequence;                               //@synthesize itmlIDSequence=_itmlIDSequence - In the implementation block
@property (nonatomic,__weak,readonly) IKDOMImplementation * implementation; 
@property (nonatomic,retain,readonly) IKDOMElement * documentElement; 
@property (nonatomic,retain,readonly) NSString * inputEncoding; 
@property (nonatomic,retain,readonly) NSString * xmlEncoding; 
@property (assign,nonatomic) BOOL xmlStandalone; 
@property (nonatomic,retain) NSString * xmlVersion; 
@property (assign,nonatomic) BOOL strictErrorChecking; 
@property (nonatomic,retain) NSString * documentURI; 
+(xmlDoc*)_documentWithXMLStr:(id)arg1 lsInput:(id)arg2 error:(id*)arg3 ;
-(IKDOMImplementation *)implementation;
-(NSString *)inputEncoding;
-(NSString *)xmlEncoding;
-(NSString *)xmlVersion;
-(void)setXmlVersion:(NSString *)arg1 ;
-(BOOL)xmlStandalone;
-(void)setXmlStandalone:(BOOL)arg1 ;
-(NSString *)documentURI;
-(void)setDocumentURI:(NSString *)arg1 ;
-(id)createComment:(id)arg1 ;
-(id)createCDATASection:(id)arg1 ;
-(id)adoptNode:(id)arg1 ;
-(id)createExpression:(id)arg1 :(id)arg2 ;
-(id)evaluate:(id)arg1 :(id)arg2 :(id)arg3 :(long long)arg4 :(id)arg5 ;
-(void)replace:(id)arg1 ;
-(id)createElement:(id)arg1 ;
-(IKDOMElement *)documentElement;
-(id)getElementsByTagName:(id)arg1 ;
-(long long)nodeType;
-(void)setNeedsUpdate;
-(id)createTextNode:(id)arg1 ;
-(id)createDocumentFragment;
-(id)getElementById:(id)arg1 ;
-(id)snapshotImpressions;
-(id)recordedImpressions;
-(void)_updateITMLIDRecursivelyForNodePtr:(xmlNode*)arg1 ;
-(void)setITMLIDForNode:(id)arg1 ;
-(void)runTest:(id)arg1 :(id)arg2 ;
-(BOOL)strictErrorChecking;
-(void)setStrictErrorChecking:(BOOL)arg1 ;
-(id)initWithAppContext:(id)arg1 input:(id)arg2 error:(id*)arg3 ;
-(id)initWithAppContext:(id)arg1 qualifiedName:(id)arg2 ;
-(BOOL)markUpdated;
-(unsigned long long)itmlIDSequence;
-(void)setItmlIDSequence:(unsigned long long)arg1 ;
-(id)initWithAppContext:(id)arg1 ;
-(void)setAppBridge:(id<IKJSDOMDocumentAppBridge>)arg1 ;
-(id<IKJSDOMDocumentAppBridge>)appBridge;
-(id)initWithAppContext:(id)arg1 xmlStr:(id)arg2 error:(id*)arg3 ;
-(void)setNavigationDocument:(IKJSNavigationDocument *)arg1 ;
-(id)nodeName;
-(IKJSNavigationDocument *)navigationDocument;
-(void)scrollToTop;
@end


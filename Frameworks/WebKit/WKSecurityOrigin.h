/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:28 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKSecurityOrigin : NSObject <WKObject> {

	ObjectStorage<API::SecurityOrigin> _securityOrigin;

}

@property (nonatomic,copy,readonly) NSString * protocol; 
@property (nonatomic,copy,readonly) NSString * host; 
@property (nonatomic,readonly) long long port; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)host;
-(long long)port;
-(NSString *)protocol;
-(Object*)_apiObject;
@end


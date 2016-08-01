/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:52 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface _UIDocumentStorage : NSObject {

	NSString* _scope;
	NSURL* _rootURL;

}

@property (readonly) NSURL * rootURL;                                  //@synthesize rootURL=_rootURL - In the implementation block
@property (getter=isUbiquitous,readonly) BOOL ubiquitous; 
-(void)dealloc;
-(id)initWithSearchScope:(id)arg1 rootURL:(id)arg2 ;
-(BOOL)isUbiquitous;
-(NSURL *)rootURL;
@end


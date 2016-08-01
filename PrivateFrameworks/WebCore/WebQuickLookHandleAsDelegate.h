/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSString;

@interface WebQuickLookHandleAsDelegate : NSObject <NSURLConnectionDelegate> {

	RefPtr<WebCore::SynchronousResourceHandleCFURLConnectionDelegate>* m_connectionDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3 ;
-(void)connection:(id)arg1 didReceiveDataArray:(id)arg2 ;
-(id)initWithConnectionDelegate:(SynchronousResourceHandleCFURLConnectionDelegate*)arg1 ;
-(void)clearHandle;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:55 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSURLRequest, NSURLConnection, NSMutableData, NSString;

@interface XMLSAXHTTPRequest : NSObject <NSURLConnectionDelegate> {

	NSURLRequest* _request;
	NSURLConnection* _connection;
	NSMutableData* _rawData;
	BOOL _invalidResponse;
	xmlSAXHandler* _saxHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)uniqueQueryID;
+(id)serviceUnavailableError;
+(BOOL)anyRequestLoading;
+(id)authenticationFailureError;
-(int)parseData:(id)arg1 ;
-(void)_finishedLoading;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(id)request;
-(void)loadRequest:(id)arg1 ;
-(BOOL)isLoading;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(BOOL)receivedValidResponse:(id)arg1 ;
-(void)loadStatusChanged;
-(void)willParseData;
-(void)didParseData;
-(void)_startedLoading;
-(void)failWithError:(id)arg1 ;
@end


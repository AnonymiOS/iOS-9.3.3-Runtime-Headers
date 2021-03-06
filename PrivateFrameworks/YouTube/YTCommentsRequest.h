/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:55 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTXMLHTTPRequest.h>

@class NSMutableArray, NSMutableString, YTVideo;

@interface YTCommentsRequest : YTXMLHTTPRequest {

	id _delegate;
	NSMutableArray* _comments;
	unsigned _startIndex;
	unsigned _totalResults;
	NSMutableString* _moreCommentsURLString;
	YTVideo* _video;

}
+(unsigned)commentsPerRequest;
-(int)parseData:(id)arg1 ;
-(void)dealloc;
-(void)didParseData;
-(void)failWithError:(id)arg1 ;
-(void)_requestCommentsFromURL:(id)arg1 ;
-(void)didAuthenticate:(id)arg1 ;
-(void)requestMoreComments;
-(id)initRequestingCommentsForVideo:(id)arg1 withDelegate:(id)arg2 ;
@end


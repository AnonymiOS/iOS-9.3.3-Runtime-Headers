/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:07 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLProtocol.h>

@class NSMutableArray;

@interface MFMessageURLProtocol : NSURLProtocol {

	BOOL _stopped;
	NSMutableArray* _attachments;

}
+(void)initialize;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
-(void)dealloc;
-(void)stopLoading;
-(void)_downloadedData:(id)arg1 forURL:(id)arg2 mimeType:(id)arg3 ;
-(void)startLoading;
@end


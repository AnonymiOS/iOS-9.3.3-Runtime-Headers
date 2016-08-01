/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, NSArray;

@interface RadioRemoveAllFromWishListRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	NSArray* _trackStoreIDs;

}
-(id)init;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithTrackStoreIDs:(id)arg1 ;
-(id)initWithTracks:(id)arg1 ;
@end


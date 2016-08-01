/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:21 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSData, NSValue, NSString;

@interface AAUIPhotoResponse : AAResponse {

	NSData* _photoData;
	NSValue* _cropRect;
	NSString* _serverCacheTag;

}

@property (nonatomic,readonly) NSData * photoData;                     //@synthesize photoData=_photoData - In the implementation block
@property (nonatomic,readonly) NSValue * cropRect;                     //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,readonly) NSString * serverCacheTag;              //@synthesize serverCacheTag=_serverCacheTag - In the implementation block
-(NSString *)serverCacheTag;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSData *)photoData;
-(NSValue *)cropRect;
@end


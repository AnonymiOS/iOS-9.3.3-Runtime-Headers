/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSString;

@interface PLQuotaRequest : AARequest {

	NSString* _authToken;
	NSString* _personID;

}
-(void)dealloc;
-(id)urlRequest;
-(id)initWithURLString:(id)arg1 authToken:(id)arg2 personID:(id)arg3 ;
@end


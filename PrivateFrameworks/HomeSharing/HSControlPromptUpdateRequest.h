/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HSRequest.h>

@interface HSControlPromptUpdateRequest : HSRequest {

	unsigned _promptID;

}
+(id)requestWithInterfaceID:(unsigned)arg1 promptID:(unsigned)arg2 ;
-(BOOL)isConcurrent;
-(id)initWithInterfaceID:(unsigned)arg1 promptID:(unsigned)arg2 ;
-(double)timeoutInterval;
-(id)canonicalResponseForResponse:(id)arg1 ;
@end


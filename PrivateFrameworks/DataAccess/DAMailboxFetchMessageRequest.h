/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAMailboxRequest.h>

@interface DAMailboxFetchMessageRequest : DAMailboxRequest {

	int _maxSize;

}

@property (assign,nonatomic) int maxSize;              //@synthesize maxSize=_maxSize - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)maxSize;
-(void)setMaxSize:(int)arg1 ;
-(id)initRequestForBodyFormat:(int)arg1 withMessageID:(id)arg2 withBodySizeLimit:(int)arg3 ;
@end


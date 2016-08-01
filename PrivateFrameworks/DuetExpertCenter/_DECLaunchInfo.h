/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface _DECLaunchInfo : NSObject <NSSecureCoding> {

	unsigned char _consumerSubtype;
	long long _launchSource;
	NSString* _query;
	long long _itemsShownCount;
	NSDictionary* _itemsShownCounts;

}

@property (nonatomic,readonly) long long launchSource;                       //@synthesize launchSource=_launchSource - In the implementation block
@property (nonatomic,readonly) NSString * query;                             //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) long long itemsShownCount;                    //@synthesize itemsShownCount=_itemsShownCount - In the implementation block
@property (nonatomic,readonly) unsigned char consumerSubtype;                //@synthesize consumerSubtype=_consumerSubtype - In the implementation block
@property (nonatomic,readonly) NSDictionary * itemsShownCounts;              //@synthesize itemsShownCounts=_itemsShownCounts - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)query;
-(NSDictionary *)itemsShownCounts;
-(long long)itemsShownCount;
-(long long)launchSource;
-(unsigned char)consumerSubtype;
-(id)initWithLaunchSource:(long long)arg1 query:(id)arg2 itemsShownCount:(long long)arg3 itemsShownCounts:(id)arg4 consumerSubtype:(unsigned char)arg5 ;
@end


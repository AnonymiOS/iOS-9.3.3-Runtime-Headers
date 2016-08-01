/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:25 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CalMeCard : NSObject <NSSecureCoding> {

	NSString* _displayName;
	NSArray* _emailAddresses;
	NSString* _uniqueID;
	long long _version;

}

@property (retain,readonly) NSString * displayName;                //@synthesize displayName=_displayName - In the implementation block
@property (retain,readonly) NSArray * emailAddresses;              //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (retain,readonly) NSString * uniqueID;                   //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign) long long version;                              //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cardFromPath:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(NSString *)displayName;
-(BOOL)isEqualToMeCard:(id)arg1 ;
-(id)initWithDisplayName:(id)arg1 emailAddresses:(id)arg2 uniqueID:(id)arg3 ;
-(id)preferredEmailAddress;
-(BOOL)writeToPath:(id)arg1 ;
-(NSArray *)emailAddresses;
-(NSString *)uniqueID;
@end


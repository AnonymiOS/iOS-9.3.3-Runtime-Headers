/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:19 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary, NSArray;

@interface NSException : NSObject <NSCopying, NSCoding> {

	NSString* name;
	NSString* reason;
	NSDictionary* userInfo;
	id reserved;

}

@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * reason; 
@property (copy,readonly) NSDictionary * userInfo; 
@property (copy,readonly) NSArray * callStackReturnAddresses; 
@property (copy,readonly) NSArray * callStackSymbols; 
+(void)raise:(id)arg1 format:(id)arg2 arguments:(char*)arg3 ;
+(void)raise:(id)arg1 format:(id)arg2 ;
+(id)exceptionWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_installStackTraceKeyIfNeeded;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)raise;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(NSArray *)callStackSymbols;
-(NSString *)reason;
-(NSArray *)callStackReturnAddresses;
-(id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 ;
@end


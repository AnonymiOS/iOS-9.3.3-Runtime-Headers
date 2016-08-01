/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface PKAuthenticatorEvaluationRequest : NSObject {

	NSString* _PINTitle;
	NSNumber* _PINLength;
	long long _policy;

}

@property (nonatomic,copy) NSString * PINTitle;               //@synthesize PINTitle=_PINTitle - In the implementation block
@property (nonatomic,copy) NSNumber * PINLength;              //@synthesize PINLength=_PINLength - In the implementation block
@property (nonatomic,readonly) long long policy;              //@synthesize policy=_policy - In the implementation block
-(void)dealloc;
-(id)init;
-(id)initWithPolicy:(long long)arg1 ;
-(void)setPINTitle:(NSString *)arg1 ;
-(void)setPINLength:(NSNumber *)arg1 ;
-(NSString *)PINTitle;
-(NSNumber *)PINLength;
-(long long)policy;
@end


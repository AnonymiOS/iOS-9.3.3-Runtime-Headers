/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SSProtocolCondition : NSObject {

	long long _operator;
	id _value;

}
+(id)newConditionWithDictionary:(id)arg1 ;
-(BOOL)evaluateWithContext:(id)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
@end


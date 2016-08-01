/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:20 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@class NSString;

@interface STContactAddress : STSiriModelObject {

	long long _type;
	NSString* _stringValue;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)type;
-(id)stringValue;
-(id)initWithStringValue:(id)arg1 ;
-(id)initWithType:(long long)arg1 stringValue:(id)arg2 ;
-(id)_aceContextObjectValue;
@end


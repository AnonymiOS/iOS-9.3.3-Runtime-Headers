/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchControlGroupIdentifiersResultObject : CATTaskResultObject {

	NSArray* _groupIdentifiers;

}

@property (nonatomic,copy) NSArray * groupIdentifiers;              //@synthesize groupIdentifiers=_groupIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)groupIdentifiers;
-(void)setGroupIdentifiers:(NSArray *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:25 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class BKSEventFocusDeferralProperties;

@interface BKSEventFocusDeferral : NSObject <NSSecureCoding> {

	int _priority;
	BKSEventFocusDeferralProperties* _properties;
	BKSEventFocusDeferralProperties* _deferredProperties;

}

@property (nonatomic,retain,readonly) BKSEventFocusDeferralProperties * properties;                      //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain,readonly) BKSEventFocusDeferralProperties * deferredProperties;              //@synthesize deferredProperties=_deferredProperties - In the implementation block
@property (nonatomic,readonly) int priority;                                                             //@synthesize priority=_priority - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithProperties:(id)arg1 deferredProperties:(id)arg2 withPriority:(int)arg3 ;
-(BOOL)defersProperties:(id)arg1 ;
-(BKSEventFocusDeferralProperties *)deferredProperties;
-(id)initWithProperties:(id)arg1 deferredProperties:(id)arg2 ;
-(id)deferredPropertiesForProperties:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)priority;
-(BKSEventFocusDeferralProperties *)properties;
@end


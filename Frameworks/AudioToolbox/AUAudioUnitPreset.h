/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:29 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AUAudioUnitPreset : NSObject <NSSecureCoding> {

	long long _number;
	NSString* _name;

}

@property (assign,nonatomic) long long number;              //@synthesize number=_number - In the implementation block
@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(long long)number;
-(void)setNumber:(long long)arg1 ;
@end


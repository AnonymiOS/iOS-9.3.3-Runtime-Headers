/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSNumber;

@interface TTSVoiceAsset : NSObject <NSSecureCoding> {

	BOOL _isInstalled;
	BOOL _isBuiltInVoice;
	NSString* _name;
	NSArray* _languages;
	long long _gender;
	long long _footprint;
	NSNumber* _contentVersion;
	NSString* _masteredVersion;

}

@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * languages;                     //@synthesize languages=_languages - In the implementation block
@property (nonatomic,readonly) long long gender;                        //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) long long footprint;                     //@synthesize footprint=_footprint - In the implementation block
@property (nonatomic,readonly) BOOL isInstalled;                        //@synthesize isInstalled=_isInstalled - In the implementation block
@property (nonatomic,readonly) BOOL isBuiltInVoice;                     //@synthesize isBuiltInVoice=_isBuiltInVoice - In the implementation block
@property (nonatomic,readonly) NSNumber * contentVersion;               //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,readonly) NSString * masteredVersion;              //@synthesize masteredVersion=_masteredVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSArray *)languages;
-(long long)gender;
-(NSString *)masteredVersion;
-(id)initWithName:(id)arg1 languages:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 isInstalled:(BOOL)arg5 isBuiltIn:(BOOL)arg6 ;
-(BOOL)isInstalled;
-(NSNumber *)contentVersion;
-(BOOL)isBuiltInVoice;
-(long long)footprint;
@end


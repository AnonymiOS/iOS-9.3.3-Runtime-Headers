/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:15 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSUUID, NSString;

@interface RCSSavedRecordingAccessToken : NSObject <NSSecureCoding, NSCoding, NSCopying> {

	BOOL _exclusive;
	long long _accessIntent;
	NSURL* _compositionAVURL;
	NSUUID* _identifier;
	NSString* _accessName;

}

@property (nonatomic,readonly) long long accessIntent;                         //@synthesize accessIntent=_accessIntent - In the implementation block
@property (getter=isExclusive,nonatomic,readonly) BOOL exclusive;              //@synthesize exclusive=_exclusive - In the implementation block
@property (nonatomic,readonly) NSURL * compositionAVURL;                       //@synthesize compositionAVURL=_compositionAVURL - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessName;                     //@synthesize accessName=_accessName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)tokenWithName:(id)arg1 accessIntent:(long long)arg2 compositionAVURL:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isExclusive;
-(id)initWithName:(id)arg1 accessIntent:(long long)arg2 compositionAVURL:(id)arg3 identifier:(id)arg4 ;
-(long long)accessIntent;
-(NSURL *)compositionAVURL;
-(NSString *)accessName;
@end


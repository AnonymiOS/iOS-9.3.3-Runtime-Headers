/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface CacheDeleteRecentInfo : NSObject <NSSecureCoding> {

	NSMutableDictionary* _volumes;

}

@property (nonatomic,retain) NSMutableDictionary * volumes;              //@synthesize volumes=_volumes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cacheDeleteRecentInfo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(int)validate:(double)arg1 threshold:(id)arg2 ;
-(id)initWithVolumes:(id)arg1 ;
-(NSMutableDictionary *)volumes;
-(void)setVolumes:(NSMutableDictionary *)arg1 ;
@end


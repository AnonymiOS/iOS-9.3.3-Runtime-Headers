/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:39 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCore/FMCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FMWeakWrapper : NSObject <NSCopying> {

	id _object;
	unsigned long long _objectHash;

}

@property (assign,nonatomic,__weak) id object;                           //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) unsigned long long objectHash;              //@synthesize objectHash=_objectHash - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(unsigned long long)objectHash;
-(void)setObjectHash:(unsigned long long)arg1 ;
@end


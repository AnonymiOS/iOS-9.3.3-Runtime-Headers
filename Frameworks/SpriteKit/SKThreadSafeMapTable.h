/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray;

@interface SKThreadSafeMapTable : NSObject <NSCopying, NSCoding, NSFastEnumeration> {

	int _storageLock;
	NSMutableArray* _storage;

}
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithNSMapTable:(id)arg1 ;
@end


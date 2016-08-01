/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:20 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSMutableData.h>
#import <libobjc.A.dylib/NSDiscardableContent.h>

@interface NSPurgeableData : NSMutableData <NSDiscardableContent> {

	unsigned long long _length;
	int _accessCount;
	unsigned char _private[32];
	void* _reserved;

}
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/id)arg4 ;
-(void)_destroyMemory;
-(void)dealloc;
-(id)init;
-(id)description;
-(unsigned long long)length;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(const void*)bytes;
-(void)setLength:(unsigned long long)arg1 ;
-(BOOL)beginContentAccess;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(BOOL)isContentDiscarded;
-(void*)mutableBytes;
-(void)finalize;
@end


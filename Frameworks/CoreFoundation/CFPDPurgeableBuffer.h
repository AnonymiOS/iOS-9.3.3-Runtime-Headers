/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:19 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPDDataBuffer.h>

@interface CFPDPurgeableBuffer : CFPDDataBuffer {

	CFDataRef handle;
	unsigned long long allocSize;
	BOOL safe;
	BOOL usedMalloc;

}
-(BOOL)purgable;
-(BOOL)beginAccessing;
-(void)endAccessing;
-(id)initWithFileDescriptor:(int)arg1 size:(unsigned long long)arg2 ;
-(void)dealloc;
-(unsigned long long)length;
-(void*)bytes;
-(id)initWithPropertyList:(void*)arg1 ;
@end


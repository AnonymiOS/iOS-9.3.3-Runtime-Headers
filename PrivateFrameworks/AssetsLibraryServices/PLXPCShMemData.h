/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@interface PLXPCShMemData : NSData {

	void* _buffer;
	unsigned long long _dataLength;
	unsigned long long _bufferLength;

}
-(void)dealloc;
-(id)description;
-(unsigned long long)length;
-(const void*)bytes;
-(id)initWithXPCShmem:(id)arg1 ;
-(id)initWithXPCShmem:(id)arg1 length:(long long)arg2 ;
@end

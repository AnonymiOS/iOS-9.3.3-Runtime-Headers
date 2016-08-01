/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:18 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@class NSString;

@interface _CFStreamDelegate : NSObject <NSStreamDelegate> {

	unsigned long long _flags;
	SCD_Struct_CF16* _client;
	SCD_Union_CF17* _cb;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStreamEvents:(unsigned long long)arg1 callback:(void*)arg2 context:(SCD_Struct_CF16*)arg3 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)dealloc;
@end


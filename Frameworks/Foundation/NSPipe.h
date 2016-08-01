/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:20 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSFileHandle;

@interface NSPipe : NSObject

@property (retain,readonly) NSFileHandle * fileHandleForReading; 
@property (retain,readonly) NSFileHandle * fileHandleForWriting; 
+(id)pipe;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)_closeOnDealloc;
-(NSFileHandle *)fileHandleForReading;
-(NSFileHandle *)fileHandleForWriting;
-(id)init;
@end


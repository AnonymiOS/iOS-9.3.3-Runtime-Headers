/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFUOutputStream.h>

@class NSMutableData, NSString;

@interface OISFUMemoryOutputStream : NSObject <SFUOutputStream> {

	NSMutableData* mData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(long long)offset;
-(void)close;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(id)inputStream;
-(BOOL)canSeek;
-(id)closeLocalStream;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(BOOL)canCreateInputStream;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:35 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMNode.h>

@class NSString;

@interface DOMCharacterData : DOMNode

@property (copy) NSString * data; 
@property (readonly) unsigned length; 
-(id)previousElementSibling;
-(id)substringData:(unsigned)arg1 length:(unsigned)arg2 ;
-(id)substringData:(unsigned)arg1 :(unsigned)arg2 ;
-(void)insertData:(unsigned)arg1 data:(id)arg2 ;
-(void)insertData:(unsigned)arg1 :(id)arg2 ;
-(void)deleteData:(unsigned)arg1 length:(unsigned)arg2 ;
-(void)deleteData:(unsigned)arg1 :(unsigned)arg2 ;
-(void)replaceData:(unsigned)arg1 length:(unsigned)arg2 data:(id)arg3 ;
-(void)replaceData:(unsigned)arg1 :(unsigned)arg2 :(id)arg3 ;
-(unsigned)length;
-(NSString *)data;
-(void)setData:(NSString *)arg1 ;
-(void)appendData:(id)arg1 ;
-(id)nextElementSibling;
-(void)remove;
@end


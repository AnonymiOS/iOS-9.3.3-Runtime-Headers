/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:29 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, VMUSourceInfo;

@interface VMUSymbol : NSObject {

	NSString* _name;
	VMUSourceInfo* _sourceInfo;

}
-(void)dealloc;
-(id)name;
-(id)initWithSymbolicator:(CSTypeRef)arg1 address:(unsigned long long)arg2 ;
-(id)sourceInfoForAddress:(unsigned long long)arg1 ;
@end


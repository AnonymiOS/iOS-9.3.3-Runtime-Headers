/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/VMUCallTreeNode.h>

@class NSCountedSet, NSString;

@interface VMUCallTreeLeafNode : VMUCallTreeNode {

	NSCountedSet* _addresses;
	NSString* _combinedName;

}
-(void)dealloc;
-(id)init;
-(void)addAddress:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned)arg3 numBytes:(unsigned long long)arg4 ;
-(void)getBrowserName:(id)arg1 ;
@end


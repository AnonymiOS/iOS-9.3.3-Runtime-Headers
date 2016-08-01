/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMethodSignature, NSString;

@interface CLIntersiloInterfaceSelectorInfo : NSObject {

	int _numArguments;
	int _replyBlockIndex;
	int _returnAddressIndex;
	int _returnValueSize;
	SEL _sel;
	NSMethodSignature* _sig;
	NSString* _str;

}

@property (nonatomic,readonly) SEL sel;                                     //@synthesize sel=_sel - In the implementation block
@property (nonatomic,readonly) int numArguments;                            //@synthesize numArguments=_numArguments - In the implementation block
@property (nonatomic,readonly) int replyBlockIndex;                         //@synthesize replyBlockIndex=_replyBlockIndex - In the implementation block
@property (nonatomic,readonly) int returnAddressIndex;                      //@synthesize returnAddressIndex=_returnAddressIndex - In the implementation block
@property (nonatomic,readonly) int returnValueSize;                         //@synthesize returnValueSize=_returnValueSize - In the implementation block
@property (nonatomic,retain,readonly) NSMethodSignature * sig;              //@synthesize sig=_sig - In the implementation block
@property (nonatomic,retain,readonly) NSString * str;                       //@synthesize str=_str - In the implementation block
-(id)description;
-(NSString *)str;
-(id)initWithSelector:(SEL)arg1 andMethodSignature:(id)arg2 ;
-(SEL)sel;
-(int)numArguments;
-(int)replyBlockIndex;
-(int)returnAddressIndex;
-(int)returnValueSize;
-(NSMethodSignature *)sig;
@end


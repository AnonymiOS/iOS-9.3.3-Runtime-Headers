/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
#import <DataDetectorsCore/DDLocation.h>

@class NSString;

@interface DDCompilationNote : DDLocation {

	NSString* _message;
	int _level;

}

@property (readonly) NSString * message;              //@synthesize message=_message - In the implementation block
@property (readonly) int level;                       //@synthesize level=_level - In the implementation block
+(id)noteAtLocation:(id)arg1 ofLevel:(int)arg2 withFormat:(id)arg3 ;
-(void)dealloc;
-(int)level;
-(NSString *)message;
-(id)initWithLocation:(id)arg1 message:(id)arg2 level:(int)arg3 ;
-(id)initWithFileName:(id)arg1 position:(_DDExpressionPosition)arg2 message:(id)arg3 level:(int)arg4 ;
@end


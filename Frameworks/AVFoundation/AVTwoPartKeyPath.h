/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVKeyPath.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AVTwoPartKeyPath : NSObject <AVKeyPath, NSCopying> {

	NSString* _topLevelKey;
	NSString* _secondLevelKey;

}

@property (nonatomic,readonly) NSString * topLevelPropertyKey;                 //@synthesize topLevelKey=_topLevelKey - In the implementation block
@property (nonatomic,readonly) NSString * secondLevelPropertyKey;              //@synthesize secondLevelKey=_secondLevelKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * keyPathString; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)keyPathString;
-(NSString *)topLevelPropertyKey;
-(NSString *)secondLevelPropertyKey;
-(id)initWithTopLevelPropertyKey:(id)arg1 secondLevelPropertyKey:(id)arg2 ;
@end


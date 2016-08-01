/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
#import <ScreenReaderCore/SCRCPhotoEvaluatorResult.h>

@class NSArray;

@interface SCRCPhotoEvaluatorResultPeople : SCRCPhotoEvaluatorResult {

	CGSize _imageSize;
	NSArray* _people;

}

@property (nonatomic,readonly) NSArray * people;              //@synthesize people=_people - In the implementation block
-(void)dealloc;
-(NSArray *)people;
-(id)humanReadableResult;
-(id)initWithPeople:(id)arg1 inImageOfSize:(CGSize)arg2 ;
@end


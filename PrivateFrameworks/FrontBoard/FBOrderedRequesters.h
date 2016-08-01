/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:45 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface FBOrderedRequesters : NSObject {

	NSMutableArray* _bands[4];

}
-(void)dealloc;
-(id)init;
-(id)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)containsRequester:(id)arg1 inBand:(int)arg2 ;
-(id)requesters;
-(void)addRequester:(id)arg1 toBand:(int)arg2 ;
-(void)prioritizeRequester:(id)arg1 ;
-(id)frontmostRequester;
-(void)removeRequester:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end


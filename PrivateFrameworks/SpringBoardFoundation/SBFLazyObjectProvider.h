/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBFLazyObjectProvider : NSObject {

	id _object;
	/*^block*/id _generator;

}

@property (nonatomic,retain) id object;               //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) id generator;              //@synthesize generator=_generator - In the implementation block
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)generator;
-(id)initWithGenerator:(/*^block*/id)arg1 ;
-(void)setGenerator:(id)arg1 ;
@end

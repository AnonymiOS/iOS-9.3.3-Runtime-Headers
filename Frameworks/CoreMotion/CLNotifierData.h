/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CLNotifierData : NSObject {

	void* _data;
	/*^block*/id _destructor;

}

@property (assign,nonatomic) void* data;               //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id destructor;              //@synthesize destructor=_destructor - In the implementation block
-(void)dealloc;
-(void*)data;
-(void)setData:(void*)arg1 ;
-(id)initWithData:(void*)arg1 destructor:(/*^block*/id)arg2 ;
-(void)setDestructor:(id)arg1 ;
-(id)destructor;
@end


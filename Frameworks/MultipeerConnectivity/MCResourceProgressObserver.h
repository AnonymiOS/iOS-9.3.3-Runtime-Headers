/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:24 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSProgress;

@interface MCResourceProgressObserver : NSObject {

	NSString* _name;
	NSProgress* _progress;
	/*^block*/id _cancelHandler;

}

@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSProgress * progress;              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) id cancelHandler;                     //@synthesize cancelHandler=_cancelHandler - In the implementation block
-(void)setCancelHandler:(id)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)invalidate;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(id)cancelHandler;
-(id)initWithName:(id)arg1 progress:(id)arg2 cancelHandler:(/*^block*/id)arg3 ;
@end


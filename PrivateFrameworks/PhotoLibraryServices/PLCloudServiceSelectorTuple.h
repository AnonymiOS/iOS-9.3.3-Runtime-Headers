/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLCloudService;

@interface PLCloudServiceSelectorTuple : NSObject {

	SEL selector;
	PLCloudService* instance;

}

@property (assign,nonatomic) SEL selector; 
@property (nonatomic,retain) PLCloudService * instance; 
-(void)dealloc;
-(void)setSelector:(SEL)arg1 ;
-(SEL)selector;
-(void)setInstance:(PLCloudService *)arg1 ;
-(PLCloudService *)instance;
@end


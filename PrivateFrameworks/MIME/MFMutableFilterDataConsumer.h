/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:21 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFBaseFilterDataConsumer.h>
#import <libobjc.A.dylib/MFGuaranteedCollectingDataConsumer.h>

@protocol MFGuaranteedCollectingDataConsumer;
@class MFLock, NSString;

@interface MFMutableFilterDataConsumer : MFBaseFilterDataConsumer <MFGuaranteedCollectingDataConsumer> {

	id<MFGuaranteedCollectingDataConsumer> _mainConsumer;
	MFLock* _consumerLock;
	BOOL _isDone;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)data;
-(void)done;
-(long long)appendData:(id)arg1 ;
-(void)addDataConsumer:(id)arg1 ;
-(id)initWithMainConsumer:(id)arg1 ;
@end

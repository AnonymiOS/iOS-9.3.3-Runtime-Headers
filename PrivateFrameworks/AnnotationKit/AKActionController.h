/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:04 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AKController;

@interface AKActionController : NSObject {

	AKController* _controller;

}

@property (__weak) AKController * controller;              //@synthesize controller=_controller - In the implementation block
-(AKController *)controller;
-(void)setController:(AKController *)arg1 ;
-(void)performActionForSender:(id)arg1 ;
-(BOOL)validateSender:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
@end


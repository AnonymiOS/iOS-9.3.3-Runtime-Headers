/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIResponder;

@interface _UITouchForwardingRecipient : NSObject {

	long long recordedPhase;
	long long autocompletedPhase;
	UIResponder* fromResponder;
	UIResponder* responder;

}

@property (assign,nonatomic,__weak) UIResponder * fromResponder; 
@property (assign,nonatomic,__weak) UIResponder * responder; 
@property (assign,nonatomic) long long recordedPhase; 
@property (assign,nonatomic) long long autocompletedPhase; 
-(id)description;
-(void)setResponder:(UIResponder *)arg1 ;
-(UIResponder *)responder;
-(long long)recordedPhase;
-(long long)autocompletedPhase;
-(void)setRecordedPhase:(long long)arg1 ;
-(void)setAutocompletedPhase:(long long)arg1 ;
-(id)initWithResponder:(id)arg1 fromResponder:(id)arg2 ;
-(UIResponder *)fromResponder;
-(void)setFromResponder:(UIResponder *)arg1 ;
@end


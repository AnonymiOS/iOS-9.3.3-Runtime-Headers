/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:19 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, IKDOMNode, NSDate;


@protocol IKJSDOMEvent <JSExport>
@property (nonatomic,retain,readonly) NSString * type; 
@property (nonatomic,retain,readonly) IKDOMNode * target; 
@property (nonatomic,retain,readonly) IKDOMNode * currentTarget; 
@property (nonatomic,readonly) long long eventPhase; 
@property (nonatomic,readonly) BOOL bubbles; 
@property (nonatomic,readonly) BOOL cancelable; 
@property (nonatomic,readonly) NSDate * timeStamp; 
@property (nonatomic,readonly) BOOL defaultPrevented; 
@required
-(IKDOMNode *)currentTarget;
-(long long)eventPhase;
-(BOOL)cancelable;
-(BOOL)defaultPrevented;
-(void)stopPropagation;
-(void)preventDefault;
-(void)stopImmediatePropagation;
-(NSString *)type;
-(IKDOMNode *)target;
-(NSDate *)timeStamp;
-(id)initWithType:(id)arg1 eventInit:(id)arg2;
-(BOOL)bubbles;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXFrontBoardUtils.framework/AXFrontBoardUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXFBFakeProcessState, NSString;

@interface AXFBFakeProcess : NSObject {

	AXFBFakeProcessState* _state;
	NSString* _bundleIdentifier;

}

@property (nonatomic,retain) AXFBFakeProcessState * state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(void)dealloc;
-(AXFBFakeProcessState *)state;
-(void)setState:(AXFBFakeProcessState *)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end


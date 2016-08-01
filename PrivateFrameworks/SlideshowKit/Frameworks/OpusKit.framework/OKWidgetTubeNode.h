/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:12 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetNode.h>

@class SCNTube;

@interface OKWidgetTubeNode : OKWidgetNode {

	SCNTube* _tube;

}
+(id)supportedSettings;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
-(id)initWithWidget:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(long long)settingRadialSegmentCount;
-(void)setSettingRadialSegmentCount:(long long)arg1 ;
-(long long)settingHeightSegmentCount;
-(void)setSettingHeightSegmentCount:(long long)arg1 ;
-(double)settingHeight;
-(void)setSettingHeight:(double)arg1 ;
-(double)settingInnerRadius;
-(void)setSettingInnerRadius:(double)arg1 ;
-(double)settingOuterRadius;
-(void)setSettingOuterRadius:(double)arg1 ;
@end


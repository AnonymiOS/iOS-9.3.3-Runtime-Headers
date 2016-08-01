/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:57 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISSettings.h>
#import <libobjc.A.dylib/ISVitalitySettings.h>

@protocol ISVitalitySettings <NSObject>
@required
-(long long)behavior;
-(double)playbackRate;
-(double)relativeStart;
-(double)postDuration;
-(double)preDuration;
-(double)maximumRate;
-(double)maximumDeceleration;
-(double)relativeEnd;
-(long long)maximumNumberOfFrames;
-(double)endTimeOffset;
-(double)minimumVisibilityFactor;
-(double)maximumDelayBeforePlayback;
-(double)minimumDurationForColorMismatch;

@end


@class ISVitalitySpecificSettings, NSString;

@interface ISVitalitySettings : ISSettings <ISVitalitySettings> {

	BOOL _useLegacyBehavior;
	ISVitalitySpecificSettings* _oneUpSettings;
	ISVitalitySpecificSettings* _shareViewSettings;
	ISVitalitySpecificSettings* _activityViewSettings;
	ISVitalitySpecificSettings* _orbPreviewSettings;

}

@property (assign,nonatomic) BOOL useLegacyBehavior;                                         //@synthesize useLegacyBehavior=_useLegacyBehavior - In the implementation block
@property (nonatomic,retain) ISVitalitySpecificSettings * oneUpSettings;                     //@synthesize oneUpSettings=_oneUpSettings - In the implementation block
@property (nonatomic,retain) ISVitalitySpecificSettings * shareViewSettings;                 //@synthesize shareViewSettings=_shareViewSettings - In the implementation block
@property (nonatomic,retain) ISVitalitySpecificSettings * activityViewSettings;              //@synthesize activityViewSettings=_activityViewSettings - In the implementation block
@property (nonatomic,retain) ISVitalitySpecificSettings * orbPreviewSettings;                //@synthesize orbPreviewSettings=_orbPreviewSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(long long)behavior;
-(ISVitalitySpecificSettings *)oneUpSettings;
-(void)setOneUpSettings:(ISVitalitySpecificSettings *)arg1 ;
-(double)playbackRate;
-(double)relativeStart;
-(double)postDuration;
-(double)preDuration;
-(void)setUseLegacyBehavior:(BOOL)arg1 ;
-(ISVitalitySpecificSettings *)shareViewSettings;
-(ISVitalitySpecificSettings *)activityViewSettings;
-(ISVitalitySpecificSettings *)orbPreviewSettings;
-(BOOL)useLegacyBehavior;
-(id)_defaultSettings;
-(double)maximumRate;
-(double)maximumDeceleration;
-(double)relativeEnd;
-(long long)maximumNumberOfFrames;
-(double)endTimeOffset;
-(double)minimumVisibilityFactor;
-(double)maximumDelayBeforePlayback;
-(double)minimumDurationForColorMismatch;
-(void)setShareViewSettings:(ISVitalitySpecificSettings *)arg1 ;
-(void)setActivityViewSettings:(ISVitalitySpecificSettings *)arg1 ;
-(void)setOrbPreviewSettings:(ISVitalitySpecificSettings *)arg1 ;
@end


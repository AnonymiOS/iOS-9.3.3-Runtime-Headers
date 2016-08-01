/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPTransitionController.h>

@class MPVideoViewController, UIImageView;

@interface MPAlternateTracksTransitionController : MPTransitionController {

	MPVideoViewController* _videoController;
	UIImageView* _snapshotCoverImageView;

}

@property (assign,nonatomic,__weak) MPVideoViewController * videoController;              //@synthesize videoController=_videoController - In the implementation block
-(void)performTransition:(unsigned long long)arg1 ;
-(MPVideoViewController *)videoController;
-(void)setVideoController:(MPVideoViewController *)arg1 ;
@end


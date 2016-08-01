/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:10 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iPhotoMigrationSupport/BLAlert.h>

@class UIProgressView, UIActivityIndicatorView;

@interface BLActivityAlert : BLAlert {

	UIProgressView* _progressView;
	UIActivityIndicatorView* _activityIndicatorView;
	int _type;
	double _progress;
	BOOL _hasActivity;

}
-(void)setTitle:(id)arg1 ;
-(int)activityType;
-(void)setProgress:(double)arg1 ;
-(void)setActivityType:(int)arg1 ;
-(void)setHasActivity:(BOOL)arg1 ;
-(id)initWithType:(int)arg1 title:(id)arg2 options:(int)arg3 cancelAction:(id)arg4 ;
-(id)initWithType:(int)arg1 title:(id)arg2 cancelAction:(id)arg3 ;
@end


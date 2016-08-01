/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:11 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLPlayingExternallyBackgroundView.h>

@class NSString;

@interface PLAirPlayBackgroundView : PLPlayingExternallyBackgroundView {

	NSString* _deviceName;

}

@property (nonatomic,retain) NSString * deviceName;              //@synthesize deviceName=_deviceName - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 deviceName:(id)arg2 ;
-(void)setIsMovie:(BOOL)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
@end

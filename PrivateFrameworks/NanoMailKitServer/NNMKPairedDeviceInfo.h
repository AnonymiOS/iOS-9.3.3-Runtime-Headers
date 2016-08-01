/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:47 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NNMKPairedDeviceInfo : NSObject {

	double _screenWidth;
	double _screenScale;

}

@property (assign,nonatomic) double screenWidth;              //@synthesize screenWidth=_screenWidth - In the implementation block
@property (assign,nonatomic) double screenScale;              //@synthesize screenScale=_screenScale - In the implementation block
+(id)pairedDeviceInfoWithScreenWidth:(double)arg1 screenScale:(double)arg2 ;
-(void)setScreenWidth:(double)arg1 ;
-(double)screenScale;
-(void)setScreenScale:(double)arg1 ;
-(double)screenWidth;
@end


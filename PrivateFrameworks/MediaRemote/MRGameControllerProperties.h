/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:11 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MRGameControllerProperties : NSObject {

	unsigned _playerIndex;
	int _profile;
	NSString* _vendorName;
	double _buttonAUpDelay;

}

@property (assign,nonatomic) unsigned playerIndex;               //@synthesize playerIndex=_playerIndex - In the implementation block
@property (nonatomic,copy) NSString * vendorName;                //@synthesize vendorName=_vendorName - In the implementation block
@property (assign,nonatomic) double buttonAUpDelay;              //@synthesize buttonAUpDelay=_buttonAUpDelay - In the implementation block
@property (assign,nonatomic) int profile;                        //@synthesize profile=_profile - In the implementation block
-(void)setProfile:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setPlayerIndex:(unsigned)arg1 ;
-(void)setVendorName:(NSString *)arg1 ;
-(unsigned)playerIndex;
-(NSString *)vendorName;
-(double)buttonAUpDelay;
-(void)setButtonAUpDelay:(double)arg1 ;
-(int)profile;
@end


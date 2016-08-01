/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:29 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SKUIMediaPlayerItemStatus : NSObject <NSCopying> {

	NSString* _itemIdentifier;
	NSString* _storeID;
	NSString* _storeAlbumID;
	BOOL _hideDuration;
	double _currentTime;
	double _duration;
	long long _itemType;
	long long _playState;

}

@property (assign,nonatomic) double currentTime;                   //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) double duration;                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hideDuration;                    //@synthesize hideDuration=_hideDuration - In the implementation block
@property (nonatomic,copy) NSString * itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) long long itemType;                   //@synthesize itemType=_itemType - In the implementation block
@property (assign,nonatomic) long long playState;                  //@synthesize playState=_playState - In the implementation block
@property (nonatomic,copy) NSString * storeID;                     //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,copy) NSString * storeAlbumID;                //@synthesize storeAlbumID=_storeAlbumID - In the implementation block
-(id)init;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(NSString *)storeID;
-(NSString *)storeAlbumID;
-(void)setPlayState:(long long)arg1 ;
-(long long)itemType;
-(void)setStoreID:(NSString *)arg1 ;
-(void)setStoreAlbumID:(NSString *)arg1 ;
-(void)setItemType:(long long)arg1 ;
-(void)setHideDuration:(BOOL)arg1 ;
-(BOOL)hideDuration;
-(void)setCurrentTime:(double)arg1 ;
-(double)currentTime;
-(long long)playState;
@end


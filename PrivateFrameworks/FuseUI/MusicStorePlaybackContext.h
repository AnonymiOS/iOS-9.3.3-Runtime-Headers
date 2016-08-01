/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPPlaybackContext.h>

@class MusicClientContext, MusicEntityValueContext, NSArray;

@interface MusicStorePlaybackContext : MPPlaybackContext {

	MusicClientContext* _clientContext;
	MusicEntityValueContext* _containerEntityValueContext;
	NSArray* _items;

}

@property (nonatomic,retain) MusicClientContext * clientContext;                               //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) MusicEntityValueContext * containerEntityValueContext;              //@synthesize containerEntityValueContext=_containerEntityValueContext - In the implementation block
@property (nonatomic,copy) NSArray * items;                                                    //@synthesize items=_items - In the implementation block
+(Class)queueFeederClass;
+(void)setDefaultClientContext:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setClientContext:(MusicClientContext *)arg1 ;
-(MusicClientContext *)clientContext;
-(id)initWithStoreIDs:(id)arg1 ;
-(void)setContainerEntityValueContext:(MusicEntityValueContext *)arg1 ;
-(id)descriptionComponents;
-(MusicEntityValueContext *)containerEntityValueContext;
@end


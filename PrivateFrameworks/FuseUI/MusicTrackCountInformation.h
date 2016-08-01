/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MusicTrackCountInformation : NSObject {

	BOOL _libraryFallback;
	unsigned long long _trackCount;

}

@property (assign,getter=isLibraryFallback,nonatomic) BOOL libraryFallback;              //@synthesize libraryFallback=_libraryFallback - In the implementation block
@property (assign,nonatomic) unsigned long long trackCount;                              //@synthesize trackCount=_trackCount - In the implementation block
-(unsigned long long)trackCount;
-(void)setLibraryFallback:(BOOL)arg1 ;
-(void)setTrackCount:(unsigned long long)arg1 ;
-(BOOL)isLibraryFallback;
@end


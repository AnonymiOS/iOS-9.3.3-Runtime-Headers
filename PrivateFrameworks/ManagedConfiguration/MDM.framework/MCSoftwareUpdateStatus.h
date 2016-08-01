/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:45 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, MCSoftwareUpdateInfo;

@interface MCSoftwareUpdateStatus : NSObject {

	BOOL _downloading;
	BOOL _downloaded;
	BOOL _installing;
	NSNumber* _downloadPercentComplete;
	MCSoftwareUpdateInfo* _updateInfo;

}

@property (nonatomic,retain) NSNumber * downloadPercentComplete;                 //@synthesize downloadPercentComplete=_downloadPercentComplete - In the implementation block
@property (assign,getter=isDownloading,nonatomic) BOOL downloading;              //@synthesize downloading=_downloading - In the implementation block
@property (assign,getter=isDownloaded,nonatomic) BOOL downloaded;                //@synthesize downloaded=_downloaded - In the implementation block
@property (assign,getter=isInstalling,nonatomic) BOOL installing;                //@synthesize installing=_installing - In the implementation block
@property (nonatomic,retain) MCSoftwareUpdateInfo * updateInfo;                  //@synthesize updateInfo=_updateInfo - In the implementation block
-(BOOL)isDownloaded;
-(MCSoftwareUpdateInfo *)updateInfo;
-(void)setUpdateInfo:(MCSoftwareUpdateInfo *)arg1 ;
-(BOOL)isDownloading;
-(void)setDownloaded:(BOOL)arg1 ;
-(NSNumber *)downloadPercentComplete;
-(void)setDownloadPercentComplete:(NSNumber *)arg1 ;
-(void)setDownloading:(BOOL)arg1 ;
-(BOOL)isInstalling;
-(void)setInstalling:(BOOL)arg1 ;
@end


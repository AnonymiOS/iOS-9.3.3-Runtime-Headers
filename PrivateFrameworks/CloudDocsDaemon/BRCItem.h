/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class BRCItemID, BRCStatInfo, NSNumber, BRCAccountSession, BRCServerZone, BRCLocalContainer;


@protocol BRCItem <NSCopying,NSSecureCoding>
@property (nonatomic,readonly) BOOL isDead; 
@property (nonatomic,readonly) BOOL isLive; 
@property (nonatomic,readonly) BOOL isAlias; 
@property (nonatomic,readonly) BOOL isPackage; 
@property (nonatomic,readonly) BOOL isDocument; 
@property (nonatomic,readonly) BOOL isDirectory; 
@property (nonatomic,readonly) BRCItemID * itemID; 
@property (nonatomic,readonly) BRCStatInfo * st; 
@property (nonatomic,readonly) NSNumber * ownerKey; 
@property (nonatomic,readonly) BRCAccountSession * session; 
@property (nonatomic,readonly) BRCServerZone * serverZone; 
@property (nonatomic,readonly) BRCLocalContainer * container; 
@property (assign,nonatomic) unsigned long long sharingOptions; 
@required
-(BOOL)isDirectory;
-(BOOL)isPackage;
-(BOOL)isLive;
-(BRCLocalContainer *)container;
-(BRCItemID *)itemID;
-(BRCAccountSession *)session;
-(BOOL)isDocument;
-(BOOL)isAlias;
-(BRCStatInfo *)st;
-(BOOL)isDead;
-(unsigned long long)sharingOptions;
-(NSNumber *)ownerKey;
-(BRCServerZone *)serverZone;
-(BOOL)validateLoggingToFile:(_sFILE*)arg1;
-(void)setSharingOptions:(unsigned long long)arg1;

@end


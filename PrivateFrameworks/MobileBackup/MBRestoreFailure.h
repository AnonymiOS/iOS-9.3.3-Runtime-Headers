/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSData, NSError;

@interface MBRestoreFailure : NSObject <NSCopying, NSCoding> {

	NSString* _identifier;
	NSString* _displayName;
	NSString* _dataclass;
	NSString* _assetType;
	NSData* _icon;
	NSError* _error;

}

@property (nonatomic,copy) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * dataclass;                //@synthesize dataclass=_dataclass - In the implementation block
@property (nonatomic,copy) NSString * assetType;                //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,copy) NSData * icon;                       //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSError * error;                     //@synthesize error=_error - In the implementation block
-(NSString *)assetType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setIcon:(NSData *)arg1 ;
-(NSData *)icon;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setAssetType:(NSString *)arg1 ;
-(void)setDataclass:(NSString *)arg1 ;
-(NSString *)dataclass;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)initWithIdentifier:(id)arg1 dataclass:(id)arg2 assetType:(id)arg3 displayName:(id)arg4 error:(id)arg5 ;
@end


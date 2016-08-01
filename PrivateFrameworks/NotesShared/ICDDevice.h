/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, ICPerson, NSUUID;

@interface ICDDevice : NSManagedObject

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) ICPerson * person; 
@property (assign,nonatomic) BOOL sharingExtensionDevice; 
@property (nonatomic,retain) NSUUID * uuid; 
+(id)entity:(id)arg1 withUUIDCreatingIfNecessary:(id)arg2 context:(id)arg3 ;
+(id)currentDeviceInContext:(id)arg1 ;
+(id)sharingExtensionDeviceUUID;
+(id)deviceWithUUIDCreatingIfNecessary:(id)arg1 sharingExtensionDevice:(BOOL)arg2 context:(id)arg3 ;
+(id)deviceWithUUIDCreatingIfNecessary:(id)arg1 context:(id)arg2 ;
+(void)initialize;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, UIImage, NSNumber, ICPerson, ICGroup;

@interface ICAuthor : NSManagedObject

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) UIImage * icon; 
@property (assign,nonatomic) unsigned long long authorStatus; 
@property (nonatomic,retain) NSNumber * status; 
@property (nonatomic,retain) ICPerson * person; 
@property (nonatomic,retain) ICGroup * group; 
+(id)currentAuthorInGroup:(id)arg1 context:(id)arg2 ;
+(id)authorForPerson:(id)arg1 inGroup:(id)arg2 createIfNecessary:(BOOL)arg3 context:(id)arg4 ;
-(NSString *)name;
-(UIImage *)icon;
-(void)setAuthorStatus:(unsigned long long)arg1 ;
-(unsigned long long)authorStatus;
@end


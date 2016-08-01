/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSNumber, NSDictionary;

@interface EKPersistentAttachment : EKPersistentObject <NSCopying>

@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,readonly) BOOL isBinary; 
@property (nonatomic,copy) NSString * fileName; 
@property (nonatomic,copy) NSString * fileFormat; 
@property (nonatomic,copy) NSURL * localURL; 
@property (nonatomic,copy) NSNumber * fileSize; 
@property (nonatomic,copy) NSDictionary * XProperties; 
+(id)relations;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)UUID;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)localURL;
-(NSNumber *)fileSize;
-(int)entityType;
-(NSDictionary *)XProperties;
-(void)setXProperties:(NSDictionary *)arg1 ;
-(void)setIsBinary:(BOOL)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
-(NSString *)fileFormat;
-(void)setLocalURL:(NSURL *)arg1 ;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(void)setFileFormat:(NSString *)arg1 ;
-(BOOL)isBinary;
@end


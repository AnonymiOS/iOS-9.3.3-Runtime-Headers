/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:17 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SALCMContent : SADomainObject

@property (nonatomic,copy) NSString * canonicalId; 
@property (nonatomic,copy) NSString * channelId; 
@property (nonatomic,copy) NSString * title; 
+(id)content;
+(id)contentWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)groupIdentifier;
-(NSString *)canonicalId;
-(void)setCanonicalId:(NSString *)arg1 ;
-(NSString *)channelId;
-(void)setChannelId:(NSString *)arg1 ;
-(id)encodedClassName;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:17 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSURL, SASportsLeague, NSString, SAUIAppPunchOut;

@interface SASportsEntity : SADomainObject

@property (nonatomic,copy) NSURL * image; 
@property (nonatomic,copy) NSURL * largeImage; 
@property (nonatomic,retain) SASportsLeague * league; 
@property (nonatomic,copy) NSURL * listImage; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAUIAppPunchOut * punchout; 
+(id)entity;
+(id)entityWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setImage:(NSURL *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSURL *)image;
-(id)groupIdentifier;
-(NSURL *)largeImage;
-(void)setLargeImage:(NSURL *)arg1 ;
-(SASportsLeague *)league;
-(void)setLeague:(SASportsLeague *)arg1 ;
-(NSURL *)listImage;
-(void)setListImage:(NSURL *)arg1 ;
-(SAUIAppPunchOut *)punchout;
-(void)setPunchout:(SAUIAppPunchOut *)arg1 ;
-(id)encodedClassName;
@end


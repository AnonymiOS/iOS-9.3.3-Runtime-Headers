/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:19 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SASetSupportedLocales : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * locales; 
+(id)setSupportedLocales;
+(id)setSupportedLocalesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(NSArray *)locales;
-(void)setLocales:(NSArray *)arg1 ;
-(id)encodedClassName;
@end


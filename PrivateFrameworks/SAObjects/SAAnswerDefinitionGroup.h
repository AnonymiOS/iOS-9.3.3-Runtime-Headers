/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:20 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAAnswerDefinitionGroup : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * definitionEntries; 
@property (nonatomic,copy) NSString * origin; 
@property (nonatomic,copy) NSString * partOfSpeech; 
@property (nonatomic,copy) NSArray * synonyms; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definitionGroup;
+(id)definitionGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)origin;
-(void)setOrigin:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSArray *)definitionEntries;
-(void)setDefinitionEntries:(NSArray *)arg1 ;
-(NSString *)partOfSpeech;
-(void)setPartOfSpeech:(NSString *)arg1 ;
-(NSArray *)synonyms;
-(void)setSynonyms:(NSArray *)arg1 ;
-(id)encodedClassName;
@end


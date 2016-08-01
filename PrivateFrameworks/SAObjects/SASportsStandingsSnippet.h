/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:17 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASportsSnippet.h>

@class NSArray;

@interface SASportsStandingsSnippet : SASportsSnippet

@property (nonatomic,copy) NSArray * columns; 
@property (nonatomic,copy) NSArray * entities; 
@property (nonatomic,copy) NSArray * selectedEntities; 
@property (assign,nonatomic) BOOL showCardinalPositions; 
+(id)standingsSnippet;
+(id)standingsSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setEntities:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(NSArray *)selectedEntities;
-(void)setSelectedEntities:(NSArray *)arg1 ;
-(BOOL)showCardinalPositions;
-(void)setShowCardinalPositions:(BOOL)arg1 ;
-(NSArray *)entities;
-(NSArray *)columns;
-(void)setColumns:(NSArray *)arg1 ;
-(id)encodedClassName;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:14 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSPredicateVisitor.h>

@class NSPredicate, NSSet, NSMutableSet, NSError, NSArray;

@interface CNPredicateValidator : NSObject <NSPredicateVisitor> {

	BOOL _validated;
	NSPredicate* _predicate;
	NSSet* _allowedKeysSet;
	NSMutableSet* _usedKeysSet;
	NSError* _error;

}

@property (nonatomic,retain) NSPredicate * predicate;                 //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * allowedKeys; 
@property (nonatomic,copy,readonly) NSArray * usedKeys; 
@property (nonatomic,retain) NSSet * allowedKeysSet;                  //@synthesize allowedKeysSet=_allowedKeysSet - In the implementation block
@property (nonatomic,retain) NSMutableSet * usedKeysSet;              //@synthesize usedKeysSet=_usedKeysSet - In the implementation block
@property (assign,nonatomic) BOOL validated;                          //@synthesize validated=_validated - In the implementation block
@property (nonatomic,retain) NSError * error;                         //@synthesize error=_error - In the implementation block
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(void)dealloc;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)setValidated:(BOOL)arg1 ;
-(NSArray *)allowedKeys;
-(BOOL)validated;
-(void)setAllowedKeysSet:(NSSet *)arg1 ;
-(NSSet *)allowedKeysSet;
-(void)setUsedKeysSet:(NSMutableSet *)arg1 ;
-(void)resetUsedKeys;
-(NSMutableSet *)usedKeysSet;
-(void)setAllowedKeys:(NSArray *)arg1 ;
-(BOOL)validateWithError:(id*)arg1 ;
-(NSArray *)usedKeys;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/EDFormulaBuilding.h>

@class NSString;

@interface EDFormula : NSObject <EDFormulaBuilding> {

	CFDataRef mPackedData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)formula;
-(void)unarchiveFromData:(CFDataRef)arg1 offset:(unsigned long long*)arg2 ;
-(void)archiveByAppendingToMutableData:(CFDataRef)arg1 ;
-(EDToken*)tokenAtIndex:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)removeAllTokens;
-(unsigned)tokenCount;
-(char*)lastExtendedDataForTokenAtIndex:(unsigned)arg1 length:(unsigned*)arg2 ;
-(int)tokenTypeAtIndex:(unsigned)arg1 ;
-(BOOL)isSupportedFormula;
-(BOOL)isCleaned;
-(void)setWarning:(int)arg1 ;
-(BOOL)setupTokensWithTokensCount:(unsigned)arg1 tokensWithDataCount:(unsigned)arg2 extendedDataLength:(unsigned)arg3 extendedDataCount:(unsigned)arg4 ;
-(char*)addToken:(int)arg1 extendedDataLength:(unsigned)arg2 ;
-(void)setCleaned:(BOOL)arg1 ;
-(id)originalFormulaString;
-(id)warning;
-(void)populateXlPtg:(XlPtg*)arg1 index:(unsigned)arg2 ;
-(BOOL)copyTokenFromXlPtg:(XlPtg*)arg1 ;
-(BOOL)isBaseFormula;
-(ChVector<XlPtg *>*)xlPtgs;
-(BOOL)addToken:(int)arg1 extendedDataLength:(unsigned)arg2 extendedDataCount:(unsigned)arg3 ;
-(char*)setExtendedDataAtIndex:(unsigned)arg1 extendedDataIndex:(unsigned)arg2 length:(unsigned)arg3 ;
-(void)setupExtendedDataForTokenAtIndex:(unsigned)arg1 extendedDataLength:(unsigned)arg2 extendedDataCount:(unsigned)arg3 ;
-(BOOL)copyTokenAtIndex:(unsigned)arg1 fromFormula:(id)arg2 ;
-(int)warningType;
-(unsigned)firstTokenIndexForArgAtIndex:(unsigned)arg1 ;
-(id)saveArgs:(unsigned)arg1 andDelete:(BOOL)arg2 ;
-(char*)setExtendedDataForLastTokenAtIndex:(unsigned)arg1 length:(unsigned)arg2 ;
-(BOOL)convertToList:(unsigned)arg1 withFinalParen:(BOOL)arg2 ;
-(char*)addToken:(int)arg1 extendedDataLength:(unsigned)arg2 numArgs:(int)arg3 ;
-(BOOL)insertName:(unsigned long long)arg1 atIndex:(unsigned)arg2 ;
-(BOOL)insertExternalName:(unsigned long long)arg1 withLink:(unsigned long long)arg2 atIndex:(unsigned)arg3 ;
-(BOOL)addArrayWithCol:(int)arg1 andRow:(int)arg2 ;
-(BOOL)convertToList:(unsigned)arg1 ;
-(BOOL)convertToIntersect:(unsigned)arg1 ;
-(BOOL)convertLastRefsToArea;
-(id)lastTokenRefOrArea3dLinkRefIsValid:(BOOL*)arg1 withEDLinks:(id)arg2 ;
-(void)markLastTokenAsDuration;
-(void)markLastTokenAsSpanningRefVertically:(BOOL)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3 ;
-(BOOL)shrinkSpanningRefAtArgIndex:(unsigned)arg1 ;
-(BOOL)addInfixOperator:(int)arg1 atIndex:(unsigned)arg2 factor:(double)arg3 ;
-(BOOL)wrapArgumentsWithOperator:(int)arg1 argumentCount:(unsigned)arg2 atIndex:(unsigned)arg3 ;
-(BOOL)fixTableOfConstantsRefs;
-(BOOL)uppercaseArgAtIndex:(unsigned)arg1 ;
-(void)replaceTokenTypeAtIndex:(unsigned)arg1 withType:(int)arg2 ;
-(unsigned)countExtendedDataForTokenAtIndex:(unsigned)arg1 ;
-(id)warningParameter;
-(id)initWithFormula:(id)arg1 ;
-(BOOL)convertTokensToSharedAtRow:(unsigned)arg1 column:(unsigned)arg2 ;
-(BOOL)isContainsRelativeReferences;
-(BOOL)isCleanedWithEvaluationStack;
-(void)updateContainsRelativeReferences:(BOOL)arg1 ;
-(char*)extendedDataForTokenAtIndex:(unsigned)arg1 extendedDataIndex:(unsigned)arg2 length:(unsigned*)arg3 ;
-(BOOL)replaceTokenAtIndex:(unsigned)arg1 withFormula:(id)arg2 formulaTokenIndex:(unsigned)arg3 ;
-(BOOL)removeTokenAtIndex:(unsigned)arg1 ;
-(BOOL)replaceTokenAtIndex:(unsigned)arg1 withFormula:(id)arg2 ;
-(void)updateCleanedWithEvaluationStack:(BOOL)arg1 ;
-(void)setWarningParameter:(id)arg1 ;
-(void)setOriginalFormulaString:(id)arg1 ;
-(BOOL)isSharedFormula;
@end


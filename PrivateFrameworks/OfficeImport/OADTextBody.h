/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:52 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADTextBodyProperties, NSMutableArray, OADTextListStyle;

@interface OADTextBody : NSObject {

	OADTextBodyProperties* mProperties;
	NSMutableArray* mParagraphs;
	OADTextListStyle* mTextListStyle;

}
-(id)findFirstTextRunOfClass:(Class)arg1 ;
-(void)addParagraphsFromTextBody:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)isEmpty;
-(id)properties;
-(void)setProperties:(id)arg1 ;
-(id)paragraphAtIndex:(unsigned long long)arg1 ;
-(id)plainText;
-(unsigned long long)paragraphCount;
-(id)addParagraph;
-(id)overrideTextListStyle;
-(id)textListStyle;
-(void)removeUnnecessaryOverrides;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)flattenProperties;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ownTextListStyle:(BOOL)arg2 ;
-(BOOL)propagateActualTextStyleToTextListStyle;
-(unsigned long long)nonEmptyParagraphCount;
-(void)removeAllParagraphs;
-(unsigned long long)newLineCount;
-(id)firstParagraphEffects;
-(void)applyTextListStyle:(id)arg1 ;
-(void)removeTrailingNewlines;
-(void)removeLeadingNewlines;
-(void)removeLastParagraphIfEmpty;
-(BOOL)isSimilarToTextBody:(id)arg1 ;
@end


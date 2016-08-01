/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:47 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextInputPrivate;
#import <UIKit/UIKit-Structs.h>
@class UIResponder, UITextRange, DOMRange;

@interface UITextSelection : NSObject {

	UIResponder*<UITextInputPrivate> _document;
	long long _granularity;
	UITextRange* _selectedRange;
	UITextRange* _base;
	UITextRange* _initialExtent;
	BOOL _isCommitting;

}

@property (nonatomic,__weak,readonly) UIResponder*<UITextInputPrivate> document;              //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) UITextRange * selectedRange;                                     //@synthesize selectedRange=_selectedRange - In the implementation block
@property (assign,nonatomic) long long granularity;                                           //@synthesize granularity=_granularity - In the implementation block
@property (nonatomic,readonly) BOOL isCommitting;                                             //@synthesize isCommitting=_isCommitting - In the implementation block
@property (nonatomic,retain) UITextRange * base;                                              //@synthesize base=_base - In the implementation block
@property (nonatomic,retain) UITextRange * initialExtent;                                     //@synthesize initialExtent=_initialExtent - In the implementation block
@property (getter=_domRange,nonatomic,readonly) DOMRange * domRange; 
-(void)dealloc;
-(void)invalidate;
-(UITextRange *)selectedRange;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
-(void)commit;
-(void)setSelectedRange:(UITextRange *)arg1 ;
-(void)selectionChanged;
-(void)selectAll;
-(id)selectedText;
-(void)clearSelection;
-(void)collapseSelection;
-(CGRect)caretRect;
-(BOOL)hasEditableSelection;
-(long long)granularity;
-(CGRect)caretRectAtEndOfDocument;
-(CGRect)caretRectAtBeginOfDocument;
-(id)selectionRects;
-(void)alterSelection:(CGPoint)arg1 granularity:(long long)arg2 ;
-(void)setGranularity:(long long)arg1 ;
-(void)alterSelectionGranularity:(long long)arg1 ;
-(void)setRangedSelectionBaseToCurrentSelection;
-(void)clearRangedSelectionInitialExtent;
-(void)setRangedSelectionWithExtentPoint:(CGPoint)arg1 ;
-(void)setHybridSelectionWithPoint:(CGPoint)arg1 ;
-(id)wordContainingCaretSelection;
-(id)_domRange;
-(void)moveCaretToBoundaryOfWhitespaceOrLine;
-(BOOL)pointAtEndOfLine:(CGPoint)arg1 ;
-(void)setSelectionWithFirstPoint:(CGPoint)arg1 secondPoint:(CGPoint)arg2 ;
-(BOOL)setRangedSelectionExtentPoint:(CGPoint)arg1 baseIsStart:(BOOL)arg2 ;
-(void)smartExtendRangedSelection:(int)arg1 downstream:(BOOL)arg2 ;
-(void)setRangedSelectionBaseToCurrentSelectionStart;
-(void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
-(void)setRangedSelectionBaseToCurrentSelectionEnd;
-(void)setRangedSelectionInitialExtentToCurrentSelectionStart;
-(void)aggressivelyExpandSelectionToWordContainingCaretSelection;
-(BOOL)setRangedSelectionExtentPoint:(CGPoint)arg1 baseIsStart:(BOOL)arg2 allowFlipping:(BOOL)arg3 ;
-(BOOL)isCommitting;
-(UIResponder*<UITextInputPrivate>)document;
-(id)initWithDocument:(id)arg1 ;
-(CGPoint)clipPoint:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(UITextRange *)base;
-(void)setBase:(UITextRange *)arg1 ;
-(void)setInitialExtent:(UITextRange *)arg1 ;
-(UITextRange *)initialExtent;
-(CGRect)closestCaretRectForPoint:(CGPoint)arg1 inSelection:(BOOL)arg2 ;
-(unsigned long long)offsetInMarkedText;
-(void)increaseSelectionGranularity;
-(BOOL)pointAtStartOfLine:(CGPoint)arg1 ;
@end

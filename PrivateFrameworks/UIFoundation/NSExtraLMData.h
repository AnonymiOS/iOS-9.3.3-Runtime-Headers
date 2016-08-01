/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSRunStorage, NSLock, NSTextContainer, NSMutableArray, NSLayoutManagerTextBlockRowArrayCache, NSParagraphArbitrator;

@interface NSExtraLMData : NSObject {

	NSRunStorage* _attachmentSizesRun;
	CGRect _currentAttachmentRect;
	unsigned long long _currentAttachmentIndex;
	NSLock* _fillHoleLock;
	NSRunStorage* _fragmentRunsExtras;
	id _temporaryAttributes;
	NSTextContainer* _firstTextContainer;
	CFDictionaryRef _textContainerIndexes;
	CFDictionaryRef _textContainerGlyphIndexes;
	long long _typesetterBehavior;
	CGRect _cachedFontBounds;
	double _cachedUnderlineThickness;
	double _cachedUnderlinePosition;
	double _cachedUnderlineAdjustment;
	NSRange _cachedUnderlineRange;
	NSMutableArray* _blockRunsArray;
	double _hyphenationFactor;
	NSMutableArray* _insertionPointCache;
	NSGlyphTree* _glyphTree;
	NSLayoutTree* _layoutTree;
	NSRange _firstTextViewVisibleCharRange;
	CGSize _firstTextViewVisibleOffset;
	NSRange _lastInvalidatedCharRange;
	double _lastInvalidatedLongitudinalPosition;
	NSTextContainer* _lastInvalidatedTextContainer;
	NSLayoutManagerTextBlockRowArrayCache* _rowArrayCache;
	NSParagraphArbitrator* _paragraphArbitrator;
	struct {
		unsigned glyphCause : 6;
		unsigned layoutCause : 6;
		unsigned delegateRespondsToTempAttrs : 1;
		unsigned processingFirstTextViewVisible : 1;
		unsigned temporarySpacingChange : 1;
		unsigned alwaysDrawsActive : 1;
		unsigned usesOldShowPackedGlyphs : 1;
		unsigned drawsUnderlinesLikeWebKit : 1;
		unsigned drawsDebugBaselines : 1;
		unsigned reserved : 13;
	}  _lmFlags2;

}
@end


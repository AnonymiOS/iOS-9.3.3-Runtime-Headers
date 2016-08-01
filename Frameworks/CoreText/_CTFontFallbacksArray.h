/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:29 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreText/CoreText-Structs.h>
#import <CoreFoundation/NSArray.h>

@class NSArray, NSMutableArray;

@interface _CTFontFallbacksArray : NSArray {

	int _lock;
	const TBaseFont* _baseFont;
	unsigned long long _count;
	NSArray* _cascade;
	NSMutableArray* _fallbacks;
	CharRangeToDescriptorMap* _charMap;

}
-(id)objectAtIndex:(unsigned long long)arg1 shouldLock:(BOOL)arg2 addRanges:(BOOL)arg3 ;
-(id)initWithBaseFont:(const TBaseFont*)arg1 cascade:(id)arg2 ;
-(CTFontDescriptorRef)cachedDescriptorForCharacter:(unsigned short)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CT2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
@end


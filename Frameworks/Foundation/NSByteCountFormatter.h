/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:23 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSObservable.h>
#import <libobjc.A.dylib/NSObserver.h>

@class NSString;

@interface NSByteCountFormatter : NSFormatter <NSObservable, NSObserver> {

	unsigned _allowedUnits;
	char _countStyle;
	BOOL _allowsNonnumericFormatting;
	BOOL _includesUnit;
	BOOL _includesCount;
	BOOL _includesActualByteCount;
	BOOL _adaptive;
	BOOL _zeroPadsFractionDigits;
	int _formattingContext;
	int _reserved[5];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned long long allowedUnits; 
@property (assign) long long countStyle; 
@property (assign) BOOL allowsNonnumericFormatting;                 //@synthesize allowsNonnumericFormatting=_allowsNonnumericFormatting - In the implementation block
@property (assign) BOOL includesUnit;                               //@synthesize includesUnit=_includesUnit - In the implementation block
@property (assign) BOOL includesCount;                              //@synthesize includesCount=_includesCount - In the implementation block
@property (assign) BOOL includesActualByteCount;                    //@synthesize includesActualByteCount=_includesActualByteCount - In the implementation block
@property (getter=isAdaptive) BOOL adaptive;                        //@synthesize adaptive=_adaptive - In the implementation block
@property (assign) BOOL zeroPadsFractionDigits;                     //@synthesize zeroPadsFractionDigits=_zeroPadsFractionDigits - In the implementation block
@property (assign) long long formattingContext; 
+(id)stringFromByteCount:(long long)arg1 countStyle:(long long)arg2 ;
-(void)receiveObservedValue:(id)arg1 ;
-(long long)formattingContext;
-(BOOL)_mayDecorateAttributedStringForObjectValue:(id)arg1 ;
-(unsigned long long)allowedUnits;
-(long long)countStyle;
-(BOOL)allowsNonnumericFormatting;
-(BOOL)includesUnit;
-(BOOL)includesCount;
-(BOOL)includesActualByteCount;
-(BOOL)isAdaptive;
-(BOOL)zeroPadsFractionDigits;
-(void)setAdaptive:(BOOL)arg1 ;
-(void)setAllowsNonnumericFormatting:(BOOL)arg1 ;
-(void)setIncludesUnit:(BOOL)arg1 ;
-(void)setIncludesCount:(BOOL)arg1 ;
-(void)setCountStyle:(long long)arg1 ;
-(void)setIncludesActualByteCount:(BOOL)arg1 ;
-(void)setZeroPadsFractionDigits:(BOOL)arg1 ;
-(id)stringFromByteCount:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)_options;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(void)setFormattingContext:(long long)arg1 ;
-(void)setAllowedUnits:(unsigned long long)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
@end


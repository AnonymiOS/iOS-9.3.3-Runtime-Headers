/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:58 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableAttributedString;

@interface SCROBrailleChunk : NSObject <NSCopying> {

	NSString* _text;
	NSString* _overrideText;
	NSString* _language;
	int _contractionMode;
	BOOL _showEightDot;
	BOOL _isFocused;
	BOOL _isTechnical;
	BOOL _hasTextSelection;
	NSRange _textSelection;
	long long _token;
	BOOL _showDotsSevenAndEight;
	NSMutableAttributedString* _brailleString;
	NSRange _brailleSelection;

}

@property (nonatomic,readonly) NSString * language;              //@synthesize language=_language - In the implementation block
+(void)initialize;
-(void)translate;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)text;
-(BOOL)hasSelection;
-(NSString *)language;
-(long long)token;
-(id)initWithText:(id)arg1 overrideText:(id)arg2 language:(id)arg3 selection:(NSRange*)arg4 token:(long long)arg5 focused:(BOOL)arg6 contractionMode:(int)arg7 showEightDot:(BOOL)arg8 showDotsSevenAndEight:(BOOL)arg9 technical:(BOOL)arg10 ;
-(id)initWithText:(id)arg1 language:(id)arg2 selection:(NSRange*)arg3 token:(long long)arg4 focused:(BOOL)arg5 contractionMode:(int)arg6 showEightDot:(BOOL)arg7 showDotsSevenAndEight:(BOOL)arg8 technical:(BOOL)arg9 ;
-(id)_tableIdentifierForLanguage:(id)arg1 ;
-(void)_translateAsTechnicalTextWithPrimaryTable:(BOOL)arg1 ;
-(void)_translateAsLiteraryTextWithPrimaryTable:(BOOL)arg1 ;
-(id)initWithText:(id)arg1 language:(id)arg2 selection:(NSRange*)arg3 token:(long long)arg4 focused:(BOOL)arg5 contractionMode:(int)arg6 showEightDot:(BOOL)arg7 showDotsSevenAndEight:(BOOL)arg8 ;
-(BOOL)focused;
-(BOOL)isFocusedOrSelected;
-(long long)locationForIndex:(long long)arg1 ;
-(id)brailleWithIBeamLocation:(long long*)arg1 selection:(NSRange*)arg2 ;
@end


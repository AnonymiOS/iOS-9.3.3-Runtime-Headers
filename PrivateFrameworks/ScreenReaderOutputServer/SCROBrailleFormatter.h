/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString;

@interface SCROBrailleFormatter : NSObject <NSCopying> {

	CFArrayRef _chunkArray;
	CFDictionaryRef _chunkDictionary;
	CFDictionaryRef _tokenDictionary;
	long long _firstToken;
	long long _lastToken;
	int _contractionMode;
	BOOL _showEightDot;
	int _displayMode;
	id _appToken;
	NSAttributedString* _statusText;
	BOOL _currentUnread;
	BOOL _anyUnread;
	BOOL _showDotsSevenAndEight;
	int _lineFocus;

}

@property (assign,nonatomic) int lineFocus;              //@synthesize lineFocus=_lineFocus - In the implementation block
-(void)translate;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDisplayMode:(int)arg1 ;
-(int)displayMode;
-(void)setStatusText:(id)arg1 ;
-(id)statusText;
-(id)deepCopyWithZone:(NSZone*)arg1 ;
-(BOOL)anyUnread;
-(BOOL)currentUnread;
-(void)addText:(id)arg1 selection:(NSRange*)arg2 token:(long long)arg3 focused:(BOOL)arg4 ;
-(BOOL)showEightDot;
-(int)contractionMode;
-(id)initWithContractionMode:(int)arg1 showEightDot:(BOOL)arg2 showDotsSevenAndEight:(BOOL)arg3 ;
-(void)setLineFocus:(int)arg1 ;
-(void)addText:(id)arg1 overrideText:(id)arg2 language:(id)arg3 selection:(NSRange*)arg4 token:(long long)arg5 focused:(BOOL)arg6 technical:(BOOL)arg7 ;
-(id)appToken;
-(long long)firstToken;
-(long long)lastToken;
-(void)setCurrentUnread:(BOOL)arg1 ;
-(void)setAnyUnread:(BOOL)arg1 ;
-(void)addText:(id)arg1 selection:(NSRange*)arg2 token:(long long)arg3 focused:(BOOL)arg4 technical:(BOOL)arg5 ;
-(void)setAppToken:(id)arg1 ;
-(void)addText:(id)arg1 language:(id)arg2 selection:(NSRange*)arg3 token:(long long)arg4 focused:(BOOL)arg5 technical:(BOOL)arg6 ;
-(BOOL)showDotsSevenAndEight;
-(int)lineFocus;
-(void)addText:(id)arg1 language:(id)arg2 selection:(NSRange*)arg3 token:(long long)arg4 focused:(BOOL)arg5 ;
-(CFArrayRef)chunkArray;
-(CFDictionaryRef)chunkDictionary;
@end


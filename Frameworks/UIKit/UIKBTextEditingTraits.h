/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UIKBTextEditingTraits : NSObject {

	BOOL _canToggleBoldface;
	BOOL _canToggleItalics;
	BOOL _canToggleUnderline;
	BOOL _supportStyling;
	BOOL _canCut;
	BOOL _canCopy;
	BOOL _canPaste;
	BOOL _canMoveCursorLeft;
	BOOL _canMoveCursorRight;
	BOOL _isBold;
	BOOL _isItalicized;
	BOOL _isUnderlined;

}

@property (nonatomic,readonly) BOOL isBold;                          //@synthesize isBold=_isBold - In the implementation block
@property (nonatomic,readonly) BOOL isItalicized;                    //@synthesize isItalicized=_isItalicized - In the implementation block
@property (nonatomic,readonly) BOOL isUnderlined;                    //@synthesize isUnderlined=_isUnderlined - In the implementation block
@property (nonatomic,readonly) BOOL canToggleBoldface;               //@synthesize canToggleBoldface=_canToggleBoldface - In the implementation block
@property (nonatomic,readonly) BOOL canToggleItalics;                //@synthesize canToggleItalics=_canToggleItalics - In the implementation block
@property (nonatomic,readonly) BOOL canToggleUnderline;              //@synthesize canToggleUnderline=_canToggleUnderline - In the implementation block
@property (nonatomic,readonly) BOOL supportStyling;                  //@synthesize supportStyling=_supportStyling - In the implementation block
@property (assign,nonatomic) BOOL canCut;                            //@synthesize canCut=_canCut - In the implementation block
@property (nonatomic,readonly) BOOL canCopy;                         //@synthesize canCopy=_canCopy - In the implementation block
@property (nonatomic,readonly) BOOL canPaste;                        //@synthesize canPaste=_canPaste - In the implementation block
@property (nonatomic,readonly) BOOL canMoveCursorLeft;               //@synthesize canMoveCursorLeft=_canMoveCursorLeft - In the implementation block
@property (nonatomic,readonly) BOOL canMoveCursorRight;              //@synthesize canMoveCursorRight=_canMoveCursorRight - In the implementation block
+(id)traitsWithResponder:(id)arg1 keyMaskFlags:(unsigned long long)arg2 ;
-(id)initWithResponder:(id)arg1 keyMaskFlags:(unsigned long long)arg2 ;
-(BOOL)canToggleBoldface;
-(BOOL)canToggleItalics;
-(BOOL)canToggleUnderline;
-(BOOL)supportStyling;
-(BOOL)canCut;
-(void)setCanCut:(BOOL)arg1 ;
-(BOOL)canCopy;
-(BOOL)canPaste;
-(BOOL)canMoveCursorLeft;
-(BOOL)canMoveCursorRight;
-(BOOL)isBold;
-(BOOL)isItalicized;
-(BOOL)isUnderlined;
@end


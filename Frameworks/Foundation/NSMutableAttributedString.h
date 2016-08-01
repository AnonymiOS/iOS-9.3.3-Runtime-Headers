/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:22 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSAttributedString.h>

@interface NSMutableAttributedString : NSAttributedString
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)addAttributesWeakly:(id)arg1 range:(NSRange)arg2 ;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(void)removeAttribute:(id)arg1 range:(NSRange)arg2 ;
-(id)mutableString;
-(void)beginEditing;
-(void)endEditing;
-(void)setAttributedString:(id)arg1 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)addAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)appendAttributedString:(id)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end


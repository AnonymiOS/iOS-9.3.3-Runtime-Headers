/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OIXMLNode.h>

@interface OIXMLElement : OIXMLNode {

	id _attributes;
	id _children;
	BOOL _hasMultipleAttributes;
	BOOL _hasMultipleChildren;

}
+(void)_initEmptyHTMLNames;
+(BOOL)isEmptyHTMLElement:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setObjectValue:(id)arg1 ;
-(id)objectValue;
-(id)stringValue;
-(void)addAttribute:(id)arg1 ;
-(void)addChild:(id)arg1 ;
-(id)openingTagString;
-(id)closingTagString;
-(long long)childrenCount;
-(id)initWithName:(id)arg1 stringValue:(id)arg2 ;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_appendXMLStringToString:(CFStringRef)arg1 level:(int)arg2 ;
-(id)contentString;
-(long long)attributeCount;
@end


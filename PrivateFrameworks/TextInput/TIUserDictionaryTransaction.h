/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIUserDictionaryEntryValue;

@interface TIUserDictionaryTransaction : NSObject <NSSecureCoding> {

	TIUserDictionaryEntryValue* _valueToDelete;
	TIUserDictionaryEntryValue* _valueToInsert;

}

@property (nonatomic,retain) TIUserDictionaryEntryValue * valueToDelete;              //@synthesize valueToDelete=_valueToDelete - In the implementation block
@property (nonatomic,retain) TIUserDictionaryEntryValue * valueToInsert;              //@synthesize valueToInsert=_valueToInsert - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setValueToDelete:(TIUserDictionaryEntryValue *)arg1 ;
-(void)setValueToInsert:(TIUserDictionaryEntryValue *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(TIUserDictionaryEntryValue *)valueToInsert;
-(TIUserDictionaryEntryValue *)valueToDelete;
@end


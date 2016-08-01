/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:21 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableArray, NSError;

@interface _NSKeyedUnarchiverHelper : NSObject {

	NSArray* _white;
	unsigned _lastRef;
	NSMutableArray* _allowedClasses;
	NSError* _decodeError;

}

@property (copy) NSError * decodeError;              //@synthesize decodeError=_decodeError - In the implementation block
-(id)allowedClassNames;
-(void)setAllowedClassNames:(id)arg1 ;
-(BOOL)classNameAllowed:(Class)arg1 ;
-(NSError *)decodeError;
-(void)setDecodeError:(NSError *)arg1 ;
-(void)dealloc;
-(id)init;
@end


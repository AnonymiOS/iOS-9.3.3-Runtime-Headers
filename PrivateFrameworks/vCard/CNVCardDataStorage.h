/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:14 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNVCardSerializationStorage.h>

@class NSMutableData, NSString;

@interface CNVCardDataStorage : NSObject <CNVCardSerializationStorage> {

	NSMutableData* _data;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)storageWithData:(id)arg1 ;
-(void)appendString:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)insertionMarker;
-(unsigned long long)estimatedDataLength;
-(void)insertString:(id)arg1 atMarker:(id)arg2 ;
-(unsigned long long)currentLength;
-(void)appendString:(id)arg1 usingEncoding:(unsigned long long)arg2 ;
@end


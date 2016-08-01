/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface RadioSearchStationResult : NSObject <NSCopying> {

	NSDictionary* _highlightRanges;
	NSDictionary* _stationDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * highlightRanges;                //@synthesize highlightRanges=_highlightRanges - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stationDictionary;              //@synthesize stationDictionary=_stationDictionary - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)highlightRanges;
-(NSDictionary *)stationDictionary;
-(id)_initWithResponseDictionary:(id)arg1 ;
@end


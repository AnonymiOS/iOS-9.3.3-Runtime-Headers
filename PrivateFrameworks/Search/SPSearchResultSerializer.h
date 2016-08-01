/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SPSearchResultSerializer : NSObject {

	unsigned long long _byteVector;
	unsigned _byteVectorCnt;
	unsigned _byteVectorCapacity;
	NSMutableArray* _sections;
	Class _lastResultClass;
	BOOL _respondsToTitleUTF8String;
	BOOL _respondsToSubtitleUTF8String;
	BOOL _respondsToAuxiliaryTitleUTF8String;
	BOOL _respondsToAuxiliarySubtitleUTF8String;
	BOOL _respondsToSummaryUTF8String;
	BOOL _respondsToIdentifier;
	BOOL _respondsToURL;
	BOOL _respondsToBadgeValue;
	BOOL _inProc;
	BOOL _completed;
	BOOL _forForwarding;

}

@property (nonatomic,readonly) BOOL completed;              //@synthesize completed=_completed - In the implementation block
-(BOOL)completed;
-(void)dealloc;
-(id)init;
-(unsigned long long)sectionCount;
-(id)initWithInitialCapacity:(unsigned)arg1 inProc:(BOOL)arg2 ;
-(unsigned long long)_allocateSize:(unsigned long long)arg1 ;
-(id)_convertConformingResult:(id)arg1 ;
-(BOOL)lockedAppendResult:(id)arg1 toSection:(id)arg2 ;
-(id)initWithInitialCapacity:(unsigned)arg1 ;
-(BOOL)appendSerializer:(id)arg1 ;
-(id)getSections;
-(BOOL)appendResult:(id)arg1 ;
-(unsigned)byteVectorCount;
-(unsigned long long)byteVector;
-(BOOL)appendSection:(id)arg1 ;
-(void)serialize;
@end


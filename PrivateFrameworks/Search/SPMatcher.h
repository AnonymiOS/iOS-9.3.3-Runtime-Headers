/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SPMatcher : NSObject {

	void* _matcher;

}
+(id)transcriptionForString:(id)arg1 withLanguage:(id)arg2 ;
-(BOOL)matches:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)wordCount;
-(BOOL)matchesUTF8String:(const char*)arg1 ;
-(id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(unsigned long long)arg3 ;
-(BOOL)matches:(id)arg1 outMatchBits:(unsigned long long*)arg2 ;
-(BOOL)matchesUTF8String:(const char*)arg1 outMatchBits:(unsigned long long*)arg2 ;
@end


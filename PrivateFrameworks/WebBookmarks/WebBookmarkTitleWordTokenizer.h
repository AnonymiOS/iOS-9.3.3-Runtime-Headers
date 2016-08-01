/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:29 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebBookmarks/WebBookmarks-Structs.h>
@class NSString, TIWordTokenizer;

@interface WebBookmarkTitleWordTokenizer : NSObject {

	NSString* _string;
	unsigned long long _stringLength;
	TIWordTokenizer* _wordTokenizer;
	NSRange _rangeOfNextToken;
	unsigned long long _startOfUnclassifiedRangeBeforeNextToken;

}
+(void)initialize;
-(id)init;
-(void)setString:(id)arg1 ;
-(NSRange)advanceToNextToken;
@end


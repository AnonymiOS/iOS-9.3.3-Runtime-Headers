/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:20 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRegularExpression;

@interface WBSParsecResultSetPattern : NSObject {

	NSRegularExpression* _regularExpression;

}
+(id)_regularExpressionPatternForToken:(id)arg1 ;
+(id)_nextTokenInResultSetPattern:(id)arg1 ;
+(id)_regularExpressionPatternForResultSetPatternSuffix:(id)arg1 ;
+(id)_regularExpressionPatternFromResultSetPattern:(id)arg1 ;
+(id)patternWithString:(id)arg1 ;
-(id)_initWithRegularExpression:(id)arg1 ;
-(BOOL)isMatchedByString:(id)arg1 ;
@end


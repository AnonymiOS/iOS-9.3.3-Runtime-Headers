/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/APFormatter.h>

@interface MinMaxIntFormatter : APFormatter {

	long long _minimum;
	long long _maximum;

}
+(id)formatterForMin:(long long)arg1 max:(long long)arg2 ;
-(BOOL)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(long long)minimum;
-(void)setMinimum:(long long)arg1 ;
-(long long)maximum;
-(void)setMaximum:(long long)arg1 ;
-(id)initWithMin:(long long)arg1 max:(long long)arg2 ;
@end


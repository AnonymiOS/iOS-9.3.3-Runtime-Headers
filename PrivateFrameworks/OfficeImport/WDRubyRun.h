/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:56 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDCharacterRun.h>

@class WDCharacterRun, WDRubyProperties;

@interface WDRubyRun : WDCharacterRun {

	WDCharacterRun* mPhoneticRun;
	WDRubyProperties* mRubyProperties;

}
-(void)dealloc;
-(id)description;
-(int)runType;
-(id)initWithParagraph:(id)arg1 ;
-(id)rubyProperties;
-(id)phoneticRun;
-(id)phoneticRunString;
-(void)setPhoneticRunString:(id)arg1 ;
-(void)appendPhoneticRunString:(id)arg1 ;
-(id)rubyBase;
@end


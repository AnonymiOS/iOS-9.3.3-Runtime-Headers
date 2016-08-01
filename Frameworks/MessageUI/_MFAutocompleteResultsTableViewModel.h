/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:07 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@class NSMutableDictionary;

@interface _MFAutocompleteResultsTableViewModel : NSObject {

	NSMutableDictionary* _sections;
	unsigned long long _numberOfSections;

}

@property (assign,nonatomic) unsigned long long numberOfSections;                        //@synthesize numberOfSections=_numberOfSections - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfNonEmptySections; 
-(void)dealloc;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSections;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(void)enumerateSections:(/*^block*/id)arg1 ;
-(void)setNumberOfSections:(unsigned long long)arg1 ;
-(void)setSection:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)numberOfNonEmptySections;
-(id)initWithNumberOfSections:(unsigned long long)arg1 ;
-(SCD_Struct_MF8)computeDiffForModel:(id)arg1 ;
@end


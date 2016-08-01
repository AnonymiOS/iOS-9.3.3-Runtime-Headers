/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSDictionary;

@interface ISSoftwareCapabilitiesDialogOperation : ISOperation {

	NSDictionary* _mismatches;
	id _requiredCapabilities;

}

@property (readonly) NSDictionary * mismatches; 
@property (readonly) id requiredCapabilities; 
-(void)dealloc;
-(void)run;
-(void)_postDefaultDialog;
-(NSDictionary *)mismatches;
-(id)initWithRequiredCapabilities:(id)arg1 mismatches:(id)arg2 ;
-(id)requiredCapabilities;
@end


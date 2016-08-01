/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSFormsMetadataProvider.h>

@class NSArray, NSString;

@interface WBUFormsMetadataProviderWK1 : NSObject <WBSFormsMetadataProvider> {

	NSArray* _framesForAllForms;
	NSArray* _metadataForAllForms;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long formCount; 
+(id)metadataProviderWithFrames:(id)arg1 metadataForAllForms:(id)arg2 ;
-(void)enumerateFormsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)formCount;
-(id)initWithFrames:(id)arg1 metadataForAllForms:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:35 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDPreviewAction.h>
#import <libobjc.A.dylib/SFSafariViewControllerDelegate.h>

@class NSString;

@interface DDURLPreviewAction : DDPreviewAction <SFSafariViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)handlesUrl:(id)arg1 result:(DDResultRef)arg2 ;
+(id)validatedURLWithURL:(id)arg1 result:(DDResultRef)arg2 ;
-(void)setPreviewMode:(BOOL)arg1 ;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(id)createViewController;
-(id)commitURL;
-(BOOL)requiresEmbeddingNavigationController;
@end


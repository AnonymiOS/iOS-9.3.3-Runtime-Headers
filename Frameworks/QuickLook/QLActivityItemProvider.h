/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIActivityItemSource.h>

@protocol QLPreviewItem;
@class QLPrintPageRenderer, NSString;

@interface QLActivityItemProvider : NSObject <UIActivityItemSource> {

	id<QLPreviewItem> _activityPreviewItem;
	QLPrintPageRenderer* _printPageRenderer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)printInfo;
-(void)setPrintPageRenderer:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewControllerPlaceholderItems:(id)arg1 ;
-(id)_pdfPreviewDataAtURL:(id)arg1 ;
-(BOOL)_canPrint;
-(void)setPreviewItem:(id)arg1 ;
@end


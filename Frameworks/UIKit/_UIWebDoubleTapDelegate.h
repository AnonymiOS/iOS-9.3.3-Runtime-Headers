/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIWebDoubleTapDelegate
@optional
-(void)willZoomToMinimumScale;
-(BOOL)shouldSelectionAssistantReceiveDoubleTapAtPoint:(CGPoint)arg1 forScale:(double)arg2;
-(void)willZoomToLocation:(CGPoint)arg1 atScale:(double)arg2 forDuration:(double)arg3;

@required
-(id)contentView;
-(double)minimumScaleForSize:(CGSize)arg1;
-(id)enclosingScrollView;
-(double)zoomedDocumentScale;
-(double)currentDocumentScale;
-(CGRect*)visibleContentRect;
-(CGRect*)rectOfInterestForPoint:(CGPoint)arg1;
-(SCD_Struct_UI43*)doubleTapScalesForSize:(CGSize)arg1;
-(BOOL)considerHeightForDoubleTap;

@end


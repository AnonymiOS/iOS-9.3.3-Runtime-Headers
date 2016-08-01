/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLRemotePreviewContentControllerProtocol <QLPreviewContentControllerProtocol>
@required
-(void)_willTransitionToSize:(CGSize)arg1;
-(void)_setNavigationBarVerticalOffset:(double)arg1;
-(void)_setNumberOfPreviewItems:(long long)arg1;
-(void)_dismissTransitionIsReadyToFinish;
-(void)_setTransitioning:(BOOL)arg1;
-(void)_getNumberOfPagesForSize:(CGSize)arg1 withHandler:(/*^block*/id)arg2;
-(void)_prepareForDrawingPages:(NSRange)arg1 withSize:(CGSize)arg2;
-(void)_getPDFPageAtIndex:(long long)arg1 handler:(/*^block*/id)arg2;

@end

/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:13 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIScrollViewDelegate <NSObject>
@optional
-(void)scrollViewDidScroll:(id)arg1;
-(void)scrollViewDidZoom:(id)arg1;
-(void)scrollViewWillBeginDragging:(id)arg1;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)scrollViewWillBeginDecelerating:(id)arg1;
-(void)scrollViewDidEndDecelerating:(id)arg1;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1;
-(id)viewForZoomingInScrollView:(id)arg1;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1;
-(void)scrollViewDidScrollToTop:(id)arg1;

@end


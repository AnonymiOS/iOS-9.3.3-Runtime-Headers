/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:45 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIScrollNotification.h>

@protocol _UIScrollNotification;
@class UIScrollView, NSString;

@interface _UISearchControllerDidScrollDelegate : NSObject <_UIScrollNotification> {

	id<_UIScrollNotification> _controller;
	UIScrollView* _scrollView;

}

@property (assign,nonatomic,__weak) id<_UIScrollNotification> controller;              //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * scrollView;                         //@synthesize scrollView=_scrollView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)_updateBackdropMaskViewsInScrollView:(id)arg1 ;
-(void)_didScroll;
-(id<_UIScrollNotification>)controller;
-(void)setController:(id<_UIScrollNotification>)arg1 ;
@end


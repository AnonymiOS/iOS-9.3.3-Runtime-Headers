/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIProgressIndicator, UILabel, UIImageView, UIWindow;

@interface UIProgressHUD : UIView {

	UIProgressIndicator* _progressIndicator;
	UILabel* _progressMessage;
	UIImageView* _doneView;
	UIWindow* _parentWindow;
	struct {
		unsigned isShowing : 1;
		unsigned isShowingText : 1;
		unsigned fixedFrame : 1;
		unsigned reserved : 30;
	}  _progressHUDFlags;

}
-(void)show:(BOOL)arg1 ;
-(id)initWithWindow:(id)arg1 ;
-(void)hide;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setText:(id)arg1 ;
-(void)setFontSize:(int)arg1 ;
-(id)_progressIndicator;
-(void)setShowsText:(BOOL)arg1 ;
-(void)showInView:(id)arg1 ;
-(void)done;
@end


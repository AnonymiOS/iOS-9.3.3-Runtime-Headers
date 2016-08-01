/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/RUIWebContainerViewDelegate.h>
#import <RemoteUI/RemoteUITableFooter.h>

@protocol RUITableFooterDelegate;
@class RUIWebContainerView, NSURL, NSString;

@interface RUIHTMLFooterView : UIView <RUIWebContainerViewDelegate, RemoteUITableFooter> {

	RUIWebContainerView* _webContainerView;
	id<RUITableFooterDelegate> _delegate;
	NSURL* _baseURL;

}

@property (assign,nonatomic,__weak) id<RUITableFooterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                         //@synthesize baseURL=_baseURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<RUITableFooterDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<RUITableFooterDelegate>)delegate;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2 ;
-(double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(void)setText:(id)arg1 attributes:(id)arg2 ;
@end


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
#import <RemoteUI/RemoteUITableHeader.h>

@protocol RUITableHeaderDelegate;
@class RUIWebContainerView, NSURL, NSString;

@interface RUIHTMLHeaderView : UIView <RUIWebContainerViewDelegate, RemoteUITableHeader> {

	RUIWebContainerView* _webContainerView;
	BOOL _isFirstSection;
	id<RUITableHeaderDelegate> _delegate;
	NSURL* _baseURL;

}

@property (assign,nonatomic,__weak) id<RUITableHeaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                         //@synthesize baseURL=_baseURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<RUITableHeaderDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<RUITableHeaderDelegate>)delegate;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2 ;
-(void)setText:(id)arg1 attributes:(id)arg2 ;
-(void)setSectionIsFirst:(BOOL)arg1 ;
-(double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol ABStyleProvider, ABPersonTableTinyActionDelegate;
@class ABPersonTableActionDataSource, UIView;

@interface ABPersonTableTinyActionCell : UITableViewCell {

	ABPersonTableActionDataSource* _actionDataSource;
	UIView* _tinyActionContentView;
	id<ABStyleProvider> _styleProvider;
	id<ABPersonTableTinyActionDelegate> _delegate;

}

@property (nonatomic,retain) ABPersonTableActionDataSource * actionDataSource;              //@synthesize actionDataSource=_actionDataSource - In the implementation block
@property (readonly) unsigned long long actionsCount; 
@property (nonatomic,retain) id<ABStyleProvider> styleProvider;                             //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) id<ABPersonTableTinyActionDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<ABPersonTableTinyActionDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<ABPersonTableTinyActionDelegate>)delegate;
-(void)setBackgroundView:(id)arg1 ;
-(unsigned long long)actionsCount;
-(ABPersonTableActionDataSource *)actionDataSource;
-(void)refreshActions;
-(id)_tinyActionContentView;
-(void)_resizeInnerContentView;
-(void)setActionDataSource:(ABPersonTableActionDataSource *)arg1 ;
-(id<ABStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
@end

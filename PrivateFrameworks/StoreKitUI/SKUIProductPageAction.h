/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKUIItem, NSString, NSURL, UIViewController;

@interface SKUIProductPageAction : NSObject {

	long long _actionType;
	SKUIItem* _item;
	NSString* _urlTitle;
	/*^block*/id _viewControllerBlock;
	NSURL* _url;

}

@property (assign,nonatomic) long long actionType;                             //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) SKUIItem * item;                                  //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                        //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) id viewControllerBlock;                             //@synthesize viewControllerBlock=_viewControllerBlock - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController; 
+(id)actionWithType:(long long)arg1 ;
-(SKUIItem *)item;
-(UIViewController *)viewController;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setItem:(SKUIItem *)arg1 ;
-(void)setActionType:(long long)arg1 ;
-(id)viewControllerBlock;
-(void)setViewControllerBlock:(id)arg1 ;
-(long long)actionType;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITabBarController.h>

@class NSArray, NSString;

@interface MPUTabBarController : UITabBarController {

	NSArray* _customizableViewControllerIdentifiers;
	Class _viewControllerFactoryClass;
	NSArray* _viewControllerIdentifiers;

}

@property (assign,nonatomic,__weak) id<MPUTabBarControllerDelegate> delegate; 
@property (nonatomic,copy) NSArray * customizableViewControllerIdentifiers;                //@synthesize customizableViewControllerIdentifiers=_customizableViewControllerIdentifiers - In the implementation block
@property (nonatomic,readonly) NSArray * filteredViewControllerIdentifiers; 
@property (nonatomic,copy) NSString * selectedViewControllerIdentifier; 
@property (nonatomic,retain) Class viewControllerFactoryClass;                             //@synthesize viewControllerFactoryClass=_viewControllerFactoryClass - In the implementation block
@property (nonatomic,copy) NSArray * viewControllerIdentifiers;                            //@synthesize viewControllerIdentifiers=_viewControllerIdentifiers - In the implementation block
+(Class)_moreNavigationControllerClass;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldSelectViewController:(id)arg1 ;
-(void)_reloadTabBarFromIdentifiersAnimated:(BOOL)arg1 ;
-(id)_identifierForViewControllerAtIndex:(unsigned long long)arg1 ;
-(Class)viewControllerFactoryClass;
-(id)_existingViewControllerForIdentifier:(id)arg1 ;
-(void)setViewControllerIdentifiers:(id)arg1 animated:(BOOL)arg2 ;
-(id)_identifierForViewController:(id)arg1 ;
-(NSArray *)viewControllerIdentifiers;
-(id)_viewControllerForIdentifier:(id)arg1 ;
-(NSArray *)customizableViewControllerIdentifiers;
-(BOOL)presentModalViewControllerIfAppropriate:(id)arg1 ;
-(void)reloadTabsAnimated:(BOOL)arg1 ;
-(void)reloadTabsPurgingExistingTabs:(BOOL)arg1 ;
-(void)setCustomizableViewControllerIdentifiers:(NSArray *)arg1 ;
-(NSArray *)filteredViewControllerIdentifiers;
-(NSString *)selectedViewControllerIdentifier;
-(void)setSelectedViewControllerIdentifier:(NSString *)arg1 ;
-(void)setViewControllerIdentifiers:(NSArray *)arg1 ;
-(void)setViewControllerFactoryClass:(Class)arg1 ;
@end


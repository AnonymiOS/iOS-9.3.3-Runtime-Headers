/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:45 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIForceTransitioningDelegate.h>

@class UIInteractionProgress, NSString;

@interface _UIAlertControllerTransitioningDelegate : NSObject <UIForceTransitioningDelegate> {

	UIInteractionProgress* interactionProgressForPresentation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIInteractionProgress * interactionProgressForPresentation; 
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setInteractionProgressForPresentation:(UIInteractionProgress *)arg1 ;
-(UIInteractionProgress *)interactionProgressForPresentation;
-(id)_interactionControllerForTransitionOfType:(long long)arg1 forAlertController:(id)arg2 ;
@end


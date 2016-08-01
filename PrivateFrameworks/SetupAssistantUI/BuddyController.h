/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BuddyController <NSObject>
@optional
+(BOOL)controllerNeedsToRun;
+(void)skip;
-(id)viewController;
-(void)controllerWasPopped;
-(BOOL)controllerAllowsNavigatingBack;
-(void)startOver;
-(BOOL)shouldAllowStartOver;
-(void)willDisplayStartOver;
-(void)removeFromNavHierarchyOf:(id)arg1;
-(void)performExtendedInitializationWithCompletion:(/*^block*/id)arg1;
-(BOOL)shouldSuppressExtendedInitializationActivityIndicator;

@required
-(void)setDelegate:(id)arg1;

@end

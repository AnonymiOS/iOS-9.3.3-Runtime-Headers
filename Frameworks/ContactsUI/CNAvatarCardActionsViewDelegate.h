/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAvatarCardActionsViewDelegate <NSObject>
@optional
-(id)cardActionsView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
-(void)cardActionsView:(id)arg1 willShowActions:(id)arg2;
-(void)cardActionsView:(id)arg1 didShowActions:(id)arg2;
-(void)dismissViewControllerForCardActionsView:(id)arg1 animated:(BOOL)arg2;

@required
-(id)viewControllerForCardActionsView:(id)arg1;

@end


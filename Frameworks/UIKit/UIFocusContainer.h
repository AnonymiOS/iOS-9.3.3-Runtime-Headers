/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol UIFocusContainer <NSObject>
@property (nonatomic,readonly) id<UIFocusContainer> preferredFocusedItem; 
@property (nonatomic,readonly) UIView * focusedView; 
@required
-(UIView *)focusedView;
-(void)setNeedsPreferredFocusedItemUpdate;
-(void)updatePreferredFocusedItemIfNeeded;
-(BOOL)isAncestorOfItem:(id)arg1;
-(id<UIFocusContainer>)preferredFocusedItem;
-(BOOL)shouldChangeFocusedItem:(id)arg1 heading:(unsigned long long)arg2;
-(void)focusedViewWillChange;
-(void)focusedViewDidChange;
-(BOOL)shouldChangeFocusedItem:(id)arg1;

@end


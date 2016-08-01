/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIFocusGuide.h>

@class NSMapTable;

@interface UIFocusContainerGuide : UIFocusGuide {

	BOOL _shouldPreferNearestSubview;
	BOOL _automaticallyDisableWhenContainingFocus;
	NSMapTable* _preferredFocusedViewMapTable;

}

@property (assign,nonatomic) BOOL shouldPreferNearestSubview;                           //@synthesize shouldPreferNearestSubview=_shouldPreferNearestSubview - In the implementation block
@property (assign,nonatomic) BOOL automaticallyDisableWhenContainingFocus;              //@synthesize automaticallyDisableWhenContainingFocus=_automaticallyDisableWhenContainingFocus - In the implementation block
@property (nonatomic,retain) NSMapTable * preferredFocusedViewMapTable;                 //@synthesize preferredFocusedViewMapTable=_preferredFocusedViewMapTable - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)_focusRegionIsEligibleForFocus;
-(id)preferredFocusedViewForHeading:(unsigned long long)arg1 ;
-(BOOL)shouldPreferNearestSubview;
-(NSMapTable *)preferredFocusedViewMapTable;
-(void)setPreferredFocusedView:(id)arg1 forHeading:(unsigned long long)arg2 ;
-(void)_didUpdateFocusToPreferredFocusedViewForHeading:(unsigned long long)arg1 ;
-(void)setShouldPreferNearestSubview:(BOOL)arg1 ;
-(BOOL)automaticallyDisableWhenContainingFocus;
-(void)setAutomaticallyDisableWhenContainingFocus:(BOOL)arg1 ;
-(void)setPreferredFocusedViewMapTable:(NSMapTable *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIStoryboardSegueTemplate.h>

@interface UIStoryboardModalSegueTemplate : UIStoryboardSegueTemplate {

	BOOL _useDefaultModalPresentationStyle;
	BOOL _useDefaultModalTransitionStyle;
	long long _modalPresentationStyle;
	long long _modalTransitionStyle;

}

@property (assign,nonatomic) BOOL useDefaultModalPresentationStyle;              //@synthesize useDefaultModalPresentationStyle=_useDefaultModalPresentationStyle - In the implementation block
@property (assign,nonatomic) BOOL useDefaultModalTransitionStyle;                //@synthesize useDefaultModalTransitionStyle=_useDefaultModalTransitionStyle - In the implementation block
@property (assign,nonatomic) long long modalPresentationStyle;                   //@synthesize modalPresentationStyle=_modalPresentationStyle - In the implementation block
@property (assign,nonatomic) long long modalTransitionStyle;                     //@synthesize modalTransitionStyle=_modalTransitionStyle - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)modalPresentationStyle;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(long long)modalTransitionStyle;
-(void)setModalTransitionStyle:(long long)arg1 ;
-(/*^block*/id)newDefaultPerformHandlerForSegue:(id)arg1 ;
-(BOOL)useDefaultModalPresentationStyle;
-(BOOL)useDefaultModalTransitionStyle;
-(void)setUseDefaultModalPresentationStyle:(BOOL)arg1 ;
-(void)setUseDefaultModalTransitionStyle:(BOOL)arg1 ;
@end


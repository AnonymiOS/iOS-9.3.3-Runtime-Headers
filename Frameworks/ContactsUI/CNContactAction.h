/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNContactActionDelegate;
@class CNContact, NSString, UIColor, CNMutableContact;

@interface CNContactAction : NSObject {

	BOOL _destructive;
	id<CNContactActionDelegate> _delegate;
	CNContact* _contact;
	NSString* _title;
	id _target;
	SEL _selector;
	UIColor* _color;
	long long _transportType;

}

@property (assign,nonatomic,__weak) id<CNContactActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                      //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) CNMutableContact * mutableContact; 
@property (nonatomic,copy,readonly) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) id target;                                              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;                                           //@synthesize selector=_selector - In the implementation block
@property (assign,getter=isDestructive,nonatomic) BOOL destructive;                    //@synthesize destructive=_destructive - In the implementation block
@property (nonatomic,retain) UIColor * color;                                          //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) long long transportType;                                  //@synthesize transportType=_transportType - In the implementation block
+(id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4 ;
+(id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)setDelegate:(id<CNContactActionDelegate>)arg1 ;
-(id)description;
-(id<CNContactActionDelegate>)delegate;
-(NSString *)title;
-(id)target;
-(SEL)selector;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(BOOL)isDestructive;
-(void)setDestructive:(BOOL)arg1 ;
-(long long)transportType;
-(void)setTransportType:(long long)arg1 ;
-(void)performActionWithSender:(id)arg1 ;
-(id)initWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4 ;
-(CNMutableContact *)mutableContact;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)initWithContact:(id)arg1 ;
@end


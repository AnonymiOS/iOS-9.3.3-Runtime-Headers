/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:13 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptNativeObject.h>

@class NSString, UIImage;

@interface SUScriptButtonNativeObject : SUScriptNativeObject {

	BOOL _loading;
	NSString* _subtitle;
	NSString* _styleString;
	NSString* _systemItemString;

}

@property (getter=isShowingConfirmation,nonatomic,readonly) BOOL showingConfirmation; 
@property (nonatomic,readonly) int buttonType; 
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                        //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,readonly) NSString * systemItemString;                                        //@synthesize systemItemString=_systemItemString - In the implementation block
@property (assign,nonatomic) long long tag; 
@property (nonatomic,retain) NSString * title; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) UIEdgeInsets imageInsets; 
@property (getter=isBackButton,nonatomic,readonly) BOOL backButton; 
@property (nonatomic,readonly) NSString * styleString; 
+(id)objectWithDefaultButtonForScriptButton:(id)arg1 ;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(NSString *)subtitle;
-(int)buttonType;
-(NSString *)styleString;
-(void)setSubtitle:(NSString *)arg1 ;
-(BOOL)isLoading;
-(BOOL)isBackButton;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)imageInsets;
-(id)initWithSystemItemString:(id)arg1 ;
-(void)configureFromScriptButtonNativeObject:(id)arg1 ;
-(void)hideConfirmationAnimated:(BOOL)arg1 ;
-(void)disconnectButtonAction;
-(void)connectButtonAction;
-(void)setStyleFromString:(id)arg1 ;
-(void)showConfirmationWithTitle:(id)arg1 animated:(BOOL)arg2 ;
-(NSString *)systemItemString;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)isShowingConfirmation;
-(void)buttonAction:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKit/UIPreviewActionItem.h>

@class NSString, UIColor, UIImage, NSArray;

@interface UIPreviewActionGroup : NSObject <NSCopying, UIPreviewActionItem> {

	NSString* _title;
	NSString* _identifier;
	long long _style;
	UIColor* _color;
	UIImage* _image;
	NSArray* _actions;

}

@property (nonatomic,copy) NSString * title;                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long style;                                                  //@synthesize style=_style - In the implementation block
@property (setter=_setColor:,getter=_color,nonatomic,retain) UIColor * color;                  //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                  //@synthesize image=_image - In the implementation block
@property (setter=_setActions:,getter=_actions,nonatomic,copy) NSArray * actions;              //@synthesize actions=_actions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_actionGroupWithPreviewMenuItemWithSubactions:(id)arg1 ;
+(id)actionGroupWithTitle:(id)arg1 style:(long long)arg2 actions:(id)arg3 ;
+(id)_actionGroupWithTitle:(id)arg1 style:(long long)arg2 color:(id)arg3 actions:(id)arg4 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)_actions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)image;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)_setColor:(id)arg1 ;
-(id)_color;
-(void)_setActions:(id)arg1 ;
@end


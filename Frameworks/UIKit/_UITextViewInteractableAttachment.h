/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:52 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UITextViewInteractableItem.h>

@class NSTextAttachment;

@interface _UITextViewInteractableAttachment : _UITextViewInteractableItem {

	NSTextAttachment* _attachment;

}

@property (nonatomic,retain) NSTextAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
+(id)interactableLinkWithAttachment:(id)arg1 range:(NSRange)arg2 ;
-(id)_image;
-(id)actions;
-(id)localizedTitle;
-(void)setAttachment:(NSTextAttachment *)arg1 ;
-(NSTextAttachment *)attachment;
-(BOOL)allowInteraction;
-(id)defaultAction;
-(void)_copyImage;
-(void)_saveToCameraRoll;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:47 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicStoreUI/MusicStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString;

@interface MSTrackListCopyrightFooterView : UIView {

	CGSize _textSize;
	NSString* _text;

}

@property (nonatomic,retain) NSString * text;              //@synthesize text=_text - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)sizeToFit;
-(CGSize)_textSize;
@end


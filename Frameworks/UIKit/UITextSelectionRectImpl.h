/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:45 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextSelectionRect.h>

@class WebSelectionRect;

@interface UITextSelectionRectImpl : UITextSelectionRect {

	WebSelectionRect* webRect;

}

@property (nonatomic,retain) WebSelectionRect * webRect; 
+(id)rectsWithWebRects:(id)arg1 ;
+(id)rectWithWebRect:(id)arg1 ;
-(void)dealloc;
-(WebSelectionRect *)webRect;
-(CGRect)rect;
-(id)range;
-(long long)writingDirection;
-(BOOL)containsStart;
-(BOOL)containsEnd;
-(BOOL)isVertical;
-(void)setWebRect:(WebSelectionRect *)arg1 ;
-(id)initWithWebRect:(id)arg1 ;
@end


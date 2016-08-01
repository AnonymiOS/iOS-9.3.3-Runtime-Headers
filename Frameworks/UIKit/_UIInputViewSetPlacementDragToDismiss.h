/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIInputViewSetPlacementOnScreen.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UIInputViewSetPlacementDragToDismiss : UIInputViewSetPlacementOnScreen <NSSecureCoding> {

	double _offset;

}

@property (assign,nonatomic) double offset;              //@synthesize offset=_offset - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)placementWithOffset:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isInteractive;
-(void)setOffset:(double)arg1 ;
-(double)offset;
-(id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
@end


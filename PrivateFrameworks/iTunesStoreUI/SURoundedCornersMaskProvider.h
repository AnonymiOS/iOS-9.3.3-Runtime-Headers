/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:13 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUMaskProvider.h>

@interface SURoundedCornersMaskProvider : SUMaskProvider {

	double _cornerRadius;

}

@property (assign,nonatomic) double cornerRadius;              //@synthesize cornerRadius=_cornerRadius - In the implementation block
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(CGPathRef)copyPathForMaskWithSize:(CGSize)arg1 ;
@end


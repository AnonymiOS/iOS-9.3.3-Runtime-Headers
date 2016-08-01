/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:55 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUIClearBackgroundCell.h>

@class NSURL, UIImage, CALayer;

@interface SiriUIPhotoCollectionViewCell : SiriUIClearBackgroundCell {

	NSURL* _photoURL;
	UIImage* _image;
	CALayer* _imageLayer;

}
+(id)reuseIdentifier;
-(void)setImage:(id)arg1 ;
-(void)prepareForReuse;
-(void)setImageURL:(id)arg1 ;
@end


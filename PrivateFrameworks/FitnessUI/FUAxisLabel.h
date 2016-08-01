/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor;

@interface FUAxisLabel : NSObject {

	NSString* _text;
	id _location;
	UIColor* _labelColor;

}

@property (nonatomic,retain) NSString * text;                   //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) id location;                       //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) UIColor * labelColor;              //@synthesize labelColor=_labelColor - In the implementation block
-(id)description;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)location;
-(void)setLocation:(id)arg1 ;
-(void)setLabelColor:(UIColor *)arg1 ;
-(UIColor *)labelColor;
@end

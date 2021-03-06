/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIFont;

@interface TopoNumberBadge : CALayer {

	id _owningView;
	long long _count;
	CGSize _imageSize;
	CGSize _textSize;
	UIFont* _font;

}

@property (assign,nonatomic) id owningView; 
@property (assign,nonatomic) long long count;              //@synthesize count=_count - In the implementation block
+(int)initImageCache;
+(void)deallocImageCache;
+(id)imageBadgeForCount:(long long)arg1 ;
-(void)dealloc;
-(long long)count;
-(id)owningView;
-(void)setOwningView:(id)arg1 ;
-(void)setCount:(long long)arg1 ;
-(void)layoutSublayers;
-(CGSize)preferredFrameSize;
-(id)initWithOwningView:(id)arg1 ;
-(void)calculateBadgeMetrics;
-(CGImageRef)newNumberBadge;
@end


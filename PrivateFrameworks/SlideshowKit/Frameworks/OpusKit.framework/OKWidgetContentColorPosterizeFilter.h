/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:14 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetBasicFilter.h>
#import <libobjc.A.dylib/JSOKWidgetContentColorPosterizeFilter.h>

@class NSNumber;

@interface OKWidgetContentColorPosterizeFilter : OKWidgetBasicFilter <JSOKWidgetContentColorPosterizeFilter> {

	NSNumber* _inputLevels;

}

@property (nonatomic,retain) NSNumber * inputLevels;              //@synthesize inputLevels=_inputLevels - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)filterWithInputLevels:(id)arg1 ;
-(id)outputImage;
-(id)inputKeys;
-(void)setInputLevels:(NSNumber *)arg1 ;
-(void)setSettingInputLevels:(id)arg1 ;
-(NSNumber *)inputLevels;
@end


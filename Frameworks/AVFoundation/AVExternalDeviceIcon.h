/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVExternalDeviceIconInternal, NSData;

@interface AVExternalDeviceIcon : NSObject {

	AVExternalDeviceIconInternal* _externalDeviceIcon;

}

@property (nonatomic,readonly) CGSize pixelSize; 
@property (nonatomic,readonly) NSData * imageData; 
@property (getter=isPrerendered,nonatomic,readonly) BOOL prerendered; 
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isPrerendered;
-(NSData *)imageData;
-(void)finalize;
-(CGSize)pixelSize;
@end


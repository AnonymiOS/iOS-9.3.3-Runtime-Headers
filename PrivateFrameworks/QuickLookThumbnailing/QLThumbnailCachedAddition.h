/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:04 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GSAddition;

@interface QLThumbnailCachedAddition : NSObject {

	GSAddition* _addition;
	unsigned long long _fileID;

}

@property (retain) GSAddition * addition;              //@synthesize addition=_addition - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setAddition:(GSAddition *)arg1 ;
-(GSAddition *)addition;
-(id)initWithAddition:(id)arg1 ;
-(BOOL)isStillValid;
@end


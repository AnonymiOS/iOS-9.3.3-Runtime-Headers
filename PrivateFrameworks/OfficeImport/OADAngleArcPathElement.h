/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:52 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPathElement.h>

@interface OADAngleArcPathElement : OADPathElement {

	OADAdjustPoint mCenter;
	OADAdjustPoint mSemiaxes;
	OADAdjustCoord mStartAngle;
	OADAdjustCoord mAngleLength;
	BOOL mConnectedToPrevious;

}
-(OADAdjustPoint)center;
-(OADAdjustCoord)startAngle;
-(id)initWithCenter:(OADAdjustPoint)arg1 semiaxes:(OADAdjustPoint)arg2 startAngle:(OADAdjustCoord)arg3 angleLength:(OADAdjustCoord)arg4 connectedToPrevious:(BOOL)arg5 ;
-(OADAdjustPoint)semiaxes;
-(OADAdjustCoord)angleLength;
-(BOOL)connectedToPrevious;
@end


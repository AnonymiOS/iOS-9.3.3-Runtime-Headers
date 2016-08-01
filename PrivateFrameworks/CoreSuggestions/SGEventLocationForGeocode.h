/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:57 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SGEventLocationForGeocode <NSObject>
@required
-(id)geocodedLocationWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 handle:(id)arg4;
-(id)geocodeLabel;
-(id)geocodeAddress;
-(BOOL)geocodeIsStart;
-(BOOL)geocodeIsEnd;
-(double)geocodeLatitude;
-(double)geocodeLongitude;
-(double)geocodeAccuracy;
-(id)geocodeHandle;

@end


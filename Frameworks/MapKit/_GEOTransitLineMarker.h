/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKTransitLineMarker.h>

@protocol GEOTransitLine;
@class NSString;

@interface _GEOTransitLineMarker : NSObject <MKTransitLineMarker> {

	id<GEOTransitLine> _line;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)artwork;
-(id)labelText;
-(id)initWithGEOTransitLine:(id)arg1 ;
-(unsigned long long)featureID;
@end


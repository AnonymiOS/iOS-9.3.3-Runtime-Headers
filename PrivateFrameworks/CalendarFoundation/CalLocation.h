/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:25 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLLocation, NSString, CLPlacemark, NSData;

@interface CalLocation : NSObject <NSSecureCoding> {

	CLLocation* _location;
	NSString* _address;
	NSString* _title;
	NSString* _displayName;
	NSString* _abURLString;
	CLPlacemark* _placemark;
	NSData* _mapKitHandle;
	BOOL _isCurrentLocation;
	double _radius;
	NSString* _routeType;
	int _type;

}

@property (nonatomic,copy) CLLocation * location; 
@property (copy) NSString * address;                                //@synthesize address=_address - In the implementation block
@property (copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (copy) NSString * displayName;                            //@synthesize displayName=_displayName - In the implementation block
@property (copy) NSString * abURLString;                            //@synthesize abURLString=_abURLString - In the implementation block
@property (copy) NSString * routeType;                              //@synthesize routeType=_routeType - In the implementation block
@property (copy) NSData * mapKitHandle;                             //@synthesize mapKitHandle=_mapKitHandle - In the implementation block
@property (retain) CLPlacemark * placemark;                         //@synthesize placemark=_placemark - In the implementation block
@property (nonatomic,readonly) BOOL isCurrentLocation; 
@property (assign) int type;                                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double radius;                         //@synthesize radius=_radius - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)geoURLStringFromCoordinates:(id)arg1 ;
+(id)coordinatesFromGeoURLString:(id)arg1 ;
+(id)routeTypeStringForCalLocationRoutingMode:(long long)arg1 ;
+(id)fullDisplayStringWithTitle:(id)arg1 address:(id)arg2 ;
+(long long)routingModeEnumForCalRouteType:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)displayString;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)displayName;
-(void)setAddress:(NSString *)arg1 ;
-(NSString *)routeType;
-(void)setRouteType:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)isCurrentLocation;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(NSString *)abURLString;
-(void)setAbURLString:(NSString *)arg1 ;
-(id)fullTitleAndAddressString;
-(id)geoURLString;
-(CLPlacemark *)placemark;
-(void)setMapKitHandle:(NSData *)arg1 ;
-(NSData *)mapKitHandle;
-(double)distanceFromLocation:(id)arg1 ;
-(NSString *)address;
-(void)setPlacemark:(CLPlacemark *)arg1 ;
-(id)typeString;
@end


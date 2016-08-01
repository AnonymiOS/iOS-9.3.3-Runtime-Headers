/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:21 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface STGenericIntentLocation : NSObject <NSCoding> {

	BOOL _isLatLong;
	NSString* _name;
	double _latitude;
	double _longitude;

}

@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;              //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL isLatLong;                //@synthesize isLatLong=_isLatLong - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(id)initWithName:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 ;
-(void)setIsLatLong:(BOOL)arg1 ;
-(BOOL)isLatLong;
-(double)latitude;
-(double)longitude;
@end


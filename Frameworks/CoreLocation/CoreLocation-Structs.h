/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct __CLClient* CLClientRef;

typedef struct {
	double latitude;
	double longitude;
} SCD_Struct_CL1;

typedef struct {
	int suitability;
	SCD_Struct_CL1 coordinate;
	double horizontalAccuracy;
	double altitude;
	double verticalAccuracy;
	double speed;
	double speedAccuracy;
	double course;
	double courseAccuracy;
	double timestamp;
	int confidence;
	double lifespan;
	int type;
	SCD_Struct_CL1 rawCoordinate;
	double rawCourse;
	int floor;
	unsigned integrity;
	int referenceFrame;
} SCD_Struct_CL2;

typedef struct __CFRunLoopTimer* CFRunLoopTimerRef;

typedef struct {
	double bestAccuracy;
} SCD_Struct_CL4;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	double x;
	double y;
	double z;
	double magneticHeading;
	double trueHeading;
	double accuracy;
	double timestamp;
	double temperature;
	double magnitude;
	double inclination;
	int calibration;
} SCD_Struct_CL6;

typedef struct {
	char proximityUUID[512];
	unsigned short major;
	unsigned short minor;
	int definitionMask;
	BOOL notifyEntryStateOnDisplay;
} SCD_Struct_CL7;

typedef struct {
	SCD_Struct_CL1 center;
	double radius;
	double desiredAccuracy;
	int referenceFrame;
} SCD_Struct_CL8;

typedef struct {
	char identifier[512];
	char onBehalfOfIdentifier[512];
	int type;
	BOOL notifyOnEntry;
	BOOL notifyOnExit;
	BOOL conservativeEntry;
	/*function pointer*/void* ;
	SCD_Struct_CL7 beaconAttributes;
	SCD_Struct_CL8) circularAttributes;
} SCD_Struct_CL9;

typedef struct {
	char field1[512];
	char field2[512];
	int field3;
	BOOL field4;
	BOOL field5;
	BOOL( field6;
	/*function pointer*/void* field7;
	= field8;
	SCD_Struct_CL7 field9;
	SCD_Struct_CL8) field10;
} SCD_Struct_CL10;

typedef struct {
	int field1;
	SCD_Struct_CL1 field2;
	double field3;
	double field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
	double field10;
	int field11;
	double field12;
	int field13;
	SCD_Struct_CL1 field14;
	double field15;
	int field16;
	unsigned field17;
	int field18;
} SCD_Struct_CL11;


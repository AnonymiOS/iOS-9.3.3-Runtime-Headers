/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct __IOSurface* IOSurfaceRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _NSZone* NSZoneRef;

typedef struct Projections_meanStdTable {
	float sumTable;
	float sumSqTable;
} Projections_meanStdTable;

typedef struct FastRegistration_Signatures {
	float piRow;
	unsigned long long nPiRow;
	Projections_meanStdTable piRowTable;
	float piCol;
	unsigned long long nPiCol;
	Projections_meanStdTable piColTable;
} FastRegistration_Signatures;

typedef struct GridROI_t {
	int startX;
	int startY;
	int endX;
	int endY;
} GridROI_t;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct CGContext* CGContextRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct CGImage* CGImageRef;

typedef struct CGLayer* CGLayerRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGImageMetadata* CGImageMetadataRef;

typedef struct CGImageSource* CGImageSourceRef;

typedef union {
	double vec[4];
	double ptr;
} SCD_Union_CI16;

typedef struct {
	BOOL field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6[3];
} SCD_Struct_CI17;

typedef struct {
	char* field1;
	int field2;
	int field3;
	int field4;
	int field5;
	int field6;
	int field7;
	int field8;
	float field9;
} SCD_Struct_CI18;

typedef struct {
	char field1[256];
	char field2[32];
	GridROI_t field3;
	int field4;
	int field5;
	CGColorSpace field6;
	SCD_Struct_CI18 field7;
	unsigned field8;
	int field9;
	int field10;
	BOOL field11;
	float field12;
} SCD_Struct_CI19;

typedef struct CGImageBlockSet* CGImageBlockSetRef;

typedef struct __CFData* CFDataRef;

typedef struct {
	char* baseAddress;
	int width;
	int height;
	int rowSamples;
	int rowBytes;
	int size;
	int samplesPerPixel;
	int bytesPerSample;
	float resolution;
} SCD_Struct_CI22;

typedef struct {
	int orientation;
	float SNR;
	BOOL N90;
	int redBitmaskArea;
	float imageCenterX;
	float imageCenterY;
	float halfDiagonalSize;
} SCD_Struct_CI23;

typedef struct {
	CGPoint centroid;
	int area;
	float ovalness;
	float contrast;
	float mincontrast;
	int nborder;
	GridROI_t IR;
	float aspectRatio;
	BOOL touchingEdge;
	int localmax;
	int localmaxrow;
	int localmaxcol;
	int localfloor;
	float rgmean;
	float rgstd;
	float ymean;
	float ystd;
} SCD_Struct_CI24;

typedef struct {
	int origHitX;
	int origHitY;
	int snapHitX;
	int snapHitY;
	int bitmaskSeedX;
	int bitmaskSeedY;
	int bitmaskThreshold;
	int cornealReflectionSeedX;
	int cornealReflectionSeedY;
	int cornealReflectionThreshold;
	BOOL align;
	GridROI_t mTemplate;
	GridROI_t existingTemplate;
	int averageSkinMapY;
	int characterizeCase;
	int finalEyeCase;
	float IOD;
	SCD_Struct_CI23 O;
	GridROI_t CR;
} SCD_Struct_CI25;

typedef struct {
	int tag;
	CGPoint pt2;
	int eyeCase;
	int forceCase;
	int npixels;
	int bignpixels;
	SCD_Struct_CI22 fullNew;
	GridROI_t YR;
	GridROI_t psTemplate;
	BOOL pupilShadeAlignment;
	GridROI_t matchingTemplate;
	int faceIndex;
	BOOL left;
	float IOD;
	SCD_Struct_CI25 data;
	SCD_Struct_CI24 BI;
} SCD_Struct_CI26;

typedef struct {
	float a;
	float b;
	float c;
} SCD_Struct_CI27;

typedef struct {
	char field1[256];
	char field2[32];
	GridROI_t field3;
	int field4;
	int field5;
	CGColorSpace field6;
	SCD_Struct_CI22 field7;
	unsigned field8;
	int field9;
	int field10;
	BOOL field11;
	float field12;
} SCD_Struct_CI28;

typedef struct {
	int field1;
	CGPoint field2;
	int field3;
	int field4;
	int field5;
	int field6;
	GridROI_t field7;
	GridROI_t field8;
	GridROI_t field9;
	BOOL field10;
	SCD_Struct_CI22 field11;
	int field12;
	BOOL field13;
	float field14;
	SCD_Struct_CI24 field15;
	SCD_Struct_CI25 field16;
} SCD_Struct_CI29;

typedef struct {
	float field1;
	int field2;
	int field3;
	float field4;
	float field5;
	float field6;
	int field7;
	int field8;
	float field9;
} SCD_Struct_CI30;

typedef struct {
	int field1;
	SCD_Struct_CI30 field2[4];
} SCD_Struct_CI31;

typedef struct {
	BOOL field1;
	int field2;
	int field3;
	float field4;
	float field5;
	int field6;
	int field7;
	int field8;
	int field9;
	float field10;
	float field11;
	int field12;
	int field13;
	float field14;
	int field15;
	int field16;
	int field17;
	int field18;
	int field19;
	int field20;
	float field21;
	int field22;
	int field23;
	int field24;
	int field25;
} SCD_Struct_CI32;

typedef struct {
	int field1;
	int field2;
	int field3;
	int field4;
	int field5;
	int field6;
	int field7;
	int field8;
	int field9;
	int field10;
	BOOL field11;
	GridROI_t field12;
	GridROI_t field13;
	int field14;
	int field15;
	int field16;
	float field17;
	GridROI_t field18;
	SCD_Struct_CI23 field19;
} SCD_Struct_CI33;

typedef struct CGColor* CGColorRef;

typedef struct OpaqueVTPixelTransferSession* OpaqueVTPixelTransferSessionRef;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_CI36;

typedef struct CGSRegionObject* CGSRegionObjectRef;


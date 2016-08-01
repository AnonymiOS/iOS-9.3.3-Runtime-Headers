/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned fullSyncVersion : 1;
} SCD_Struct_NN1;

typedef struct {
	unsigned statusVersion : 1;
	unsigned updatedStatus : 1;
} SCD_Struct_NN2;

typedef struct xmlSAXHandler {
	/*function pointer*/void* internalSubset;
	/*function pointer*/void* isStandalone;
	/*function pointer*/void* hasInternalSubset;
	/*function pointer*/void* hasExternalSubset;
	/*function pointer*/void* resolveEntity;
	/*function pointer*/void* getEntity;
	/*function pointer*/void* entityDecl;
	/*function pointer*/void* notationDecl;
	/*function pointer*/void* attributeDecl;
	/*function pointer*/void* elementDecl;
	/*function pointer*/void* unparsedEntityDecl;
	/*function pointer*/void* setDocumentLocator;
	/*function pointer*/void* startDocument;
	/*function pointer*/void* endDocument;
	/*function pointer*/void* startElement;
	/*function pointer*/void* endElement;
	/*function pointer*/void* reference;
	/*function pointer*/void* characters;
	/*function pointer*/void* ignorableWhitespace;
	/*function pointer*/void* processingInstruction;
	/*function pointer*/void* comment;
	/*function pointer*/void* warning;
	/*function pointer*/void* error;
	/*function pointer*/void* fatalError;
	/*function pointer*/void* getParameterEntity;
	/*function pointer*/void* cdataBlock;
	/*function pointer*/void* externalSubset;
	unsigned initialized;
	void _private;
	/*function pointer*/void* startElementNs;
	/*function pointer*/void* endElementNs;
	/*function pointer*/void* serror;
} xmlSAXHandler;

typedef struct {
	unsigned fullSyncVersion : 1;
	unsigned mainAlternativeValid : 1;
	unsigned partiallyLoaded : 1;
} SCD_Struct_NN4;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	unsigned fileSize : 1;
	unsigned imageHeight : 1;
	unsigned imageWidth : 1;
	unsigned type : 1;
	unsigned renderOnClient : 1;
} SCD_Struct_NN8;


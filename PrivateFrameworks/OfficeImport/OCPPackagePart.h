/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSURL, OCPPackageRelationshipCollection, OCPPackage, NSMutableDictionary;

@interface OCPPackagePart : NSObject {

	NSURL* mLocation;
	OCPPackageRelationshipCollection* mRelationships;
	OCPPackage* mPackage;
	xmlDoc* mDocument;
	NSMutableDictionary* mAlternateContentMap;

}
-(id)initWithLocation:(id)arg1 relationshipsXml:(xmlDoc*)arg2 package:(id)arg3 ;
-(void)dealloc;
-(id)data;
-(id)contentType;
-(id)location;
-(xmlDoc*)xmlDocument;
-(xmlTextReaderRef)xmlReader;
-(void)copyToFile:(id)arg1 ;
-(id)package;
-(id)relationshipsByType:(id)arg1 ;
-(id)relationshipForIdentifier:(id)arg1 ;
-(id)firstPartWithRelationshipOfType:(id)arg1 ;
-(xmlNode*)fallbackNodeForChoiceNode:(xmlNode*)arg1 ;
-(void)setFallbackNode:(xmlNode*)arg1 forChoiceNode:(xmlNode*)arg2 ;
@end


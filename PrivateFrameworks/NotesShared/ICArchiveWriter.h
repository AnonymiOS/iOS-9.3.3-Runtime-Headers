/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@class NSURL, NSString;

@interface ICArchiveWriter : NSObject {

	archiveRef _archive;
	BOOL _usesCompression;
	NSURL* _destinationURL;
	NSString* _basePath;

}

@property (assign,nonatomic) BOOL usesCompression;                //@synthesize usesCompression=_usesCompression - In the implementation block
@property (nonatomic,retain) NSURL * destinationURL;              //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,retain) NSString * basePath;                 //@synthesize basePath=_basePath - In the implementation block
-(void)dealloc;
-(BOOL)open:(id*)arg1 ;
-(NSURL *)destinationURL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(void)setBasePath:(NSString *)arg1 ;
-(NSString *)basePath;
-(BOOL)finish:(id*)arg1 ;
-(BOOL)writeURL:(id)arg1 isDirectory:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)writeURLs:(id)arg1 error:(id*)arg2 ;
-(BOOL)usesCompression;
-(id)initWithDestinationURL:(id)arg1 baseURL:(id)arg2 ;
-(void)setUsesCompression:(BOOL)arg1 ;
@end


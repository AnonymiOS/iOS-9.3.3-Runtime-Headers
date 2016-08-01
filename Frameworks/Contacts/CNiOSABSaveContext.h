/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:13 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Contacts/Contacts-Structs.h>
@class NSMutableDictionary, CNSaveRequest, NSData;

@interface CNiOSABSaveContext : NSObject {

	BOOL _hasPendingImageData;
	BOOL _hasPendingCropRect;
	void* _addressBook;
	NSMutableDictionary* _abPersonsByIdentifier;
	NSMutableDictionary* _abGroupsByIdentifier;
	NSMutableDictionary* _abSourcesByIdentifier;
	NSMutableDictionary* _abAccountsByIdentifier;
	CNSaveRequest* _saveRequest;
	NSData* _pendingImageData;
	NSData* _pendingThumbnailImageData;
	NSData* _pendingFullscreenImageData;
	CGRect _pendingCropRect;

}

@property (nonatomic,retain) NSMutableDictionary * abPersonsByIdentifier;               //@synthesize abPersonsByIdentifier=_abPersonsByIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * abGroupsByIdentifier;                //@synthesize abGroupsByIdentifier=_abGroupsByIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * abSourcesByIdentifier;               //@synthesize abSourcesByIdentifier=_abSourcesByIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * abAccountsByIdentifier;              //@synthesize abAccountsByIdentifier=_abAccountsByIdentifier - In the implementation block
@property (nonatomic,readonly) CNSaveRequest * saveRequest;                             //@synthesize saveRequest=_saveRequest - In the implementation block
@property (nonatomic,readonly) void* addressBook; 
@property (nonatomic,copy) NSData * pendingImageData;                                   //@synthesize pendingImageData=_pendingImageData - In the implementation block
@property (assign,nonatomic) CGRect pendingCropRect;                                    //@synthesize pendingCropRect=_pendingCropRect - In the implementation block
@property (nonatomic,copy) NSData * pendingThumbnailImageData;                          //@synthesize pendingThumbnailImageData=_pendingThumbnailImageData - In the implementation block
@property (nonatomic,copy) NSData * pendingFullscreenImageData;                         //@synthesize pendingFullscreenImageData=_pendingFullscreenImageData - In the implementation block
-(void)dealloc;
-(void)setPendingImageData:(NSData *)arg1 ;
-(void)setPendingCropRect:(CGRect)arg1 ;
-(id)initWithSaveRequest:(id)arg1 addressBook:(void*)arg2 ;
-(BOOL)flushPendingImageChangesToPerson:(void*)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)abPersonsByIdentifier;
-(void)setAbPersonsByIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)abGroupsByIdentifier;
-(void)setAbGroupsByIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)abSourcesByIdentifier;
-(void)setAbSourcesByIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)abAccountsByIdentifier;
-(void)setAbAccountsByIdentifier:(NSMutableDictionary *)arg1 ;
-(CNSaveRequest *)saveRequest;
-(NSData *)pendingImageData;
-(CGRect)pendingCropRect;
-(NSData *)pendingThumbnailImageData;
-(void)setPendingThumbnailImageData:(NSData *)arg1 ;
-(NSData *)pendingFullscreenImageData;
-(void)setPendingFullscreenImageData:(NSData *)arg1 ;
-(void*)addressBook;
@end


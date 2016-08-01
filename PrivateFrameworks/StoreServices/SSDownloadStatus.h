/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSDownloadPhase, NSError, NSString;

@interface SSDownloadStatus : NSObject <SSXPCCoding, NSCopying> {

	SSDownloadPhase* _activePhase;
	BOOL _contentRestricted;
	NSError* _error;
	BOOL _failed;
	BOOL _paused;

}

@property (nonatomic,retain) NSError * error;                                                //@synthesize error=_error - In the implementation block
@property (assign,getter=isFailed,nonatomic) BOOL failed;                                    //@synthesize failed=_failed - In the implementation block
@property (getter=isFailedTransient,nonatomic,readonly) BOOL failedTransient; 
@property (assign,getter=isPausable,nonatomic) BOOL pausable; 
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                    //@synthesize paused=_paused - In the implementation block
@property (assign,getter=isContentRestricted,nonatomic) BOOL contentRestricted;              //@synthesize contentRestricted=_contentRestricted - In the implementation block
@property (nonatomic,readonly) SSDownloadPhase * activePhase;                                //@synthesize activePhase=_activePhase - In the implementation block
@property (nonatomic,readonly) float percentComplete; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPausable:(BOOL)arg1 ;
-(BOOL)isPausable;
-(BOOL)isFailed;
-(void)setContentRestricted:(BOOL)arg1 ;
-(void)setOperationProgress:(id)arg1 ;
-(BOOL)isFailedTransient;
-(SSDownloadPhase *)activePhase;
-(void)dealloc;
-(float)percentComplete;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)setPercentComplete:(float)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)setOperationType:(long long)arg1 ;
-(BOOL)isContentRestricted;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(BOOL)isPaused;
-(void)setFailed:(BOOL)arg1 ;
@end


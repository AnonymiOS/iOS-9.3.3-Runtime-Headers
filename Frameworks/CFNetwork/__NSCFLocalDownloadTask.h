/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:19 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/__NSCFLocalSessionTask.h>
#import <libobjc.A.dylib/NSURLSessionDownloadTaskSubclass.h>
#import <libobjc.A.dylib/__NSCFLocalDownloadFileOpener.h>

@protocol OS_dispatch_data;
@class __NSCFLocalDownloadFile, NSObject, NSDictionary, NSString;

@interface __NSCFLocalDownloadTask : __NSCFLocalSessionTask <NSURLSessionDownloadTaskSubclass, __NSCFLocalDownloadFileOpener> {

	/*^block*/id _fileCompletion;
	__NSCFLocalDownloadFile* _downloadFile;
	BOOL _canWrite;
	BOOL _suppressProgress;
	NSObject*<OS_dispatch_data> _writeBuffer;
	unsigned long long _ioSuspend;
	int _seqNo;
	BOOL _needFinish;
	BOOL _didIssueNeedFinish;
	unsigned long long _totalWrote;
	/*^block*/id _resumeCallback;
	long long _initialResumeSize;
	NSDictionary* _originalResumeInfo;
	unsigned long long _transientWriteProgress;
	/*^block*/id _afterDidReportProgressOnQueue;
	/*^block*/id _dataAckCompletion;

}

@property (copy) id fileCompletion;                                     //@synthesize fileCompletion=_fileCompletion - In the implementation block
@property (copy) id dataAckCompletion;                                  //@synthesize dataAckCompletion=_dataAckCompletion - In the implementation block
@property (retain) __NSCFLocalDownloadFile * downloadFile;              //@synthesize downloadFile=_downloadFile - In the implementation block
@property (copy) id resumeCallback;                                     //@synthesize resumeCallback=_resumeCallback - In the implementation block
@property (copy) id _afterDidReportProgressOnQueue;                     //@synthesize afterDidReportProgressOnQueue=_afterDidReportProgressOnQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_onqueue_completeInitialization;
-(id)initWithSession:(id)arg1 request:(id)arg2 filePath:(id)arg3 ident:(unsigned long long)arg4 ;
-(id)initWithSession:(id)arg1 resumeData:(id)arg2 ident:(unsigned long long)arg3 ;
-(void)setFileCompletion:(id)arg1 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_task_onqueue_didFinish;
-(void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setDownloadFile:(__NSCFLocalDownloadFile *)arg1 ;
-(__NSCFLocalDownloadFile *)downloadFile;
-(id)explicitDownloadDirectory;
-(BOOL)setupForNewDownload:(id)arg1 ;
-(void)setResumeCallback:(id)arg1 ;
-(void)checkWrite;
-(id)resumeCallback;
-(void)_onqueue_cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(id)fileCompletion;
-(id)_afterDidReportProgressOnQueue;
-(void)set_afterDidReportProgressOnQueue:(id)arg1 ;
-(id)createResumeInformation:(id)arg1 ;
-(void)_private_errorCompletion;
-(void)writeAndResume;
-(id)dataAckCompletion;
-(void)setDataAckCompletion:(id)arg1 ;
-(void)_private_fileCompletion;
-(int)openItemForPath:(id)arg1 mode:(int)arg2 ;
-(id)initWithSession:(id)arg1 request:(id)arg2 ident:(unsigned long long)arg3 ;
-(void)cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(void)_private_posixError:(int)arg1 ;
-(void)dealloc;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)initWithTask:(id)arg1 ;
-(void)reportProgress:(unsigned long long)arg1 ;
@end


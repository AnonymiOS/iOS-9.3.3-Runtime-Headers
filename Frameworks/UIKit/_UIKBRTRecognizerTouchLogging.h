/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:45 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIKBRTRecognizerTouchLoggingProtocol.h>

@protocol OS_dispatch_queue;
@class _UIKBRTRecognizer, NSObject, NSURL, NSString;

@interface _UIKBRTRecognizerTouchLogging : NSObject <_UIKBRTRecognizerTouchLoggingProtocol> {

	_UIKBRTRecognizer* _owner;
	NSObject*<OS_dispatch_queue> _touchLoggingQueue;
	NSURL* _touchLoggingDBURL;
	sqlite3Ref _touchLoggingDB;

}

@property (assign,nonatomic) _UIKBRTRecognizer * owner;                                   //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> touchLoggingQueue;              //@synthesize touchLoggingQueue=_touchLoggingQueue - In the implementation block
@property (nonatomic,retain) NSURL * touchLoggingDBURL;                                   //@synthesize touchLoggingDBURL=_touchLoggingDBURL - In the implementation block
@property (assign,nonatomic) sqlite3Ref touchLoggingDB;                                   //@synthesize touchLoggingDB=_touchLoggingDB - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL loggingTouches; 
+(BOOL)_uikbrt_touchLoggingEnabled;
-(void)stopLoggingTouchesWithCallback:(/*^block*/id)arg1 ;
-(void)startLoggingTouchesToDefaultLocationIfEnabled;
-(_UIKBRTRecognizer *)owner;
-(void)setOwner:(_UIKBRTRecognizer *)arg1 ;
-(id)logFileExtension;
-(void)startLoggingTouchesToURL:(id)arg1 ;
-(void)startLoggingTouchesForVC:(id)arg1 ;
-(void)logTouchInfo:(id)arg1 withPhase:(long long)arg2 ;
-(void)closeTouchInfo:(id)arg1 ;
-(BOOL)loggingTouches;
-(id)initWithOwner:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)touchLoggingQueue;
-(void)setTouchLoggingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSURL *)touchLoggingDBURL;
-(void)setTouchLoggingDBURL:(NSURL *)arg1 ;
-(sqlite3Ref)touchLoggingDB;
-(void)setTouchLoggingDB:(sqlite3Ref)arg1 ;
@end


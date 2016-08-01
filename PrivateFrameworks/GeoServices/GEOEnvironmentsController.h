/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOEnvironmentsControllerDelegate;
@class NSArray;

@interface GEOEnvironmentsController : NSObject {

	NSArray* _defaultEnvironmentInfos;
	NSArray* _environmentInfos;
	NSArray* _customEnvironmentInfos;
	BOOL _enableCustomEnvironments;
	id<GEOEnvironmentsControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<GEOEnvironmentsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<GEOEnvironmentsControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<GEOEnvironmentsControllerDelegate>)delegate;
-(void)reloadEnvironments;
-(void)removeCustomEnvironment:(id)arg1 ;
-(void)addCustomEnvironment:(id)arg1 ;
-(id)environmentInfosForSection:(long long)arg1 ;
-(id)initEnablingCustomEnvironments:(BOOL)arg1 ;
@end

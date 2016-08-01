/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIDocumentPickerURLContainerModel.h>

@class NSString;

@interface _UIDocumentPickerSearchContainerModel : _UIDocumentPickerURLContainerModel {

	NSString* _queryString;

}

@property (nonatomic,copy) NSString * queryString;              //@synthesize queryString=_queryString - In the implementation block
-(id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3 ;
-(id)scopes;
-(BOOL)shouldShowTopLevelContainers;
-(id)displayTitle;
-(id)_createObserver;
-(void)startMonitoringChanges;
-(void)arrayController:(id)arg1 modelChanged:(id)arg2 differences:(id)arg3 ;
-(id)initWithPickableTypes:(id)arg1 mode:(unsigned long long)arg2 ;
-(void)setQueryString:(NSString *)arg1 ;
-(NSString *)queryString;
-(void)_updateObserverForQuery;
@end


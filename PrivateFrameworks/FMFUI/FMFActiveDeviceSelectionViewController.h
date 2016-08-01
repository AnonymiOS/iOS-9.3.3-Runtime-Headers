/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:57 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <FMFUI/FMFSessionDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class NSMutableArray, FMFDevice, FMFSession, NSString;

@interface FMFActiveDeviceSelectionViewController : PSListController <FMFSessionDelegate, UITableViewDelegate, UITableViewDataSource> {

	NSMutableArray* _deviceList;
	FMFDevice* _currentActiveDevice;
	FMFDevice* _nowActiveDevice;
	FMFSession* _fmfSession;
	long long _specifierStartIndex;

}

@property (nonatomic,retain) NSMutableArray * deviceList;                  //@synthesize deviceList=_deviceList - In the implementation block
@property (nonatomic,retain) FMFDevice * currentActiveDevice;              //@synthesize currentActiveDevice=_currentActiveDevice - In the implementation block
@property (nonatomic,retain) FMFDevice * nowActiveDevice;                  //@synthesize nowActiveDevice=_nowActiveDevice - In the implementation block
@property (nonatomic,retain) FMFSession * fmfSession;                      //@synthesize fmfSession=_fmfSession - In the implementation block
@property (assign,nonatomic) long long specifierStartIndex;                //@synthesize specifierStartIndex=_specifierStartIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didChangeActiveLocationSharingDevice:(id)arg1 ;
-(void)didUpdateActiveDeviceList:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(NSMutableArray *)deviceList;
-(void)setDeviceList:(NSMutableArray *)arg1 ;
-(void)reloadSpecifiersOnMainQueue;
-(FMFSession *)fmfSession;
-(void)setFmfSession:(FMFSession *)arg1 ;
-(void)sortDevicesList;
-(void)setSpecifierStartIndex:(long long)arg1 ;
-(FMFDevice *)nowActiveDevice;
-(long long)specifierStartIndex;
-(id)_specifierForRowIndex:(long long)arg1 ;
-(BOOL)_hasActiveDeviceAtIndex:(unsigned long long)arg1 ;
-(BOOL)_hasThisDeviceAtIndex:(unsigned long long)arg1 ;
-(void)setNowActiveDevice:(FMFDevice *)arg1 ;
-(void)saveActiveDeviceSelection;
-(void)cancelActiveDeviceSelection;
-(FMFDevice *)currentActiveDevice;
-(void)setCurrentActiveDevice:(FMFDevice *)arg1 ;
-(id)specifiers;
@end


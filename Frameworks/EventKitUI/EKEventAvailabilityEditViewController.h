/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:16 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSMutableArray, UITableView, NSString;

@interface EKEventAvailabilityEditViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate> {

	long long _availability;
	unsigned long long _supportedAvailabilities;
	NSMutableArray* _choices;
	UITableView* _table;

}

@property (assign,nonatomic) long long availability;                                  //@synthesize availability=_availability - In the implementation block
@property (assign,nonatomic) unsigned long long supportedAvailabilities; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)setSupportedAvailabilities:(unsigned long long)arg1 ;
-(void)_selectRow:(unsigned long long)arg1 ;
-(unsigned long long)supportedAvailabilities;
-(long long)availability;
-(void)setAvailability:(long long)arg1 ;
@end


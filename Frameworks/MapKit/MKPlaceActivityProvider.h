/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKPlaceActivityProviderDelegate;
@class MKMapItem;

@interface MKPlaceActivityProvider : NSObject {

	id<MKPlaceActivityProviderDelegate> _delegate;
	MKMapItem* _mapItem;

}

@property (assign,nonatomic,__weak) id<MKPlaceActivityProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                              //@synthesize mapItem=_mapItem - In the implementation block
-(void)setDelegate:(id<MKPlaceActivityProviderDelegate>)arg1 ;
-(id<MKPlaceActivityProviderDelegate>)delegate;
-(id)activityTitle;
-(id)initWithMapItem:(id)arg1 ;
-(id)activityURL;
-(id)activityAnnotationView;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
@end


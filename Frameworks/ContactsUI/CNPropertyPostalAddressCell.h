/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@class UIImageView;

@interface CNPropertyPostalAddressCell : CNPropertySimpleTransportCell {

	BOOL _shouldUseMapTiles;
	UIImageView* _mapImageView;
	double _oldMapWidth;

}

@property (assign,nonatomic) BOOL shouldUseMapTiles;                  //@synthesize shouldUseMapTiles=_shouldUseMapTiles - In the implementation block
@property (nonatomic,retain) UIImageView * mapImageView;              //@synthesize mapImageView=_mapImageView - In the implementation block
@property (assign,nonatomic) double oldMapWidth;                      //@synthesize oldMapWidth=_oldMapWidth - In the implementation block
+(double)mapWidth;
+(id)defaultMapImage;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(id)variableConstraints;
-(BOOL)shouldUseMapTiles;
-(void)setMapImageView:(UIImageView *)arg1 ;
-(double)oldMapWidth;
-(void)setOldMapWidth:(double)arg1 ;
-(void)setMapImage:(id)arg1 ;
-(void)mapSnapshotWithPlacemark:(id)arg1 ;
-(UIImageView *)mapImageView;
-(void)tapGesture:(id)arg1 ;
-(void)setProperty:(id)arg1 ;
-(void)setShouldUseMapTiles:(BOOL)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:17 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKit/UIView.h>

@class _UIRemoteView, BKSTouchDeliveryPolicyAssertion, PGHostedWindowHostingHandle;

@interface PGLayerHostView : UIView {

	_UIRemoteView* _remoteView;
	BKSTouchDeliveryPolicyAssertion* _touchDeliveryPolicyAssertion;

}

@property (nonatomic,retain) PGHostedWindowHostingHandle * hostedWindowHostingHandle; 
@property (assign,nonatomic) CGAffineTransform layerHostTransform; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(PGHostedWindowHostingHandle *)hostedWindowHostingHandle;
-(void)setHostedWindowHostingHandle:(PGHostedWindowHostingHandle *)arg1 ;
-(void)_manageSharingOfTouchesBetweenClientAndHostContext;
-(CGAffineTransform)layerHostTransform;
-(void)setLayerHostTransform:(CGAffineTransform)arg1 ;
@end


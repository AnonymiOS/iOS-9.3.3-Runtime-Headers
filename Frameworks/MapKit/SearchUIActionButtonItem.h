/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray, NSURL;


@protocol SearchUIActionButtonItem <NSObject>
@property (nonatomic,readonly) unsigned long long actionType; 
@property (nonatomic,copy,readonly) NSString * label; 
@property (nonatomic,readonly) BOOL isOverlay; 
@property (nonatomic,readonly) NSArray * adamIDs; 
@property (nonatomic,readonly) BOOL requiresLocalMedia; 
@property (nonatomic,copy,readonly) NSString * labelForLocalMedia; 
@property (nonatomic,copy,readonly) NSString * localMediaIdentifier; 
@property (nonatomic,readonly) NSURL * punchoutURL; 
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSString * contactIdentifier; 
@optional
-(NSString *)bundleID;
-(NSString *)labelForLocalMedia;
-(NSString *)localMediaIdentifier;
-(NSURL *)punchoutURL;
-(NSArray *)adamIDs;
-(BOOL)requiresLocalMedia;
-(NSString *)contactIdentifier;

@required
-(NSString *)label;
-(unsigned long long)actionType;
-(BOOL)isOverlay;

@end


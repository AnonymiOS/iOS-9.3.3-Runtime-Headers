/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _ICQPageSpecification : NSObject {

	BOOL _hasCancelButtonForBack;
	NSString* _pageIdentifier;
	NSString* _pageTitle;
	NSString* _pageClassIdentifier;

}

@property (nonatomic,retain) NSString * pageIdentifier;                   //@synthesize pageIdentifier=_pageIdentifier - In the implementation block
@property (nonatomic,retain) NSString * pageTitle;                        //@synthesize pageTitle=_pageTitle - In the implementation block
@property (assign,nonatomic) BOOL hasCancelButtonForBack;                 //@synthesize hasCancelButtonForBack=_hasCancelButtonForBack - In the implementation block
@property (nonatomic,retain) NSString * pageClassIdentifier;              //@synthesize pageClassIdentifier=_pageClassIdentifier - In the implementation block
-(void)setPageIdentifier:(NSString *)arg1 ;
-(NSString *)pageIdentifier;
-(id)debugDescription;
-(NSString *)pageTitle;
-(void)setPageTitle:(NSString *)arg1 ;
-(void)setHasCancelButtonForBack:(BOOL)arg1 ;
-(BOOL)hasCancelButtonForBack;
-(void)setPageClassIdentifier:(NSString *)arg1 ;
-(NSString *)pageClassIdentifier;
@end


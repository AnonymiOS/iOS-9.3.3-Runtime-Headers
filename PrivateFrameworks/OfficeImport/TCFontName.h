/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TCFontName : NSObject {

	NSString* _styleName;
	NSString* _fullName;

}

@property (nonatomic,readonly) NSString * styleName;              //@synthesize styleName=_styleName - In the implementation block
@property (nonatomic,readonly) NSString * fullName;               //@synthesize fullName=_fullName - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)fullName;
-(NSString *)styleName;
-(id)initWithStyleName:(id)arg1 fullName:(id)arg2 ;
-(id)equivalentDictionary;
@end


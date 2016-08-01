/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <TelephonyUI/TPNumberPadDarkStyleButton.h>
#import <libobjc.A.dylib/SBUIPasscodeNumberPadButton.h>

@class NSString;

@interface SBPasscodeNumberPadButton : TPNumberPadDarkStyleButton <SBUIPasscodeNumberPadButton>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)defaultSize;
+(UIEdgeInsets)paddingOutsideRing;
+(double)_numberPadButtonOuterCircleDiameter;
+(int)_characterTypeForCharacter:(unsigned)arg1 ;
+(id)_stringCharacterForCharacter:(unsigned)arg1 ;
-(id)initForCharacter:(unsigned)arg1 ;
-(id)stringCharacter;
-(int)characterType;
@end


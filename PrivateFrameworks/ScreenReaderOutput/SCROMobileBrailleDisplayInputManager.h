/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:58 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
#import <libobjc.A.dylib/SCROBrailleDisplayInputManagerProtocol.h>

@class NSMutableDictionary, NSSet, NSBundle, NSArray, NSString;

@interface SCROMobileBrailleDisplayInputManager : NSObject <SCROBrailleDisplayInputManagerProtocol> {

	NSMutableDictionary* _displayInfoDict;
	NSSet* _brailleKeys;
	NSBundle* _bundle;
	NSArray* _sixDotCommands;
	NSArray* _eightDotCommands;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_bundle;
-(id)_commandsFromBrailleInputMode:(int)arg1 ;
-(id)_sixDotCommands;
-(id)_eightDotCommands;
-(id)inputIdentifierAtIndex:(unsigned long long)arg1 forDisplayWithToken:(int)arg2 ;
-(id)buttonNamesForInputIdentifier:(id)arg1 forDisplayWithToken:(int)arg2 ;
-(void)configureWithDriverConfiguration:(id)arg1 ;
-(id)commandForBrailleKey:(id)arg1 ;
-(id)driverIdentifierForDisplayWithToken:(int)arg1 ;
-(id)modelIdentifierForDisplayWithToken:(int)arg1 ;
-(unsigned long long)countForDisplayWithToken:(int)arg1 ;
-(id)commandAtIndex:(unsigned long long)arg1 forDisplayWithToken:(int)arg2 ;
-(id)buttonNamesAtIndex:(unsigned long long)arg1 forDisplayWithToken:(int)arg2 ;
@end


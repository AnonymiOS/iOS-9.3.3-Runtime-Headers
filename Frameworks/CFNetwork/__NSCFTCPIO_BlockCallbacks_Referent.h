/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:19 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@interface __NSCFTCPIO_BlockCallbacks_Referent : NSObject {

	TCPIO_BlockCallbacks_Listener* _readListener;
	TCPIO_BlockCallbacks_Listener* _writeListener;

}
-(void)setReadListener:(TCPIO_BlockCallbacks_Listener*)arg1 ;
-(void)setWriteListener:(TCPIO_BlockCallbacks_Listener*)arg1 ;
-(BOOL)withListeners:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
@end


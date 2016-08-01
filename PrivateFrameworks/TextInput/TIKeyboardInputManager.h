/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TIKeyboardInputManager <NSObject>
@required
-(void)textAccepted:(id)arg1;
-(void)syncToKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2 continuation:(/*^block*/id)arg3;
-(void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
-(void)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 continuation:(/*^block*/id)arg3;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)lastAcceptedCandidateCorrected;
-(void)setOriginalInput:(id)arg1;
-(void)candidateRejected:(id)arg1;
-(void)writeTypologyLogWithCompletionHandler:(/*^block*/id)arg1;
-(void)generateRefinementsForCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end


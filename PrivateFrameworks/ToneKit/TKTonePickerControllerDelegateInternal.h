/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TKTonePickerControllerDelegateInternal <NSObject>
@optional
-(id)tonePickerController:(id)arg1 titleOfMediaItemAtIndex:(unsigned long long)arg2;
-(void)tonePickerController:(id)arg1 didSelectMediaItemAtIndex:(unsigned long long)arg2 selectionDidChange:(BOOL)arg3;
-(void)tonePickerControllerRequestsPresentingMediaItemPicker:(id)arg1;
-(void)tonePickerControllerRequestsPresentingVibrationPicker:(id)arg1;
-(void)tonePickerController:(id)arg1 requestsPresentingToneClassicsPickerForItem:(id)arg2;
-(void)tonePickerControllerRequestsPresentingToneStore:(id)arg1;
-(void)tonePickerController:(id)arg1 requestsPresentingAlertWithTitle:(id)arg2 message:(id)arg3;
-(void)tonePickerControllerDidStopPlaying:(id)arg1 withFadeOutDuration:(double)arg2;
-(BOOL)tonePickerControllerShouldShowMedia:(id)arg1;
-(unsigned long long)numberOfMediaItemsInTonePickerController:(id)arg1;
-(id)tonePickerController:(id)arg1 identifierOfMediaItemAtIndex:(unsigned long long)arg2;
-(unsigned long long)tonePickerController:(id)arg1 indexOfMediaItemWithIdentifier:(id)arg2;
-(void)tonePickerController:(id)arg1 selectedMediaItemWithIdentifier:(id)arg2;
-(void)tonePickerControllerRequestsMediaItemsRefresh:(id)arg1;

@end


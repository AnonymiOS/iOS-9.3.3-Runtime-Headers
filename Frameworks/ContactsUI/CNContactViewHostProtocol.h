/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:29 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNContactViewHostProtocol <NSObject>
@required
-(BOOL)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;
-(void)updateEditing:(BOOL)arg1 doneButtonEnabled:(BOOL)arg2 doneButtonText:(id)arg3;
-(void)didCompleteWithContact:(id)arg1;
-(void)didDeleteContact:(id)arg1;
-(void)isPresentingFullscreen:(BOOL)arg1;

@end


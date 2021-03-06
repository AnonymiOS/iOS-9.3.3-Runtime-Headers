/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RemoteUITableHeader <NSObject>
@optional
-(void)setDelegate:(id)arg1;
-(void)setIconImage:(id)arg1;
-(void)setImageSize:(CGSize)arg1;
-(void)setImageAlignment:(int)arg1;
-(void)setText:(id)arg1 attributes:(id)arg2;
-(void)setDetailText:(id)arg1 attributes:(id)arg2;
-(void)setSubHeaderText:(id)arg1 attributes:(id)arg2;

@required
-(id)initWithAttributes:(id)arg1;
-(void)setSectionIsFirst:(BOOL)arg1;
-(double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2;

@end


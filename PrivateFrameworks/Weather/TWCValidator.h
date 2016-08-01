/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:55 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKSearchCompleterDelegate.h>

@protocol WeatherValidatorDelegate;
@class MKLocalSearchCompleter, CLGeocoder, NSString;

@interface TWCValidator : NSObject <MKSearchCompleterDelegate> {

	MKLocalSearchCompleter* _completer;
	CLGeocoder* _geocoder;
	id<WeatherValidatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WeatherValidatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<GEOMapServiceCompletionTicket> lastTicket; 
+(id)sharedValidator;
-(void)cancel;
-(void)setDelegate:(id<WeatherValidatorDelegate>)arg1 ;
-(id)init;
-(id<WeatherValidatorDelegate>)delegate;
-(void)completerDidUpdateResults:(id)arg1 finished:(BOOL)arg2 ;
-(void)completerDidFail:(id)arg1 error:(id)arg2 ;
-(void)autocompleteLocationName:(id)arg1 ;
-(void)geocodeLocation:(id)arg1 ;
-(id)aggregateDictionaryDomain;
@end


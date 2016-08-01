/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:52 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AXEventHandInfoRepresentation, AXEventKeyInfoRepresentation, AXEventAccelerometerInfoRepresentation, AXEventGameControllerInfoRepresentation, NSString, NSData;

@interface AXEventRepresentation : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isBuiltIn;
	BOOL _isDisplayIntegrated;
	BOOL _isGeneratedEvent;
	BOOL _useOriginalHIDTime;
	unsigned _type;
	int _subtype;
	int _flags;
	unsigned _taskPort;
	int _pid;
	unsigned _contextId;
	unsigned _willUpdateMask;
	unsigned _didUpdateMask;
	unsigned long long _time;
	unsigned long long _senderID;
	AXEventHandInfoRepresentation* _handInfo;
	AXEventKeyInfoRepresentation* _keyInfo;
	AXEventAccelerometerInfoRepresentation* _accelerometerInfo;
	AXEventGameControllerInfoRepresentation* _gameControllerInfo;
	NSString* _clientId;
	unsigned long long _HIDTime;
	NSData* _HIDAttributeData;
	long long _scrollAmount;
	unsigned long long _additionalFlags;
	long long _generationCount;
	IOHIDEventRef _creatorHIDEvent;
	void* _window;
	NSData* _data;
	CGPoint _location;
	CGPoint _windowLocation;

}

@property (nonatomic,readonly) unsigned long long fingerCount; 
@property (nonatomic,readonly) BOOL isTouchDown; 
@property (nonatomic,readonly) BOOL isMove; 
@property (nonatomic,readonly) BOOL isChordChange; 
@property (nonatomic,readonly) BOOL isLift; 
@property (nonatomic,readonly) BOOL isInRange; 
@property (nonatomic,readonly) BOOL isInRangeLift; 
@property (nonatomic,readonly) BOOL isCancel; 
@property (assign,nonatomic) unsigned type;                                                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int subtype;                                                               //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) CGPoint location;                                                          //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) CGPoint windowLocation;                                                    //@synthesize windowLocation=_windowLocation - In the implementation block
@property (assign,nonatomic) unsigned long long time;                                                   //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) int flags;                                                                 //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned long long senderID;                                               //@synthesize senderID=_senderID - In the implementation block
@property (nonatomic,retain) AXEventHandInfoRepresentation * handInfo;                                  //@synthesize handInfo=_handInfo - In the implementation block
@property (nonatomic,retain) AXEventKeyInfoRepresentation * keyInfo;                                    //@synthesize keyInfo=_keyInfo - In the implementation block
@property (nonatomic,retain) AXEventAccelerometerInfoRepresentation * accelerometerInfo;                //@synthesize accelerometerInfo=_accelerometerInfo - In the implementation block
@property (nonatomic,retain) AXEventGameControllerInfoRepresentation * gameControllerInfo;              //@synthesize gameControllerInfo=_gameControllerInfo - In the implementation block
@property (nonatomic,retain) NSString * clientId;                                                       //@synthesize clientId=_clientId - In the implementation block
@property (assign,nonatomic) unsigned taskPort;                                                         //@synthesize taskPort=_taskPort - In the implementation block
@property (assign,nonatomic) int pid;                                                                   //@synthesize pid=_pid - In the implementation block
@property (assign,nonatomic) unsigned long long HIDTime;                                                //@synthesize HIDTime=_HIDTime - In the implementation block
@property (nonatomic,retain) NSData * HIDAttributeData;                                                 //@synthesize HIDAttributeData=_HIDAttributeData - In the implementation block
@property (assign,nonatomic) long long scrollAmount;                                                    //@synthesize scrollAmount=_scrollAmount - In the implementation block
@property (assign,nonatomic) unsigned long long additionalFlags;                                        //@synthesize additionalFlags=_additionalFlags - In the implementation block
@property (assign,nonatomic) unsigned contextId;                                                        //@synthesize contextId=_contextId - In the implementation block
@property (assign,nonatomic) BOOL isBuiltIn;                                                            //@synthesize isBuiltIn=_isBuiltIn - In the implementation block
@property (assign,nonatomic) BOOL isDisplayIntegrated;                                                  //@synthesize isDisplayIntegrated=_isDisplayIntegrated - In the implementation block
@property (assign,nonatomic) long long generationCount;                                                 //@synthesize generationCount=_generationCount - In the implementation block
@property (assign,nonatomic) unsigned willUpdateMask;                                                   //@synthesize willUpdateMask=_willUpdateMask - In the implementation block
@property (assign,nonatomic) unsigned didUpdateMask;                                                    //@synthesize didUpdateMask=_didUpdateMask - In the implementation block
@property (assign,nonatomic) BOOL isGeneratedEvent;                                                     //@synthesize isGeneratedEvent=_isGeneratedEvent - In the implementation block
@property (assign,nonatomic) BOOL useOriginalHIDTime;                                                   //@synthesize useOriginalHIDTime=_useOriginalHIDTime - In the implementation block
@property (nonatomic,retain) IOHIDEventRef creatorHIDEvent;                                             //@synthesize creatorHIDEvent=_creatorHIDEvent - In the implementation block
@property (nonatomic,readonly) BOOL isUpdate; 
@property (nonatomic,readonly) BOOL willBeUpdated; 
@property (assign,nonatomic) void* window;                                                              //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) NSData * data;                                                             //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)representationWithHIDEvent:(IOHIDEventRef)arg1 hidStreamIdentifier:(id)arg2 ;
+(id)representationWithEventRecord:(SCD_Struct_AX3*)arg1 ;
+(id)representationWithType:(unsigned)arg1 subtype:(int)arg2 time:(unsigned long long)arg3 location:(CGPoint)arg4 windowLocation:(CGPoint)arg5 handInfo:(id)arg6 ;
+(id)_digitizerRepresentation:(IOHIDEventRef)arg1 hidStreamIdentifier:(id)arg2 ;
+(id)_keyboardButtonEvent:(IOHIDEventRef)arg1 ;
+(id)_wheelEvent:(IOHIDEventRef)arg1 ;
+(id)_gameControllerEvent:(IOHIDEventRef)arg1 ;
+(id)representationWithData:(id)arg1 ;
+(id)representationWithLocation:(CGPoint)arg1 windowLocation:(CGPoint)arg2 handInfo:(id)arg3 ;
+(id)accelerometerRepresentation:(id)arg1 ;
+(id)keyRepresentationWithType:(unsigned)arg1 ;
+(id)buttonRepresentationWithType:(unsigned)arg1 ;
+(id)touchRepresentationWithHandType:(unsigned)arg1 location:(CGPoint)arg2 ;
-(unsigned long long)fingerCount;
-(BOOL)isTouchDown;
-(BOOL)isMove;
-(BOOL)isChordChange;
-(BOOL)isLift;
-(BOOL)isInRange;
-(BOOL)isInRangeLift;
-(BOOL)isCancel;
-(id)dataRepresentation;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void*)window;
-(id)description;
-(void)setWindow:(void*)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(int)subtype;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned)contextId;
-(void)setSubtype:(int)arg1 ;
-(void)setTime:(unsigned long long)arg1 ;
-(unsigned long long)time;
-(CGPoint)location;
-(void)setContextId:(unsigned)arg1 ;
-(void)setLocation:(CGPoint)arg1 ;
-(long long)generationCount;
-(void)setGenerationCount:(long long)arg1 ;
-(IOHIDEventRef)creatorHIDEvent;
-(IOHIDEventRef)newHIDEventRef;
-(SCD_Struct_AX3*)newEventRecord;
-(void)setTaskPort:(unsigned)arg1 ;
-(AXEventHandInfoRepresentation *)handInfo;
-(unsigned)willUpdateMask;
-(void)setWillUpdateMask:(unsigned)arg1 ;
-(unsigned)didUpdateMask;
-(void)setDidUpdateMask:(unsigned)arg1 ;
-(id)_tabularDescription;
-(void)setWindowLocation:(CGPoint)arg1 ;
-(void)setHandInfo:(AXEventHandInfoRepresentation *)arg1 ;
-(void)setIsGeneratedEvent:(BOOL)arg1 ;
-(void)setSenderID:(unsigned long long)arg1 ;
-(void)setKeyInfo:(AXEventKeyInfoRepresentation *)arg1 ;
-(void)setScrollAmount:(long long)arg1 ;
-(void)setGameControllerInfo:(AXEventGameControllerInfoRepresentation *)arg1 ;
-(void)setHIDAttributeData:(NSData *)arg1 ;
-(void)setIsBuiltIn:(BOOL)arg1 ;
-(void)setIsDisplayIntegrated:(BOOL)arg1 ;
-(void)setHIDTime:(unsigned long long)arg1 ;
-(unsigned long long)HIDTime;
-(void)setCreatorHIDEvent:(IOHIDEventRef)arg1 ;
-(void)setAccelerometerInfo:(AXEventAccelerometerInfoRepresentation *)arg1 ;
-(IOHIDEventRef)_newHandHIDEventRef;
-(IOHIDEventRef)_newButtonHIDEventRef;
-(IOHIDEventRef)_newKeyboardHIDEventRef;
-(IOHIDEventRef)_newAccelerometerHIDEventRef;
-(AXEventAccelerometerInfoRepresentation *)accelerometerInfo;
-(unsigned long long)senderID;
-(AXEventKeyInfoRepresentation *)keyInfo;
-(BOOL)_isDownEvent;
-(NSData *)HIDAttributeData;
-(BOOL)useOriginalHIDTime;
-(unsigned long long)additionalFlags;
-(BOOL)isGeneratedEvent;
-(BOOL)isDisplayIntegrated;
-(CGPoint)windowLocation;
-(void)setAdditionalFlags:(unsigned long long)arg1 ;
-(long long)scrollAmount;
-(AXEventGameControllerInfoRepresentation *)gameControllerInfo;
-(id)_senderNameForID;
-(void)resetInitialTouchCountValueForHidStreamIdentifier:(id)arg1 ;
-(BOOL)isUpdate;
-(BOOL)willBeUpdated;
-(unsigned)_contextIDFromHIDEvent:(IOHIDEventRef)arg1 ;
-(id)normalizedEventRepresentation:(BOOL)arg1 scale:(BOOL)arg2 ;
-(id)fakeTouchScaleEventRepresentation:(BOOL)arg1 ;
-(void)modifyPoints:(/*^block*/id)arg1 ;
-(void)neuterUpdates;
-(id)denormalizedEventRepresentation:(BOOL)arg1 descale:(BOOL)arg2 ;
-(GSEventRef)newGSEventRef;
-(unsigned)firstPathContextId;
-(void)setUseOriginalHIDTime:(BOOL)arg1 ;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(void)setClientId:(NSString *)arg1 ;
-(NSString *)clientId;
-(BOOL)isBuiltIn;
-(unsigned)taskPort;
-(void)setFlags:(int)arg1 ;
-(int)flags;
@end


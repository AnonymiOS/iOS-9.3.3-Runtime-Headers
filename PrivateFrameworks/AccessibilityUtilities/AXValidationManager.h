/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:52 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXValidationReportingServices;
@class NSString, NSMutableArray;

@interface AXValidationManager : NSObject {

	BOOL _shouldLogToConsole;
	BOOL _shouldCrashOnError;
	BOOL _shouldReportToServer;
	BOOL _forceDoNotReport;
	BOOL _debugBuild;
	unsigned long long _numberOfValidationErrors;
	NSString* _validationTargetName;
	NSString* _overrideProcessName;
	NSMutableArray* _consoleErrorMessages;
	id<AXValidationReportingServices> _validationReportingServices;

}

@property (assign,nonatomic) BOOL forceDoNotReport;                                                      //@synthesize forceDoNotReport=_forceDoNotReport - In the implementation block
@property (nonatomic,copy) NSString * validationTargetName;                                              //@synthesize validationTargetName=_validationTargetName - In the implementation block
@property (nonatomic,copy) NSString * overrideProcessName;                                               //@synthesize overrideProcessName=_overrideProcessName - In the implementation block
@property (assign,getter=isDebugBuild,nonatomic) BOOL debugBuild;                                        //@synthesize debugBuild=_debugBuild - In the implementation block
@property (assign,nonatomic) BOOL shouldLogToConsole;                                                    //@synthesize shouldLogToConsole=_shouldLogToConsole - In the implementation block
@property (assign,nonatomic) BOOL shouldCrashOnError;                                                    //@synthesize shouldCrashOnError=_shouldCrashOnError - In the implementation block
@property (assign,nonatomic) BOOL shouldReportToServer;                                                  //@synthesize shouldReportToServer=_shouldReportToServer - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfValidationErrors;                                //@synthesize numberOfValidationErrors=_numberOfValidationErrors - In the implementation block
@property (nonatomic,retain) NSMutableArray * consoleErrorMessages;                                      //@synthesize consoleErrorMessages=_consoleErrorMessages - In the implementation block
@property (nonatomic,retain) id<AXValidationReportingServices> validationReportingServices;              //@synthesize validationReportingServices=_validationReportingServices - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)sendExceptionForSafeValueKey:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)sendExceptionForSafeIVarKey:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)sendExceptionForSafeBlock:(id)arg1 overrideProcessName:(id)arg2 ;
-(void)setValidationReportingServices:(id<AXValidationReportingServices>)arg1 ;
-(void)setOverrideProcessName:(NSString *)arg1 ;
-(void)setValidationTargetName:(NSString *)arg1 ;
-(void)setConsoleErrorMessages:(NSMutableArray *)arg1 ;
-(void)performValidations:(/*^block*/id)arg1 withPreValidationHandler:(/*^block*/id)arg2 postValidationHandler:(/*^block*/id)arg3 safeCategoryInstallationHandler:(/*^block*/id)arg4 ;
-(void)setNumberOfValidationErrors:(unsigned long long)arg1 ;
-(void)setForceDoNotReport:(BOOL)arg1 ;
-(void)setDebugBuild:(BOOL)arg1 ;
-(void)setShouldLogToConsole:(BOOL)arg1 ;
-(void)setShouldCrashOnError:(BOOL)arg1 ;
-(void)setShouldReportToServer:(BOOL)arg1 ;
-(NSString *)validationTargetName;
-(unsigned long long)numberOfValidationErrors;
-(NSString *)overrideProcessName;
-(void)sendValidationSuccessForProcessName:(id)arg1 ;
-(void)_printConsoleReport:(BOOL)arg1 isDelayed:(BOOL)arg2 ;
-(void)installSafeCategories:(/*^block*/id)arg1 afterDelay:(double)arg2 validationTargetName:(id)arg3 overrideProcessName:(id)arg4 forceDoNotReport:(BOOL)arg5 ;
-(BOOL)isDebugBuild;
-(NSMutableArray *)consoleErrorMessages;
-(BOOL)client:(id)arg1 validateClass:(id)arg2 ;
-(void)sendValidateExceptionForClass:(id)arg1 errorMessage:(id)arg2 overrideProcessName:(id)arg3 ;
-(BOOL)client:(id)arg1 validateClass:(id)arg2 isKindOfClass:(id)arg3 ;
-(void)sendValidateExceptionForClass:(id)arg1 isKindOfClass:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(BOOL)client:(id)arg1 validateClass:(id)arg2 hasInstanceVariable:(id)arg3 ;
-(void)sendValidateExceptionForClass:(id)arg1 hasInstanceVariable:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(BOOL)client:(id)arg1 validateClass:(id)arg2 hasInstanceVariable:(id)arg3 withType:(char*)arg4 ;
-(void)sendValidateExceptionForClass:(id)arg1 hasInstanceMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(void)sendValidateExceptionForClass:(id)arg1 hasClassMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(BOOL)_client:(id)arg1 validateClass:(id)arg2 hasClassMethod:(id)arg3 withFullSignature:(char*)arg4 argList:(char*)arg5 ;
-(BOOL)_client:(id)arg1 validateClass:(id)arg2 hasMethod:(id)arg3 methodType:(int)arg4 returnType:(id)arg5 arguments:(id)arg6 ;
-(BOOL)client:(id)arg1 validateClass:(id)arg2 hasInstanceMethod:(id)arg3 withFullSignature:(char*)arg4 argList:(char*)arg5 ;
-(BOOL)client:(id)arg1 validateClass:(id)arg2 hasInstanceMethod:(id)arg3 ;
-(BOOL)_client:(id)arg1 validateClass:(id)arg2 hasMethod:(id)arg3 methodType:(int)arg4 ;
-(BOOL)client:(id)arg1 validateClass:(id)arg2 hasClassMethod:(id)arg3 ;
-(BOOL)client:(id)arg1 validateClass:(id)arg2 hasProperty:(id)arg3 ;
-(BOOL)client:(id)arg1 validateClass:(id)arg2 hasProperty:(id)arg3 withType:(char*)arg4 ;
-(void)sendValidateExceptionForClass:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(BOOL)client:(id)arg1 validateClass:(id)arg2 conformsToProtocol:(id)arg3 ;
-(void)sendValidateExceptionForClass:(id)arg1 conformsToProtocol:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(BOOL)client:(id)arg1 validateProtocol:(id)arg2 hasMethod:(id)arg3 isInstanceMethod:(BOOL)arg4 isRequired:(BOOL)arg5 ;
-(void)sendValidateExceptionForProtocol:(id)arg1 hasMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(BOOL)client:(id)arg1 validateProtocol:(id)arg2 hasOptionalInstanceMethod:(id)arg3 ;
-(BOOL)client:(id)arg1 validateProtocol:(id)arg2 hasRequiredInstanceMethod:(id)arg3 ;
-(BOOL)client:(id)arg1 validateProtocol:(id)arg2 hasProperty:(id)arg3 ;
-(void)sendValidateExceptionForProtocol:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(BOOL)installSafeCategory:(id)arg1 canInteractWithTargetClass:(BOOL)arg2 ;
-(void)sendExceptionForInstallingSafeCategory:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3 ;
-(id<AXValidationReportingServices>)validationReportingServices;
-(void)sendGenericReport:(id)arg1 withTag:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)sendFailedAssertionWithErrorMessage:(id)arg1 overrideProcessName:(id)arg2 ;
-(void)sendFailedTestCase:(id)arg1 withTag:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)performValidations:(/*^block*/id)arg1 withPreValidationHandler:(/*^block*/id)arg2 postValidationHandler:(/*^block*/id)arg3 ;
-(void)installSafeCategories:(/*^block*/id)arg1 afterDelay:(double)arg2 validationTargetName:(id)arg3 overrideProcessName:(id)arg4 ;
-(BOOL)validateClass:(id)arg1 ;
-(BOOL)validateClass:(id)arg1 isKindOfClass:(id)arg2 ;
-(BOOL)validateClass:(id)arg1 hasInstanceVariable:(id)arg2 ;
-(BOOL)validateClass:(id)arg1 hasInstanceVariable:(id)arg2 withType:(char*)arg3 ;
-(BOOL)validateClass:(id)arg1 hasClassMethod:(id)arg2 withFullSignature:(char*)arg3 ;
-(BOOL)client:(id)arg1 validateClass:(id)arg2 hasClassMethod:(id)arg3 withFullSignature:(char*)arg4 ;
-(BOOL)client:(id)arg1 validateClass:(id)arg2 hasInstanceMethod:(id)arg3 withFullSignature:(char*)arg4 ;
-(BOOL)validateClass:(id)arg1 hasInstanceMethod:(id)arg2 withFullSignature:(char*)arg3 ;
-(BOOL)validateClass:(id)arg1 hasInstanceMethod:(id)arg2 ;
-(BOOL)validateClass:(id)arg1 hasClassMethod:(id)arg2 ;
-(BOOL)validateClass:(id)arg1 hasProperty:(id)arg2 ;
-(BOOL)validateClass:(id)arg1 hasProperty:(id)arg2 withType:(char*)arg3 ;
-(BOOL)validateClass:(id)arg1 conformsToProtocol:(id)arg2 ;
-(BOOL)validateProtocol:(id)arg1 hasMethod:(id)arg2 isInstanceMethod:(BOOL)arg3 isRequired:(BOOL)arg4 ;
-(BOOL)validateProtocol:(id)arg1 hasOptionalInstanceMethod:(id)arg2 ;
-(BOOL)validateProtocol:(id)arg1 hasRequiredInstanceMethod:(id)arg2 ;
-(BOOL)validateProtocol:(id)arg1 hasOptionalClassMethod:(id)arg2 ;
-(BOOL)client:(id)arg1 validateProtocol:(id)arg2 hasOptionalClassMethod:(id)arg3 ;
-(BOOL)validateProtocol:(id)arg1 hasRequiredClassMethod:(id)arg2 ;
-(BOOL)client:(id)arg1 validateProtocol:(id)arg2 hasRequiredClassMethod:(id)arg3 ;
-(BOOL)validateProtocol:(id)arg1 hasProperty:(id)arg2 ;
-(BOOL)installSafeCategory:(id)arg1 ;
-(BOOL)shouldLogToConsole;
-(BOOL)shouldCrashOnError;
-(BOOL)shouldReportToServer;
-(BOOL)forceDoNotReport;
@end


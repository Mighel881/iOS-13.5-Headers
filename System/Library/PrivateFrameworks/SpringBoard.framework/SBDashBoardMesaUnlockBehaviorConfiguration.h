/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBLiftToWakeObserver.h>
#import <libobjc.A.dylib/SBBiometricUnlockBehaviorConfiguration.h>

@protocol SBBiometricUnlockBehaviorConfigurationDelegate;
@class SBLiftToWakeController, CSLockScreenSettings, SBUIBiometricResource, NSString;

@interface SBDashBoardMesaUnlockBehaviorConfiguration : NSObject <SBLiftToWakeObserver, SBBiometricUnlockBehaviorConfiguration> {

	id<SBBiometricUnlockBehaviorConfigurationDelegate> _delegate;
	SBLiftToWakeController* _liftToWakeController;
	CSLockScreenSettings* _prototypeSettings;
	SBUIBiometricResource* _biometricResource;
	Class _currentTriggerClass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBBiometricUnlockBehaviorConfigurationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<SBBiometricUnlockBehaviorConfigurationDelegate>)delegate;
-(void)setDelegate:(id<SBBiometricUnlockBehaviorConfigurationDelegate>)arg1 ;
-(void)_accessibilityOptionsChanged:(id)arg1 ;
-(void)_evaluateTriggerClass;
-(id)_unlockTriggerWithClass:(Class)arg1 ;
-(Class)_expectedTriggerClassIncludingAccessibility:(BOOL)arg1 ;
-(BOOL)_isAccessibilityRestingUnlockPreferenceEnabled;
-(void)liftToWakeControllerEnablementDidChange:(id)arg1 ;
-(id)newBehaviorForCurrentConfiguration;
-(id)initWithLiftToWakeController:(id)arg1 biometricResource:(id)arg2 lockScreenPrototypeSettings:(id)arg3 ;
-(Class)_currentUnlockTriggerClass;
@end

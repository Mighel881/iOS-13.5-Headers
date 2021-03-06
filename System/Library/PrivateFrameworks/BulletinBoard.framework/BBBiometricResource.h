/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class BKDevice, NSObject;

@interface BBBiometricResource : NSObject {

	BOOL _isPasscodeSet;
	BOOL _isBiometricUnlockAllowed;
	BOOL _hasEnrolledPearlIdentities;
	BKDevice* _pearlDevice;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) BOOL hasPearlCapability; 
@property (nonatomic,readonly) BOOL isPearlEnabledAndEnrolled; 
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)hasPearlCapability;
-(BOOL)isPearlEnabledAndEnrolled;
-(void)_updateIsPasscodeSet;
-(void)_updateIsBiometricUnlockAllowed;
-(void)_updateHasEnrolledPearlIdentities;
-(void)_registerForBKEnrollmentChange;
-(void)_registerForBiometricUnlockAllowedChange;
-(void)_registerForPasscodeChange;
-(void)_unregisterForBKEnrollmentChange;
-(void)_unregisterForBiometricUnlockAllowedChange;
@end


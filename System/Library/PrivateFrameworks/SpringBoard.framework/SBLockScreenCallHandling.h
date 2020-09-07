/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBLockScreenCallHandling <NSObject>
@required
-(BOOL)isMakingEmergencyCall;
-(void)launchEmergencyDialer;
-(void)launchEmergencyDialerAnimated:(BOOL)arg1;
-(void)exitEmergencyDialerAnimated:(BOOL)arg1;
-(void)launchInCallAlert;
-(void)emergencyDialerExitedWithError:(id)arg1;

@end

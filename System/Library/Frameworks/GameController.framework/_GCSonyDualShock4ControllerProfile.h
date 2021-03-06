/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GCExtendedGamepad.h>
#import <libobjc.A.dylib/_GCACHomeButtonDelegate.h>

@class _GCACHomeButton, NSString;

@interface _GCSonyDualShock4ControllerProfile : GCExtendedGamepad <_GCACHomeButtonDelegate> {

	_GCACHomeButton* _acHome;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)name;
-(id)initWithCoder:(id)arg1 ;
-(void)setPlayerIndex:(long long)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)toggleSuspendResume;
-(id)menuButton;
-(id)productCategory;
-(BOOL)isBluetoothAndUSBMirrored;
-(void)setHapticMotor:(int)arg1 frequency:(float)arg2 ;
-(void)setEnableTimeForHaptics:(BOOL)arg1 ;
-(void)triggerHapticsForDuration:(float)arg1 ;
-(void)setLightbarColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 ;
-(void)triggerHaptics;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCExtendedGamepad.h>
#import <libobjc.A.dylib/_GCACHomeButtonDelegate.h>

@class _GCACHomeButton, NSString;

@interface _GCMFiExtendedGamepadControllerProfile : GCExtendedGamepad <_GCACHomeButtonDelegate> {

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
-(void)determineControllerCapabilities:(id)arg1 initInfo:(GCExtendedGamepadInitWithControllerInitInfo*)arg2 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:03:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConnectivityModule/CCUIConnectivityButtonViewController.h>
#import <libobjc.A.dylib/SFAirDropDiscoveryControllerDelegate.h>
#import <libobjc.A.dylib/SFAirDropDiscoveryAlertControllerDelegate.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>
#import <libobjc.A.dylib/CCUIContentModuleDetailClickPresentationInteractionManagerDelegate.h>

@class SFAirDropDiscoveryController, CCUIContentModuleDetailTransitioningDelegate, CCUIContentModuleDetailClickPresentationInteractionManager, NSString;

@interface CCUIConnectivityAirDropViewController : CCUIConnectivityButtonViewController <SFAirDropDiscoveryControllerDelegate, SFAirDropDiscoveryAlertControllerDelegate, MCProfileConnectionObserver, CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> {

	SFAirDropDiscoveryController* _airDropDiscoveryController;
	CCUIContentModuleDetailTransitioningDelegate* _detailTransitioningDelegate;
	CCUIContentModuleDetailClickPresentationInteractionManager* _clickPresentationInteractionManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupported;
-(id)init;
-(id)displayName;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_updateState;
-(void)buttonTapped:(id)arg1 ;
-(id)presentedViewControllerForContentModuleDetailClickPresentationInteractionController:(id)arg1 ;
-(void)containerWillTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)startObservingStateChanges;
-(void)stopObservingStateChanges;
-(id)_newAirDropMenuViewController;
-(BOOL)_isEduModeEnabled;
-(BOOL)_isAirDropRestricted;
-(void)_updateAirDropControlAsEnabled:(BOOL)arg1 ;
-(void)discoveryControllerSettingsDidChange:(id)arg1 ;
-(void)discoveryControllerVisibilityDidChange:(id)arg1 ;
@end

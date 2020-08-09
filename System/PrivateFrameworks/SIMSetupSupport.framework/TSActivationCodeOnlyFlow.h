/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SIMSetupSupport/TSSIMSetupFlow.h>
#import <libobjc.A.dylib/TSSIMSetupFlowDelegate.h>
#import <libobjc.A.dylib/TSCellularPlanManagerCacheDelegate.h>

@protocol TSSetupFlowItem;
@class NSError, NSString, UIBarButtonItem, UIViewController;

@interface TSActivationCodeOnlyFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate> {

	BOOL _confirmationCodeRequired;
	NSError* _planInstallError;
	NSString* _carrierName;
	unsigned long long _userConsentType;
	UIBarButtonItem* _cancelButton;
	UIViewController*<TSSetupFlowItem> _currentViewController;
	BOOL _isPreinstallingViewControllerActive;

}

@property (assign) BOOL isPreinstallingViewControllerActive;              //@synthesize isPreinstallingViewControllerActive=_isPreinstallingViewControllerActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)firstViewController;
-(void)viewControllerDidComplete:(id)arg1 ;
-(void)setDefaultNavigationItems:(id)arg1 ;
-(long long)signupUserConsentResponse;
-(id)nextViewControllerFrom:(id)arg1 ;
-(void)popViewController:(id)arg1 ;
-(void)firstViewController:(/*^block*/id)arg1 ;
-(void)planItemsUpdated:(id)arg1 planListError:(id)arg2 ;
-(BOOL)isPreinstallingViewControllerActive;
-(void)setIsPreinstallingViewControllerActive:(BOOL)arg1 ;
@end

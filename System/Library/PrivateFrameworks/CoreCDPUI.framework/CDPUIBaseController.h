/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPStateUIProvider.h>

@class UIViewController, NSString;

@interface CDPUIBaseController : NSObject <CDPStateUIProvider> {

	UIViewController* _presentingViewController;

}

@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(id)initWithPresentingViewController:(id)arg1 ;
-(void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(BOOL)arg3 validator:(id)arg4 ;
-(void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(BOOL)arg2 numericLength:(id)arg3 isRandom:(BOOL)arg4 validator:(id)arg5 ;
-(void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(/*^block*/id)arg2 ;
-(void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(/*^block*/id)arg2 ;
-(void)cdpContext:(id)arg1 promptForLocalSecretWithCompletion:(/*^block*/id)arg2 ;
-(void)cdpContext:(id)arg1 showError:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)cdpContext:(id)arg1 showError:(id)arg2 withDefaultIndex:(long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)initWithPresentingViewControlller:(id)arg1 ;
@end

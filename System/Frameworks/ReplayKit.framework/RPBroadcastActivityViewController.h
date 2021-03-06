/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol RPBroadcastActivityViewControllerDelegate;
@class UIPopoverPresentationController, RPBroadcastActivityHostViewController;

@interface RPBroadcastActivityViewController : UIViewController {

	id<RPBroadcastActivityViewControllerDelegate> _delegate;
	UIPopoverPresentationController* _popoverPresentationControllerProxy;
	RPBroadcastActivityHostViewController* _hostViewController;
	/*^block*/id _didFinishHandler;

}

@property (nonatomic,retain) UIPopoverPresentationController * popoverPresentationControllerProxy;              //@synthesize popoverPresentationControllerProxy=_popoverPresentationControllerProxy - In the implementation block
@property (nonatomic,retain) RPBroadcastActivityHostViewController * hostViewController;                        //@synthesize hostViewController=_hostViewController - In the implementation block
@property (nonatomic,copy) id didFinishHandler;                                                                 //@synthesize didFinishHandler=_didFinishHandler - In the implementation block
@property (assign,nonatomic,__weak) id<RPBroadcastActivityViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
+(void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)loadBroadcastActivityViewControllerWithPreferredExtension:(id)arg1 handler:(/*^block*/id)arg2 broadcastActivitiesNotInstalledAlertTitle:(id)arg3 broadcastActivitiesNotInstalledAlertMessage:(id)arg4 ;
+(void)loadBroadcastActivityViewControllerWithPreferredExtension:(id)arg1 handler:(/*^block*/id)arg2 ;
+(void)loadBroadcastActivityViewControllerWithHandler:(/*^block*/id)arg1 ;
-(id<RPBroadcastActivityViewControllerDelegate>)delegate;
-(void)setDelegate:(id<RPBroadcastActivityViewControllerDelegate>)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(id)popoverPresentationController;
-(void)setHostViewController:(RPBroadcastActivityHostViewController *)arg1 ;
-(RPBroadcastActivityHostViewController *)hostViewController;
-(void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 cancelled:(BOOL)arg4 ;
-(void)setDidFinishHandler:(id)arg1 ;
-(void)setPopoverPresentationControllerProxy:(UIPopoverPresentationController *)arg1 ;
-(UIPopoverPresentationController *)popoverPresentationControllerProxy;
-(id)didFinishHandler;
@end


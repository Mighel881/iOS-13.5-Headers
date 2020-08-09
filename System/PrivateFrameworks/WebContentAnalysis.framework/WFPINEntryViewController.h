/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFPINEntryViewControllerProtocol.h>

@class _UIFallbackPresentationViewController, NSArray, UIViewController, WFRemotePINEntryViewController, NSURL, NSString;

@interface WFPINEntryViewController : UIViewController <WFPINEntryViewControllerProtocol> {

	_UIFallbackPresentationViewController* _fallbackPresentationVC;
	NSArray* _windowsWithDisabledRotation;
	UIViewController* _rootViewControllerToUse;
	WFRemotePINEntryViewController* _remoteViewController;
	NSURL* _URL;
	NSString* _pageTitle;
	/*^block*/id _completion;
	/*^block*/id _dismissCompletionHandler;

}

@property (nonatomic,copy) id dismissCompletionHandler;              //@synthesize dismissCompletionHandler=_dismissCompletionHandler - In the implementation block
+(Class)remoteViewControllerClass;
+(id)serviceViewControllerClassName;
-(void)dealloc;
-(id)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(id)arg1 ;
-(unsigned long long)_supportedInterfaceOrientationsForRootViewController;
-(void)userDidCancel;
-(void)userEnteredCorrectPIN;
-(void)insertRemoteViewController:(id)arg1 ;
-(BOOL)hasUIWebViewSubView:(id)arg1 ;
-(id)initWithURL:(id)arg1 pageTitle:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

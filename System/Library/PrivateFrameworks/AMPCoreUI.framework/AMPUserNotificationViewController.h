/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AMPCoreUI.framework/AMPCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AMPCoreUI/AMPCoreUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <AMPCoreUI/AMPUserNotificationContentDelegate.h>
#import <libobjc.A.dylib/UNNotificationContentExtension.h>

@protocol AMSURLBagContract;
@class UIColor, AMPUserNotificationContentViewController, NSString;

@interface AMPUserNotificationViewController : UIViewController <AMPUserNotificationContentDelegate, UNNotificationContentExtension> {

	id<AMSURLBagContract> _bagContract;
	AMPUserNotificationContentViewController* _contentViewController;

}

@property (nonatomic,retain) AMPUserNotificationContentViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) id<AMSURLBagContract> bagContract;                                             //@synthesize bagContract=_bagContract - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long mediaPlayPauseButtonType; 
@property (nonatomic,readonly) CGRect mediaPlayPauseButtonFrame; 
@property (nonatomic,copy,readonly) UIColor * mediaPlayPauseButtonTintColor; 
+(id)userNotificationFromNotification:(id)arg1 ;
-(void)setContentViewController:(AMPUserNotificationContentViewController *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(AMPUserNotificationContentViewController *)contentViewController;
-(id<AMSURLBagContract>)bagContract;
-(void)setBagContract:(id<AMSURLBagContract>)arg1 ;
-(void)didReceiveNotification:(id)arg1 ;
-(void)didReceiveNotificationResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)viewController:(id)arg1 didUpdatePreferredContentSize:(CGSize)arg2 ;
-(void)openNotification;
-(void)renderUserNotification:(id)arg1 ;
@end


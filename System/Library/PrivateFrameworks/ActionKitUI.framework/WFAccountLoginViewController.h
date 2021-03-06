/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol WFAccountLoginViewControllerDelegate;
@interface WFAccountLoginViewController : UIViewController {

	id<WFAccountLoginViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WFAccountLoginViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id<WFAccountLoginViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFAccountLoginViewControllerDelegate>)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithAccountClass:(Class)arg1 ;
@end


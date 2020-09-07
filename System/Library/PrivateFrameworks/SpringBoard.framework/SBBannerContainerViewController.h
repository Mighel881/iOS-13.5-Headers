/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol SBBannerContainerViewControllerDelegate;
@class NCBannerPresentationTransitionDelegate, SBUIBannerContext, UIScrollView, SBBannerContainerView, SBBannerContextView, NSString;

@interface SBBannerContainerViewController : UIViewController <UIScrollViewDelegate, UIViewControllerTransitioningDelegate> {

	NCBannerPresentationTransitionDelegate* _bannerPresentationTransitionDelegate;
	SBUIBannerContext* _bannerContext;
	UIScrollView* _scrollView;
	SBBannerContainerView* _bannerContainerView;
	SBBannerContextView* _bannerContextView;
	id<SBBannerContainerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBBannerContainerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SBBannerContainerView * bannerContainerView;                            //@synthesize bannerContainerView=_bannerContainerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBBannerContainerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBBannerContainerViewControllerDelegate>)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)setBannerContext:(id)arg1 withReplaceReason:(int)arg2 completion:(/*^block*/id)arg3 ;
-(SBBannerContainerView *)bannerContainerView;
-(id)_bannerContextViewCreatingIfNecessary;
-(void)_handleBannerTapGesture:(id)arg1 ;
-(void)_tryDismissingBannerInScrollView:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class MPAVRoutingViewController, UIView;

@interface MediaControlsPanelViewController : UIViewController {

	id _delegate;
	MPAVRoutingViewController* _routingViewController;
	UIView* _backgroundView;

}

@property (assign,nonatomic,__weak) id delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPAVRoutingViewController * routingViewController;              //@synthesize routingViewController=_routingViewController - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                        //@synthesize backgroundView=_backgroundView - In the implementation block
+(id)panelViewControllerForCoverSheet;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(UIView *)backgroundView;
-(void)setBackgroundView:(UIView *)arg1 ;
-(MPAVRoutingViewController *)routingViewController;
-(void)setRoutingViewController:(MPAVRoutingViewController *)arg1 ;
@end


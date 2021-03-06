/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol VideosExtrasVideoPlaybackViewController;
@class UIViewController, NSLayoutConstraint, VideosExtrasContext, UIView;

@interface VideosExtrasFeatureContainerViewController : UIViewController {

	UIViewController*<VideosExtrasVideoPlaybackViewController> _videoPlaybackViewController;
	NSLayoutConstraint* _overlayViewAdjustmentConstraint;
	VideosExtrasContext* _context;
	UIView* _menuBarView;
	double _collectionViewHeight;

}

@property (assign,nonatomic) double collectionViewHeight;                                                                         //@synthesize collectionViewHeight=_collectionViewHeight - In the implementation block
@property (nonatomic,__weak,readonly) VideosExtrasContext * context;                                                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIViewController*<VideosExtrasVideoPlaybackViewController> videoPlaybackViewController;              //@synthesize videoPlaybackViewController=_videoPlaybackViewController - In the implementation block
@property (assign,nonatomic,__weak) UIView * menuBarView;                                                                         //@synthesize menuBarView=_menuBarView - In the implementation block
-(void)dealloc;
-(VideosExtrasContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)viewDidLoad;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(void)setCollectionViewHeight:(double)arg1 ;
-(double)collectionViewHeight;
-(void)_menuBarHeightChange:(id)arg1 ;
-(void)setVideoPlaybackViewController:(UIViewController*<VideosExtrasVideoPlaybackViewController>)arg1 ;
-(void)setMenuBarView:(UIView *)arg1 ;
-(UIViewController*<VideosExtrasVideoPlaybackViewController>)videoPlaybackViewController;
-(UIView *)menuBarView;
@end


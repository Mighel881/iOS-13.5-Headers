/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UILabel, UIActivityIndicatorView;

@interface PMTTRLoadingViewController : UIViewController {

	UILabel* _radarCollectionInfoLabel;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,retain) UILabel * radarCollectionInfoLabel;                           //@synthesize radarCollectionInfoLabel=_radarCollectionInfoLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
-(void)viewDidLoad;
-(void)didReceiveMemoryWarning;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(UILabel *)radarCollectionInfoLabel;
-(void)setRadarCollectionInfoLabel:(UILabel *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIBarButtonItem.h>

@class UIActivityIndicatorView;

@interface TSSpinnerNavigationBarItem : UIBarButtonItem {

	UIActivityIndicatorView* _activityIndicator;

}

@property (retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(id)init;
-(void)startAnimating;
-(void)stopAnimating;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
@end


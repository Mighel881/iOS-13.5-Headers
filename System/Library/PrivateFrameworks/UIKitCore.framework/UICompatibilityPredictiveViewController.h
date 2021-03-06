/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPredictiveViewController.h>

@class NSArray, UIView, NSString;

@interface UICompatibilityPredictiveViewController : UIViewController <UIPredictiveViewController> {

	UIView* _customView;

}

@property (nonatomic,retain) UIView * customView;                          //@synthesize customView=_customView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * displayedCandidates; 
-(void)setCustomView:(UIView *)arg1 ;
-(UIView *)customView;
-(void)viewDidLayoutSubviews;
-(BOOL)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2 ;
-(BOOL)hidesExpandableButton;
-(NSArray *)displayedCandidates;
@end


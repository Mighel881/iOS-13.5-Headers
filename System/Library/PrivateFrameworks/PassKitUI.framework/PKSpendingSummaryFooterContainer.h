/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKSpendingSummaryFooter;
@class _UIBackdropView, UIView;

@interface PKSpendingSummaryFooterContainer : UIView {

	long long _backdropStyle;
	_UIBackdropView* _backdropView;
	UIView* _topSeparatorView;
	UIView*<PKSpendingSummaryFooter> _currentFooter;
	UIView*<PKSpendingSummaryFooter> _nextFooter;

}

@property (nonatomic,retain) UIView*<PKSpendingSummaryFooter> currentFooter;              //@synthesize currentFooter=_currentFooter - In the implementation block
@property (nonatomic,retain) UIView*<PKSpendingSummaryFooter> nextFooter;                 //@synthesize nextFooter=_nextFooter - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setTransitionProgress:(double)arg1 ;
-(void)setCurrentFooter:(UIView*<PKSpendingSummaryFooter>)arg1 ;
-(void)setNextFooter:(UIView*<PKSpendingSummaryFooter>)arg1 ;
-(long long)preferredBackdropStyle;
-(UIView*<PKSpendingSummaryFooter>)currentFooter;
-(UIView*<PKSpendingSummaryFooter>)nextFooter;
@end


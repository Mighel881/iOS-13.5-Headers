/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIBackdropView, UILabel, UITextView, UIButton, NSDate;

@interface UIKeyboardGlobeKeyIntroductionView : UIView {

	/*^block*/id _completionBlock;
	_UIBackdropView* _backdropView;
	UILabel* _titleLabel;
	UITextView* _descriptionLabel;
	UIButton* _continueButton;
	NSDate* _startDate;

}

@property (nonatomic,copy) id completionBlock;                            //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UITextView * descriptionLabel;               //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIButton * continueButton;                   //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                          //@synthesize startDate=_startDate - In the implementation block
-(NSDate *)startDate;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(void)setDescriptionLabel:(UITextView *)arg1 ;
-(UITextView *)descriptionLabel;
-(void)setContinueButton:(UIButton *)arg1 ;
-(UIButton *)continueButton;
-(void)continueButtonTapped;
-(id)initWithFrame:(CGRect)arg1 completion:(/*^block*/id)arg2 ;
-(long long)backdropStyleForRenderConfig:(id)arg1 ;
@end


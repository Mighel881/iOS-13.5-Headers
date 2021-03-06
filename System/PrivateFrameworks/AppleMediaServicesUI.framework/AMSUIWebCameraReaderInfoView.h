/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol AMSUIWebActionRunnable;
@class UIButton, UILabel;

@interface AMSUIWebCameraReaderInfoView : UIView {

	UIButton* _bottomLink;
	id<AMSUIWebActionRunnable> _bottomLinkAction;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;

}

@property (nonatomic,retain) UIButton * bottomLink;                                    //@synthesize bottomLink=_bottomLink - In the implementation block
@property (nonatomic,retain) id<AMSUIWebActionRunnable> bottomLinkAction;              //@synthesize bottomLinkAction=_bottomLinkAction - In the implementation block
@property (nonatomic,retain) UILabel * primaryLabel;                                   //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;                                 //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)primaryLabel;
-(UILabel *)secondaryLabel;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(void)setBottomLink:(UIButton *)arg1 ;
-(UIButton *)bottomLink;
-(void)_bottomLinkSelected:(id)arg1 ;
-(id<AMSUIWebActionRunnable>)bottomLinkAction;
-(void)setBottomLinkAction:(id<AMSUIWebActionRunnable>)arg1 ;
@end


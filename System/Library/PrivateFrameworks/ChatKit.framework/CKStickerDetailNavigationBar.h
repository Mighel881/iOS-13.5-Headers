/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>

@class UIButton, UILabel;

@interface CKStickerDetailNavigationBar : UIVisualEffectView {

	UIButton* _closeButton;
	UILabel* _titleLabel;
	UIEdgeInsets _parentLayoutMargins;

}

@property (nonatomic,retain) UILabel * titleLabel;                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                        //@synthesize closeButton=_closeButton - In the implementation block
@property (assign,nonatomic) UIEdgeInsets parentLayoutMargins;              //@synthesize parentLayoutMargins=_parentLayoutMargins - In the implementation block
-(UILabel *)titleLabel;
-(id)initWithEffect:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIButton *)closeButton;
-(void)setCloseButton:(UIButton *)arg1 ;
-(UIEdgeInsets)parentLayoutMargins;
-(void)setParentLayoutMargins:(UIEdgeInsets)arg1 ;
@end

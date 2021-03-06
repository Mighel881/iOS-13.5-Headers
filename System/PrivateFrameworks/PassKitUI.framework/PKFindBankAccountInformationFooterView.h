/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableFooterView.h>

@class UIButton;

@interface PKFindBankAccountInformationFooterView : PKTableFooterView {

	UIButton* _accountInformationButton;

}

@property (nonatomic,retain) UIButton * accountInformationButton;              //@synthesize accountInformationButton=_accountInformationButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setButtonsEnabled:(BOOL)arg1 ;
-(CGSize)_sizeForButton:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(void)setAccountInformationButton:(UIButton *)arg1 ;
-(UIButton *)accountInformationButton;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKPGSVFooterViewDelegate;
@class PKContinuousButton;

@interface PKPGSVFooterView : UIView {

	PKContinuousButton* _editButton;
	id<PKPGSVFooterViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKPGSVFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PKPGSVFooterViewDelegate>)delegate;
-(void)setDelegate:(id<PKPGSVFooterViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_editTapped:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol AVTAdaptativeLayout;
@class UIView;

@interface AVTAdaptativeLayoutView : UIView {

	id<AVTAdaptativeLayout> _layout;
	UIView* _contentView;

}

@property (nonatomic,readonly) UIView * contentView;                      //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) id<AVTAdaptativeLayout> layout;              //@synthesize layout=_layout - In the implementation block
-(id<AVTAdaptativeLayout>)layout;
-(void)setLayout:(id<AVTAdaptativeLayout>)arg1 ;
-(UIView *)contentView;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 contentView:(id)arg2 ;
@end


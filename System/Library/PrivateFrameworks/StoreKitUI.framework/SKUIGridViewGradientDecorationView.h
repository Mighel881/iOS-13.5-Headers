/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class SKUIGridViewGradientDecorationBackgroundView, IKColor, UIView;

@interface SKUIGridViewGradientDecorationView : UICollectionReusableView {

	SKUIGridViewGradientDecorationBackgroundView* _backgroundView;
	IKColor* _kolor;

}

@property (nonatomic,readonly) UIView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)_createGradient:(id)arg1 withGradientType:(long long)arg2 ;
@end

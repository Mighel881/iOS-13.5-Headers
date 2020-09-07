/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, MTMaterialView, UIView;

@interface CSPasscodeBackgroundView : UIView {

	UIColor* _reduceTransparencyBackingColor;
	MTMaterialView* _materialView;
	UIView* _lightenSourceOverView;
	UIView* _plusDView;
	UIView* _reduceTransparencyTintingView;
	UIView* _reduceTransparencyBackingView;

}

@property (nonatomic,retain) MTMaterialView * materialView;                         //@synthesize materialView=_materialView - In the implementation block
@property (nonatomic,retain) UIView * lightenSourceOverView;                        //@synthesize lightenSourceOverView=_lightenSourceOverView - In the implementation block
@property (nonatomic,retain) UIView * plusDView;                                    //@synthesize plusDView=_plusDView - In the implementation block
@property (nonatomic,retain) UIView * reduceTransparencyTintingView;                //@synthesize reduceTransparencyTintingView=_reduceTransparencyTintingView - In the implementation block
@property (nonatomic,retain) UIView * reduceTransparencyBackingView;                //@synthesize reduceTransparencyBackingView=_reduceTransparencyBackingView - In the implementation block
@property (nonatomic,retain) UIColor * reduceTransparencyBackingColor;              //@synthesize reduceTransparencyBackingColor=_reduceTransparencyBackingColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setWeighting:(double)arg1 ;
-(void)setPlusDView:(UIView *)arg1 ;
-(UIView *)plusDView;
-(MTMaterialView *)materialView;
-(void)setReduceTransparencyBackingColor:(UIColor *)arg1 ;
-(UIColor *)reduceTransparencyBackingColor;
-(void)_setPlusDBackgroundColorWithWeighting:(double)arg1 ;
-(void)setMaterialView:(MTMaterialView *)arg1 ;
-(UIView *)lightenSourceOverView;
-(void)setLightenSourceOverView:(UIView *)arg1 ;
-(UIView *)reduceTransparencyTintingView;
-(void)setReduceTransparencyTintingView:(UIView *)arg1 ;
-(UIView *)reduceTransparencyBackingView;
-(void)setReduceTransparencyBackingView:(UIView *)arg1 ;
@end

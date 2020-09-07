/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUControlPanelCell.h>

@class HUSimpleSliderControlView, NSArray;

@interface HUSliderControlCell : HUControlPanelCell {

	HUSimpleSliderControlView* _sliderView;
	NSArray* _sliderConstraints;

}

@property (nonatomic,copy) NSArray * sliderConstraints;                           //@synthesize sliderConstraints=_sliderConstraints - In the implementation block
@property (nonatomic,retain) HUSimpleSliderControlView * sliderView;              //@synthesize sliderView=_sliderView - In the implementation block
-(void)prepareForReuse;
-(void)setSliderView:(HUSimpleSliderControlView *)arg1 ;
-(HUSimpleSliderControlView *)sliderView;
-(void)_updateSliderConstraints;
-(id)allControlViews;
-(NSArray *)sliderConstraints;
-(void)setSliderConstraints:(NSArray *)arg1 ;
@end

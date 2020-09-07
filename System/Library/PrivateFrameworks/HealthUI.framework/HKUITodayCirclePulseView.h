/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, HKUITodayCirclePulseBackground, CALayer;

@interface HKUITodayCirclePulseView : UIView {

	UIView* _backgroundContainer;
	HKUITodayCirclePulseBackground* _background;
	CALayer* _dayLabel;
	double _circleDiameter;

}

@property (assign,nonatomic) double circleDiameter;              //@synthesize circleDiameter=_circleDiameter - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_layoutSubviews;
-(double)circleDiameter;
-(void)setCircleDiameter:(double)arg1 ;
-(void)pulse:(/*^block*/id)arg1 ;
-(void)setDayLabelContent:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface CAMExposureBiasSliderThumb : UIView {

	float _normalizedExposureValue;

}

@property (assign,nonatomic) float normalizedExposureValue;              //@synthesize normalizedExposureValue=_normalizedExposureValue - In the implementation block
@property (nonatomic,readonly) double maxRadius; 
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)tintColorDidChange;
-(void)drawRect:(CGRect)arg1 ;
-(double)maxRadius;
-(void)setNormalizedExposureValue:(float)arg1 ;
-(double)_sunRadius;
-(double)_sunRaySpacing;
-(double)_sunRayLength;
-(double)_interpolatedValueWithMin:(double)arg1 mid:(double)arg2 max:(double)arg3 ;
-(float)normalizedExposureValue;
@end


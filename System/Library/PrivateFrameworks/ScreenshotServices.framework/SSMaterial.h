/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAFilter, UIColor;

@interface SSMaterial : NSObject {

	CAFilter* _filter;
	UIColor* _color;

}

@property (nonatomic,readonly) CAFilter * filter; 
@property (nonatomic,readonly) UIColor * color; 
@property (nonatomic,readonly) double colorAlpha; 
+(id)cropHandle;
+(id)vellumOpacitySliderTrack;
+(id)vellumOpacitySliderValueImage;
-(UIColor *)color;
-(CAFilter *)filter;
-(void)applyToView:(id)arg1 ;
-(id)_initWithFilterType:(id)arg1 color:(id)arg2 ;
-(double)colorAlpha;
@end

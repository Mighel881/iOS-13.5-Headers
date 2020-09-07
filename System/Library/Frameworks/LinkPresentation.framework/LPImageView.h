/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>

@class LPImage, LPImagePresentationProperties, LPImageViewStyle, UIImageView, UIView;

@interface LPImageView : LPComponentView {

	LPImage* _image;
	LPImagePresentationProperties* _properties;
	LPImageViewStyle* _style;
	LPImageViewStyle* _originalStyle;
	long long _currentScalingMode;
	long long _platterReason;
	UIImageView* _imageView;
	UIView* _overlayView;
	UIView* _backgroundView;

}
-(id)init;
-(long long)_filter;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutComponentView;
-(id)initWithImage:(id)arg1 properties:(id)arg2 style:(id)arg3 ;
-(void)componentViewDidMoveToWindow;
-(BOOL)shouldApplyBackground;
-(void)installDarkeningView;
-(id)_createImageViewWithImage:(id)arg1 ;
-(void)_updateScalingMode;
-(void)setCornerRadius:(double)arg1 continuous:(BOOL)arg2 ;
-(void)updateShadowPath;
-(id)_createOverlayViewWithOpacity:(double)arg1 ;
-(CGSize)imageSizeThatFits:(CGSize)arg1 scalingMode:(long long)arg2 ;
-(long long)scalingModeForSize:(CGSize)arg1 ;
-(CGSize)imageSizeThatFits:(CGSize)arg1 ;
-(void)_setImageViewScalingMode:(long long)arg1 ;
@end

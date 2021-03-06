/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, _TVInspectorHighlightMetadataView, UIWindow, UIColor, UILabel;

@interface _TVInspectorHighlightView : UIView {

	UIView* _highlightView;
	_TVInspectorHighlightMetadataView* _metadataView;
	UIWindow* _targetWindow;
	UIColor* _borderColor;

}

@property (assign,nonatomic,__weak) UIWindow * targetWindow;              //@synthesize targetWindow=_targetWindow - In the implementation block
@property (nonatomic,retain) UIColor * contentColor; 
@property (nonatomic,retain) UIColor * borderColor;                       //@synthesize borderColor=_borderColor - In the implementation block
@property (nonatomic,readonly) UILabel * descriptionLabel; 
-(void)setBorderColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)descriptionLabel;
-(void)highlightView:(id)arg1 ;
-(UIColor *)borderColor;
-(void)setContentColor:(UIColor *)arg1 ;
-(UIColor *)contentColor;
-(UIWindow *)targetWindow;
-(void)setTargetWindow:(UIWindow *)arg1 ;
@end


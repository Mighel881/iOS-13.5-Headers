/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NCAuxiliaryOptionsSupporting.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>

@class NSString, NSArray, UILabel, UIView, NSStringDrawingContext, BSUIFontProvider;

@interface NCAuxiliaryOptionsView : UIView <NCAuxiliaryOptionsSupporting, PLContentSizeCategoryAdjusting> {

	UILabel* _optionsSummaryLabel;
	UIView* _overlayView;
	double _widthForCachedLayoutInfo;
	unsigned long long _cachedSummaryLabelNumberOfLines;
	double _cachedSummaryLabelHeight;
	NSStringDrawingContext* _drawingContext;
	BOOL _auxiliaryOptionsVisible;
	BOOL _adjustsFontForContentSizeCategory;
	NSArray* _optionButtons;
	BSUIFontProvider* _fontProvider;

}

@property (nonatomic,retain) BSUIFontProvider * fontProvider;                       //@synthesize fontProvider=_fontProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * optionsSummaryText; 
@property (assign,nonatomic) unsigned long long numberOfOptionButtons; 
@property (nonatomic,readonly) NSArray * optionButtons;                             //@synthesize optionButtons=_optionButtons - In the implementation block
@property (assign,nonatomic) BOOL auxiliaryOptionsVisible;                          //@synthesize auxiliaryOptionsVisible=_auxiliaryOptionsVisible - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(BOOL)adjustForContentSizeCategoryChange;
-(void)setFontProvider:(BSUIFontProvider *)arg1 ;
-(BSUIFontProvider *)fontProvider;
-(unsigned long long)_summaryLabelNumberOfLinesForBoundsSize:(CGSize)arg1 ;
-(void)_configureOverlayIfNecessary;
-(void)_layoutOptionsSummaryTextLabel;
-(void)_layoutOptionsButtons;
-(void)_configureOptionsSummaryTextLabelIfNecessary;
-(NSString *)optionsSummaryText;
-(unsigned long long)numberOfOptionButtons;
-(void)_configureOptionsButtonsWithCount:(unsigned long long)arg1 ;
-(void)_updateTextAttributesForOptionsSummaryLabel;
-(void)_updateTextAttributesForOptionButton:(id)arg1 ;
-(id)_preferredFontForOptionsSummaryTextLabel;
-(id)_preferredFontForOptionButton;
-(id)_newOptionsButton;
-(void)_calculateOptionsSummaryLabelLayoutInfoForBoundsSize:(CGSize)arg1 ;
-(double)_summaryLabelHeightForBoundsSize:(CGSize)arg1 ;
-(CGSize)_optionsSummaryLabelSizeThatFits:(CGSize)arg1 ;
-(void)setOptionsSummaryText:(NSString *)arg1 ;
-(void)setNumberOfOptionButtons:(unsigned long long)arg1 ;
-(NSArray *)optionButtons;
-(BOOL)auxiliaryOptionsVisible;
-(void)setAuxiliaryOptionsVisible:(BOOL)arg1 ;
@end


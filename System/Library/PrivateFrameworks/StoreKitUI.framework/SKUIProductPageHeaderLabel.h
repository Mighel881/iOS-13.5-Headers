/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIColor, UIImage, NSArray;

@interface SKUIProductPageHeaderLabel : UIView {

	NSString* _text;
	UIColor* _textColor;
	NSString* _contentRating;
	UIImage* _contentRatingImage;
	NSArray* _secondaryContentRatingImages;
	UIColor* _ratingColor;
	BOOL _isPad;

}

@property (assign,nonatomic) BOOL isPad;                                          //@synthesize isPad=_isPad - In the implementation block
@property (nonatomic,copy) NSString * text;                                       //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                 //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) NSString * contentRating;                            //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,retain) NSArray * secondaryContentRatingImages;              //@synthesize secondaryContentRatingImages=_secondaryContentRatingImages - In the implementation block
@property (nonatomic,retain) UIColor * ratingColor;                               //@synthesize ratingColor=_ratingColor - In the implementation block
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(UIColor *)textColor;
-(id)_textAttributes;
-(BOOL)isPad;
-(void)setContentRating:(NSString *)arg1 ;
-(NSString *)contentRating;
-(void)setIsPad:(BOOL)arg1 ;
-(void)setRatingColor:(UIColor *)arg1 ;
-(void)setSecondaryContentRatingImages:(NSArray *)arg1 ;
-(id)_imageForContentRating:(id)arg1 ;
-(CTFramesetterRef)_newTextFramesetter;
-(double)secondaryImageWidth;
-(NSArray *)secondaryContentRatingImages;
-(UIColor *)ratingColor;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/VUIRentalExpirationLabelDelegate.h>

@class _TVImageView, VUILabel, VUIRentalExpirationLabel, NSString;

@interface VUILibraryLockupViewCell : UICollectionViewCell <VUIRentalExpirationLabelDelegate> {

	BOOL _hideTitleLabel;
	_TVImageView* _imageView;
	double _imageAspectRatio;
	VUILabel* _titleLabel;
	VUIRentalExpirationLabel* _expirationLabel;

}

@property (nonatomic,retain) _TVImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) double imageAspectRatio;                                 //@synthesize imageAspectRatio=_imageAspectRatio - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUIRentalExpirationLabel * expirationLabel;              //@synthesize expirationLabel=_expirationLabel - In the implementation block
@property (assign,nonatomic) BOOL hideTitleLabel;                                     //@synthesize hideTitleLabel=_hideTitleLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureLockupCell:(id)arg1 withMedia:(id)arg2 width:(double)arg3 forMetrics:(BOOL)arg4 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(VUILabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(_TVImageView *)imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(double)imageAspectRatio;
-(void)setImageAspectRatio:(double)arg1 ;
-(double)bottomMarginWithBaselineMargin:(double)arg1 ;
-(void)rentalExpirationLabelNeedsRelayout:(id)arg1 ;
-(void)setExpirationLabel:(VUIRentalExpirationLabel *)arg1 ;
-(void)setHideTitleLabel:(BOOL)arg1 ;
-(BOOL)hideTitleLabel;
-(VUIRentalExpirationLabel *)expirationLabel;
@end

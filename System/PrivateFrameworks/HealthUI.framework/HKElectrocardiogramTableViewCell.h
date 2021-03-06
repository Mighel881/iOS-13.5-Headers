/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class HKElectrocardiogramCardView, NSLayoutConstraint, HKElectrocardiogram;

@interface HKElectrocardiogramTableViewCell : UITableViewCell {

	BOOL _bottomPaddingDisabled;
	HKElectrocardiogramCardView* _cardView;
	NSLayoutConstraint* _bottomPaddingConstraint;

}

@property (nonatomic,retain) HKElectrocardiogramCardView * cardView;                    //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomPaddingConstraint;              //@synthesize bottomPaddingConstraint=_bottomPaddingConstraint - In the implementation block
@property (nonatomic,retain) HKElectrocardiogram * sample; 
@property (assign,nonatomic) BOOL bottomPaddingDisabled;                                //@synthesize bottomPaddingDisabled=_bottomPaddingDisabled - In the implementation block
+(double)estimatedHeight;
+(id)defaultReuseIdentifier;
-(void)prepareForReuse;
-(void)setSample:(HKElectrocardiogram *)arg1 ;
-(HKElectrocardiogram *)sample;
-(HKElectrocardiogramCardView *)cardView;
-(void)setCardView:(HKElectrocardiogramCardView *)arg1 ;
-(void)_setupConstraints;
-(id)initWithSample:(id)arg1 dateCache:(id)arg2 onboarding:(BOOL)arg3 ;
-(void)_setupUIWithSample:(id)arg1 dateCache:(id)arg2 onboarding:(BOOL)arg3 ;
-(NSLayoutConstraint *)bottomPaddingConstraint;
-(void)setBottomPaddingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomPaddingDisabled:(BOOL)arg1 ;
-(BOOL)bottomPaddingDisabled;
@end


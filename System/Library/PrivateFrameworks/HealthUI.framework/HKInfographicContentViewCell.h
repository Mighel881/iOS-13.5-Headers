/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSLayoutConstraint;

@interface HKInfographicContentViewCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;              //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                         //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(UILabel *)titleLabel;
-(id)_titleFont;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_descriptionFont;
-(id)_labelWithFont:(id)arg1 ;
@end


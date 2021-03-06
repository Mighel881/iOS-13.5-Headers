/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <SilexVideo/SVButton.h>

@class NSString, SVAutoLayoutLabel, NSLayoutConstraint;

@interface SVAccessoryItemButton : SVButton {

	NSString* _title;
	NSString* _subtitle;
	SVAutoLayoutLabel* _titleLabel;
	SVAutoLayoutLabel* _subtitleLabel;
	NSLayoutConstraint* _titleLabelTopConstraint;
	NSLayoutConstraint* _subtitleLabelBottomConstraint;

}

@property (nonatomic,readonly) SVAutoLayoutLabel * titleLabel;                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) SVAutoLayoutLabel * subtitleLabel;                             //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelTopConstraint;                    //@synthesize titleLabelTopConstraint=_titleLabelTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * subtitleLabelBottomConstraint;              //@synthesize subtitleLabelBottomConstraint=_subtitleLabelBottomConstraint - In the implementation block
@property (nonatomic,copy) NSString * title;                                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                               //@synthesize subtitle=_subtitle - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(SVAutoLayoutLabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)accessibilityLabel;
-(void)layoutSubviews;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updateConstraints;
-(SVAutoLayoutLabel *)subtitleLabel;
-(void)updateFonts;
-(void)setSubtitle:(id)arg1 animated:(BOOL)arg2 ;
-(NSLayoutConstraint *)titleLabelTopConstraint;
-(void)setTitleLabelTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)preferredContentSizeCategoryDidChange;
-(void)determineNumberOfLines;
-(void)setSubtitleLabelBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)subtitleLabelBottomConstraint;
@end


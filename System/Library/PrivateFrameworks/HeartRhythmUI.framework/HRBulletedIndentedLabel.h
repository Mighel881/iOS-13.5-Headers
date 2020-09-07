/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSString, UILabel;

@interface HRBulletedIndentedLabel : UIView {

	NSString* _text;
	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * text;                //@synthesize text=_text - In the implementation block
+(id)_bodyFont;
+(id)_bodyFontTextStyle;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)lastBaselineAnchor;
-(id)firstBaselineAnchor;
-(id)initWithText:(id)arg1 ;
-(void)_setUpConstraints;
-(void)_setUpUI;
-(void)_updateLeadingDetailAttributedTextSize;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>

@class UIImage, UIImageView, UILabel, NSString;

@interface WFActionDrawerButton : UIButton {

	UIImage* _icon;
	unsigned long long _style;
	UIImageView* _iconView;
	UILabel* _textLabel;

}

@property (assign,nonatomic,__weak) UIImageView * iconView;              //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * textLabel;                 //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) UIImage * icon;                           //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                 //@synthesize style=_style - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)style;
-(id)accessibilityLabel;
-(void)tintColorDidChange;
-(UIImage *)icon;
-(UILabel *)textLabel;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)updateColors;
-(id)initWithTitle:(id)arg1 icon:(id)arg2 style:(unsigned long long)arg3 ;
-(id)mainColorForStyle:(unsigned long long)arg1 ;
-(id)accentColorForStyle:(unsigned long long)arg1 ;
@end


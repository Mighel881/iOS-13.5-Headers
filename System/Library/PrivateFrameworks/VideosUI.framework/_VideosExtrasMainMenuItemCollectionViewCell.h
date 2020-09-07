/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSLayoutConstraint, UILabel;

@interface _VideosExtrasMainMenuItemCollectionViewCell : UICollectionViewCell {

	NSLayoutConstraint* _textLabelConstraint;
	UILabel* _textLabel;

}

@property (nonatomic,retain) NSLayoutConstraint * textLabelConstraint;              //@synthesize textLabelConstraint=_textLabelConstraint - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                 //@synthesize textLabel=_textLabel - In the implementation block
+(id)_createLabelInCell:(id)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)safeAreaInsetsDidChange;
-(void)setSelected:(BOOL)arg1 ;
-(UILabel *)textLabel;
-(void)_dynamicTypeChanged;
-(void)setTextLabelConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textLabelConstraint;
@end

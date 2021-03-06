/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UILabel, NSString;

@interface PNPWizardScratchpadToast : UIView {

	UIVisualEffectView* _background;
	UILabel* _label;
	NSString* _text;

}

@property (nonatomic,copy) NSString * text;              //@synthesize text=_text - In the implementation block
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
@end


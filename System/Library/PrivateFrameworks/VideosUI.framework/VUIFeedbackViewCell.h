/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIFocusableCollectionViewCell.h>

@class IKViewElement, VUIFeedbackView;

@interface VUIFeedbackViewCell : VUIFocusableCollectionViewCell {

	IKViewElement* _viewElement;
	VUIFeedbackView* _cardView;

}

@property (nonatomic,retain) IKViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUIFeedbackView * cardView;               //@synthesize cardView=_cardView - In the implementation block
+(id)configureViewWithElement:(id)arg1 existingCell:(id)arg2 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(VUIFeedbackView *)cardView;
-(void)setCardView:(VUIFeedbackView *)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)_setupElements:(id)arg1 inCardView:(id)arg2 ;
@end

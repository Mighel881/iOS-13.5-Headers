/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface HULayoutContainerView : UIView {

	UIView* _contentView;
	/*^block*/id _layoutBlock;

}

@property (nonatomic,readonly) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,copy,readonly) id layoutBlock;               //@synthesize layoutBlock=_layoutBlock - In the implementation block
-(UIView *)contentView;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)initWithContentView:(id)arg1 layoutBlock:(/*^block*/id)arg2 ;
-(id)layoutBlock;
@end


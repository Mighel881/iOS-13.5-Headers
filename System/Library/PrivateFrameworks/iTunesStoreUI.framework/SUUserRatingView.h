/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface SUUserRatingView : UIView {

	float _value;
	UIImageView* _foregroundImageView;
	UIImageView* _backgroundImageView;

}
+(id)copyImageForRating:(float)arg1 backgroundColor:(id)arg2 style:(long long)arg3 ;
+(double)reflectionHeight;
-(id)init;
-(void)setValue:(float)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(CGRect)_foregroundImageClipBounds;
-(id)initWithForeground:(id)arg1 background:(id)arg2 ;
-(float)heightWithoutReflection;
@end


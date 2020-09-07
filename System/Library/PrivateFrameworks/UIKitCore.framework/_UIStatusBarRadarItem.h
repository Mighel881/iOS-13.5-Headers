/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarIndicatorItem.h>

@class _UIStatusBarFocusableImageView;

@interface _UIStatusBarRadarItem : _UIStatusBarIndicatorItem {

	_UIStatusBarFocusableImageView* _radarItemView;

}

@property (nonatomic,retain) _UIStatusBarFocusableImageView * radarItemView;              //@synthesize radarItemView=_radarItemView - In the implementation block
-(id)imageView;
-(id)imageForUpdate:(id)arg1 ;
-(id)indicatorEntryKey;
-(id)viewForIdentifier:(id)arg1 ;
-(void)_create_radarItemView;
-(_UIStatusBarFocusableImageView *)radarItemView;
-(void)setRadarItemView:(_UIStatusBarFocusableImageView *)arg1 ;
@end

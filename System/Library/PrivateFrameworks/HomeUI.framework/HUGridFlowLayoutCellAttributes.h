/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@class HFWallpaperSlice;

@interface HUGridFlowLayoutCellAttributes : UICollectionViewLayoutAttributes {

	HFWallpaperSlice* _blurredWallpaperSlice;
	HFWallpaperSlice* _darkModeBlurredWallpaperSlice;
	CGRect _normalizedWallpaperRect;

}

@property (assign,nonatomic) CGRect normalizedWallpaperRect;                                //@synthesize normalizedWallpaperRect=_normalizedWallpaperRect - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * blurredWallpaperSlice;                      //@synthesize blurredWallpaperSlice=_blurredWallpaperSlice - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * darkModeBlurredWallpaperSlice;              //@synthesize darkModeBlurredWallpaperSlice=_darkModeBlurredWallpaperSlice - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)normalizedWallpaperRect;
-(HFWallpaperSlice *)blurredWallpaperSlice;
-(HFWallpaperSlice *)darkModeBlurredWallpaperSlice;
-(void)setBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(void)setDarkModeBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(void)setNormalizedWallpaperRect:(CGRect)arg1 ;
@end


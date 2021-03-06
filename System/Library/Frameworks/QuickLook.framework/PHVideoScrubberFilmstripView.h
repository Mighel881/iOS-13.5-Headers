/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVAsset, UIImage, AVVideoComposition;


@protocol PHVideoScrubberFilmstripView <NSObject>
@property (nonatomic,copy) AVAsset * asset; 
@property (nonatomic,retain) UIImage * placeholderImage; 
@property (assign,nonatomic) CGRect visibleRect; 
@property (nonatomic,copy) AVVideoComposition * videoComposition; 
@optional
-(AVVideoComposition *)videoComposition;
-(void)setVideoComposition:(id)arg1;

@required
-(AVAsset *)asset;
-(void)setAsset:(id)arg1;
-(CGRect)visibleRect;
-(void)setVisibleRect:(CGRect)arg1;
-(void)setPlaceholderImage:(id)arg1;
-(UIImage *)placeholderImage;

@end


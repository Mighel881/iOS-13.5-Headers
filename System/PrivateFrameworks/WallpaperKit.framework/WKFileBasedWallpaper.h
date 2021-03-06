/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL;


@protocol WKFileBasedWallpaper <WKWallpaper>
@property (nonatomic,copy,readonly) NSURL * thumbnailImageURL; 
@property (nonatomic,copy,readonly) NSURL * fullsizeImageURL; 
@property (nonatomic,copy,readonly) NSURL * videoAssetURL; 
@property (nonatomic,readonly) double stillTimeInVideo; 
@required
-(NSURL *)thumbnailImageURL;
-(double)stillTimeInVideo;
-(NSURL *)fullsizeImageURL;
-(NSURL *)videoAssetURL;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol JTMediaItemDelegate <NSObject>
@optional
-(void)mediaItem:(id)arg1 hasAnUpdatedThumbnail:(id)arg2;
-(BOOL)hasAValidThumbnail;
-(id)filtersForClip;
-(id)transformInfoOfClip;
-(id)projectAssetsDirectory;
-(void)setMediaItemRequiresDownload:(id)arg1;

@required
-(void)mediaItemWillLoad:(id)arg1;
-(void)mediaItemDidLoad:(id)arg1 error:(id)arg2;

@end

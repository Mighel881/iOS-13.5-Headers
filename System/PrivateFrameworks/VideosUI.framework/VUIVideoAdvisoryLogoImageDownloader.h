/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVImageProxy;

@interface VUIVideoAdvisoryLogoImageDownloader : NSObject {

	TVImageProxy* _ratingImageProxy;

}

@property (nonatomic,retain) TVImageProxy * ratingImageProxy;              //@synthesize ratingImageProxy=_ratingImageProxy - In the implementation block
-(void)downloadImageWithURL:(id)arg1 imageInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(TVImageProxy *)ratingImageProxy;
-(void)setRatingImageProxy:(TVImageProxy *)arg1 ;
@end


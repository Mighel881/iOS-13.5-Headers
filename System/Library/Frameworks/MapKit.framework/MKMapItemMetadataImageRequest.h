/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKMapItemMetadataRequest.h>

@class GEOPhotoInfo;

@interface MKMapItemMetadataImageRequest : MKMapItemMetadataRequest {

	GEOPhotoInfo* _info;
	/*^block*/id _imageHandler;

}

@property (nonatomic,copy) id imageHandler;                    //@synthesize imageHandler=_imageHandler - In the implementation block
@property (nonatomic,retain) GEOPhotoInfo * info;              //@synthesize info=_info - In the implementation block
+(id)requestWithMapItem:(id)arg1 info:(id)arg2 ;
-(void)handleError:(id)arg1 ;
-(id)url;
-(GEOPhotoInfo *)info;
-(void)setInfo:(GEOPhotoInfo *)arg1 ;
-(void)handleData:(id)arg1 ;
-(void)setImageHandler:(id)arg1 ;
-(id)imageHandler;
@end


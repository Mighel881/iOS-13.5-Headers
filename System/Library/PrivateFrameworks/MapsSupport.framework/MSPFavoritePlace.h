/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MSPFavoritePlace <MSPFavorite>
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) id<GEOMapItem> geoMapItem; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinateOfDroppedPin; 
@property (nonatomic,readonly) int floorOrdinalOfDroppedPin; 
@required
-(NSString *)title;
-(id<GEOMapItem>)geoMapItem;
-(CLLocationCoordinate2D)coordinateOfDroppedPin;
-(int)floorOrdinalOfDroppedPin;

@end

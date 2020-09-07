/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSPrimitive.h>

@class NSString, CLCircularRegion, CLSLitePlacemark, NSArray, CLSBusinessItem;

@interface CLSPlace : CLSPrimitive {

	NSString* _name;
	CLCircularRegion* _region;
	CLSLitePlacemark* _placemark;
	NSArray* _categories;
	CLSBusinessItem* _businessItem;

}

@property (nonatomic,readonly) CLSBusinessItem * businessItem;                 //@synthesize businessItem=_businessItem - In the implementation block
@property (nonatomic,retain) NSArray * categories;                             //@synthesize categories=_categories - In the implementation block
@property (nonatomic,readonly) CLCircularRegion * region;                      //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) CLSLitePlacemark * placemark;                   //@synthesize placemark=_placemark - In the implementation block
@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
+(id)placeWithBusinessItem:(id)arg1 ;
+(id)placeWithLocation:(id)arg1 ;
+(id)placeWithPlacemark:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(CLCircularRegion *)region;
-(CLSLitePlacemark *)placemark;
-(NSArray *)categories;
-(void)setCategories:(NSArray *)arg1 ;
-(BOOL)isEqualToPlace:(id)arg1 ;
-(CLSBusinessItem *)businessItem;
@end

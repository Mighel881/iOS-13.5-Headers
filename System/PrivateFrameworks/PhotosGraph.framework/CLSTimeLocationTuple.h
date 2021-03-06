/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate;


@protocol CLSTimeLocationTuple <NSObject>
@property (nonatomic,readonly) NSString * timeLocationIdentifier; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinates; 
@property (nonatomic,readonly) NSDate * expandedStartDate; 
@property (nonatomic,readonly) NSDate * expandedEndDate; 
@required
-(NSDate *)startDate;
-(NSDate *)endDate;
-(CLLocationCoordinate2D)coordinates;
-(NSString *)timeLocationIdentifier;
-(NSDate *)expandedEndDate;
-(NSDate *)expandedStartDate;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSString, PHAsset, NSArray;


@protocol PGHighlightItem <NSObject>
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) NSDate * localStartDate; 
@property (nonatomic,readonly) NSDate * localEndDate; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,copy,readonly) NSString * dateDescription; 
@property (nonatomic,copy,readonly) NSString * smartDescription; 
@property (nonatomic,readonly) PHAsset * keyAsset; 
@property (nonatomic,readonly) NSArray * extendedCuratedAssets; 
@property (nonatomic,readonly) unsigned long long numberOfAssetsInExtended; 
@property (nonatomic,readonly) double promotionScore; 
@property (nonatomic,readonly) unsigned short type; 
@property (nonatomic,readonly) unsigned short kind; 
@property (nonatomic,readonly) unsigned short visibilityState; 
@property (nonatomic,readonly) unsigned short enrichmentState; 
@property (nonatomic,readonly) id modelObject; 
@required
-(unsigned short)type;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)uuid;
-(unsigned short)kind;
-(PHAsset *)keyAsset;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(double)promotionScore;
-(unsigned short)visibilityState;
-(unsigned short)enrichmentState;
-(unsigned long long)numberOfAssetsInExtended;
-(NSArray *)extendedCuratedAssets;
-(NSString *)dateDescription;
-(NSString *)smartDescription;
-(id)modelObject;

@end

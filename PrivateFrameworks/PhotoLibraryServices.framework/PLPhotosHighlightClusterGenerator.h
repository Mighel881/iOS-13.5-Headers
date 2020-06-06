/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, PLFrequentLocationManager, NSDateInterval, PLLocalCreationDateCreator, PLDateRangeTitleGenerator;

@interface PLPhotosHighlightClusterGenerator : NSObject {

	NSArray* _allMoments;
	PLFrequentLocationManager* _frequentLocationManager;
	NSDateInterval* _recentHighlightsDateInterval;
	PLLocalCreationDateCreator* _localCreationDateCreator;
	PLDateRangeTitleGenerator* _dateRangeTitleGenerator;

}

@property (nonatomic,readonly) NSArray * allMoments;                                               //@synthesize allMoments=_allMoments - In the implementation block
@property (nonatomic,readonly) PLFrequentLocationManager * frequentLocationManager;                //@synthesize frequentLocationManager=_frequentLocationManager - In the implementation block
@property (nonatomic,readonly) NSDateInterval * recentHighlightsDateInterval;                      //@synthesize recentHighlightsDateInterval=_recentHighlightsDateInterval - In the implementation block
@property (nonatomic,readonly) PLLocalCreationDateCreator * localCreationDateCreator;              //@synthesize localCreationDateCreator=_localCreationDateCreator - In the implementation block
@property (nonatomic,readonly) PLDateRangeTitleGenerator * dateRangeTitleGenerator;                //@synthesize dateRangeTitleGenerator=_dateRangeTitleGenerator - In the implementation block
-(NSDateInterval *)recentHighlightsDateInterval;
-(PLFrequentLocationManager *)frequentLocationManager;
-(PLLocalCreationDateCreator *)localCreationDateCreator;
-(PLDateRangeTitleGenerator *)dateRangeTitleGenerator;
-(id)highlightClustersIntersectingMoments:(id)arg1 includeAllTripHighlightClusters:(BOOL)arg2 ;
-(id)initWithAllMoments:(id)arg1 frequentLocationManager:(id)arg2 recentHighlightDateInterval:(id)arg3 localCreationDateCreator:(id)arg4 dateRangeTitleGenerator:(id)arg5 ;
-(id)_dayMomentClustersWithMomentsSortedByDate:(id)arg1 localCreationDateCreator:(id)arg2 ;
-(BOOL)_isRecent:(id)arg1 ;
-(id)recentMomentsInMomentClusters:(id)arg1 ;
-(id)_recentMoments;
-(id)_recentHighlightClusterWithMoments:(id)arg1 ;
-(id)_recentHighlightClusterWithMoments:(id)arg1 intersectingMoments:(id)arg2 ;
-(id)_tripsInMoments:(id)arg1 ;
-(id)_aggregationsInMoments:(id)arg1 unavailableMoments:(id)arg2 intersectingMoments:(id)arg3 ;
-(id)_tripHighlightClustersForMoments:(id)arg1 tripType:(unsigned long long)arg2 ;
-(id)_aggregationHighlightClustersForMoments:(id)arg1 ;
-(id)_remainingMomentClustersWithMomentsSortedByDate:(id)arg1 ;
-(id)_remainingHighlightClusterWithMoments:(id)arg1 ;
-(id)_remainingHighlightClustersWithClusters:(id)arg1 intersectingMoments:(id)arg2 ;
-(NSArray *)allMoments;
@end

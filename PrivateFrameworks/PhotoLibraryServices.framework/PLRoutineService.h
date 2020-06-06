/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateInterval, PLLocationOfInterestCache, NSMutableSet, NSSet;

@interface PLRoutineService : NSObject {

	BOOL _routineIsAvailable;
	NSDateInterval* _fetchDateInterval;
	PLLocationOfInterestCache* _visitsCache;
	NSMutableSet* _pendingPinningVisitIdentifiers;

}

@property (nonatomic,retain) NSDateInterval * fetchDateInterval;                         //@synthesize fetchDateInterval=_fetchDateInterval - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingPinningVisitIdentifiers;              //@synthesize pendingPinningVisitIdentifiers=_pendingPinningVisitIdentifiers - In the implementation block
@property (nonatomic,retain) PLLocationOfInterestCache * visitsCache;                    //@synthesize visitsCache=_visitsCache - In the implementation block
@property (nonatomic,readonly) NSSet * allLocationsOfInterest; 
@property (nonatomic,readonly) NSSet * homeLocations; 
@property (nonatomic,readonly) NSSet * workLocations; 
@property (nonatomic,readonly) BOOL routineIsAvailable;                                  //@synthesize routineIsAvailable=_routineIsAvailable - In the implementation block
-(BOOL)routineIsAvailable;
-(void)fetchLocationsOfInterestIfNeeded;
-(NSSet *)allLocationsOfInterest;
-(id)initWithFetchDateInterval:(id)arg1 ;
-(id)locationsOfInterestOfType:(long long)arg1 ;
-(id)locationOfInterestAtLocation:(id)arg1 ;
-(PLLocationOfInterestCache *)visitsCache;
-(void)setVisitsCache:(PLLocationOfInterestCache *)arg1 ;
-(NSSet *)homeLocations;
-(NSSet *)workLocations;
-(void)invalidateLocationsOfInterest;
-(void)postProcessLocationsOfInterest;
-(BOOL)hasLocationsOfInterestInformation;
-(id)locationOfInterestCloseToLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(id)locationOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(BOOL)isRemoteLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(unsigned long long)_devicePlacementTypeForLocationsOfInterestVisits:(id)arg1 ;
-(double)_disambiguationDistanceForDevicePlacementType:(unsigned long long)arg1 ;
-(void)_buildLocationsOfInterestCache;
-(id)_fetchLocationsOfInterestWithinDateInterval:(id)arg1 routineManager:(id)arg2 ;
-(id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)arg1 ;
-(void)_pinPendingVisits;
-(NSDateInterval *)fetchDateInterval;
-(void)setFetchDateInterval:(NSDateInterval *)arg1 ;
-(NSMutableSet *)pendingPinningVisitIdentifiers;
-(void)setPendingPinningVisitIdentifiers:(NSMutableSet *)arg1 ;
@end

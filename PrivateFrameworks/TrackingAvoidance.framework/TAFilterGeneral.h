/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TAFilterGeneral : NSObject
+(id)filterSuspiciousDeviceWithStore:(id)arg1 settings:(id)arg2 andAppendOutgoingRequestsTo:(id)arg3 ;
+(double)distOfTravelAlong:(id)arg1 ;
+(id)filteredInterVisitMetadataWithVisitAdjustment:(id)arg1 inInterval:(id)arg2 withLocRelevanceThreshold:(double)arg3 ;
+(id)filterSuspiciousDeviceWithStore:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2 ;
+(id)filteredInterVisitMetadata:(id)arg1 inInterval:(id)arg2 withLocRelevanceThreshold:(double)arg3 ;
+(id)filteredPeopleDensityResults:(id)arg1 within:(id)arg2 ;
+(BOOL)coarsePedestrianSpeedCheck:(id)arg1 withFilterSettings:(id)arg2 ;
+(BOOL)shouldIssuePeopleDensityScan:(unsigned long long)arg1 distTravel:(double)arg2 durationOfTravel:(double)arg3 settings:(id)arg4 resultsInBuffer:(id)arg5 ;
+(id)dateIntervalAfterVisitAdjustment:(id)arg1 intervalOfInterest:(id)arg2 ;
+(void)preprocessLocationAndAdvertisementWithEnumerator:(id)arg1 addressToLocationList:(id)arg2 addressToAdvertisementList:(id)arg3 relevanceThreshold:(double)arg4 ;
@end

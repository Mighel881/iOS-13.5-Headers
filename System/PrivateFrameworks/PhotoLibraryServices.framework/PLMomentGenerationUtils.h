/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLMomentGenerationUtils : NSObject
+(void)processLocationIfNecessaryInMoment:(id)arg1 usingManager:(id)arg2 frequentLocations:(id)arg3 frequentLocationsDidChange:(BOOL)arg4 ;
+(BOOL)isNearFrequentLocationForMoment:(id)arg1 frequentLocations:(id)arg2 ;
+(BOOL)isAtFrequentLocationForMoment:(id)arg1 frequentLocations:(id)arg2 ;
+(unsigned short)processedLocationTypeForMoment:(id)arg1 locationsOfInterest:(id)arg2 frequentLocations:(id)arg3 routineIsAvailable:(BOOL)arg4 ;
+(unsigned short)locationTypeForLocation:(id)arg1 usingLocationsOfInterest:(id)arg2 routineIsAvailable:(BOOL)arg3 ;
+(BOOL)isTopFrequentLocationForMoment:(id)arg1 frequentLocations:(id)arg2 ;
+(id)sortedOverlappingFrequentLocations:(id)arg1 ;
+(id)frequentLocationsOverlappingStartDate:(id)arg1 endDate:(id)arg2 frequentLocations:(id)arg3 ;
@end

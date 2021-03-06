/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATXLocationManagerProtocol;
@class _PASCFBurstTrie;

@interface ATXGlobalAppScorePredictor : NSObject {

	_PASCFBurstTrie* _index;
	_PASCFBurstTrie* _signalsTrie;
	id<ATXLocationManagerProtocol> _locationManager;

}

@property (nonatomic,retain) id<ATXLocationManagerProtocol> locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id<ATXLocationManagerProtocol>)locationManager;
-(void)setLocationManager:(id<ATXLocationManagerProtocol>)arg1 ;
-(id)globalPopularitiesAtTimeOfDay:(int)arg1 atDayOfWeek:(int)arg2 atLocation:(int)arg3 withLastAppLaunched:(id)arg4 ;
-(id)globalPopularityForBundleIds:(id)arg1 atDate:(id)arg2 withLastAppLaunched:(id)arg3 ;
-(id)globalPopularityForBundleIds:(id)arg1 atDate:(id)arg2 atLocation:(long long)arg3 withLastAppLaunched:(id)arg4 ;
-(id)globalPopularitiesForBundleIds:(id)arg1 atTimeOfDayIndex:(int)arg2 atDayOfWeekIndex:(int)arg3 atLocationIndex:(int)arg4 withLastAppLaunched:(id)arg5 ;
-(id)globalPopularityForBundleIds:(id)arg1 atDate:(id)arg2 ;
-(id)globalPopularitiesForBundleIds:(id)arg1 atTimeOfDayIndex:(int)arg2 atDayOfWeekIndex:(int)arg3 atLocationIndex:(int)arg4 ;
@end


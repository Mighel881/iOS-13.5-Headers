/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSNumber, NSDictionary, NSMutableDictionary, ADBackgroundTaskRequest;

@interface ADAppUsageVectorManager : NSObject {

	NSString* _version;
	NSArray* _lookbackPeriods;
	NSNumber* _maxQueryElements;
	NSDictionary* _appUsageEvents;
	NSMutableDictionary* _appUsageVectors;
	NSMutableDictionary* _vectorWeightTotals;
	NSMutableDictionary* _adamIDtoBundleID;
	ADBackgroundTaskRequest* _task;

}

@property (nonatomic,retain) NSString * version;                                    //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSArray * lookbackPeriods;                             //@synthesize lookbackPeriods=_lookbackPeriods - In the implementation block
@property (nonatomic,retain) NSNumber * maxQueryElements;                           //@synthesize maxQueryElements=_maxQueryElements - In the implementation block
@property (nonatomic,retain) NSDictionary * appUsageEvents;                         //@synthesize appUsageEvents=_appUsageEvents - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appUsageVectors;                 //@synthesize appUsageVectors=_appUsageVectors - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * vectorWeightTotals;              //@synthesize vectorWeightTotals=_vectorWeightTotals - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * adamIDtoBundleID;                //@synthesize adamIDtoBundleID=_adamIDtoBundleID - In the implementation block
@property (nonatomic,retain) ADBackgroundTaskRequest * task;                        //@synthesize task=_task - In the implementation block
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(ADBackgroundTaskRequest *)task;
-(void)setTask:(ADBackgroundTaskRequest *)arg1 ;
-(NSArray *)lookbackPeriods;
-(NSNumber *)maxQueryElements;
-(id)initWithVersion:(id)arg1 lookbackPeriods:(id)arg2 maxQueryElements:(id)arg3 bgTask:(id)arg4 ;
-(void)updateUsageVectorsWithAppVector:(id)arg1 ;
-(id)normalizedAppUsageVectors;
-(void)setMaxQueryElements:(NSNumber *)arg1 ;
-(void)setLookbackPeriods:(NSArray *)arg1 ;
-(id)pullUsageEvents;
-(id)initWithVersion:(id)arg1 lookbackPeriods:(id)arg2 maxQueryElements:(id)arg3 ;
-(id)bundleIdForAdamId:(id)arg1 ;
-(float)weightForEvents:(id)arg1 amongEvents:(id)arg2 inLookbackPeriod:(id)arg3 ;
-(id)updateVector:(id)arg1 withVector:(id)arg2 usingWeight:(float)arg3 ;
-(id)appUsageEventsForLookbackPeriod:(double)arg1 ;
-(void)buildBundleIDtoAdamIDCache:(id)arg1 ;
-(id)appUsageEventsBetween:(id)arg1 and:(id)arg2 withLimit:(unsigned long long)arg3 ;
-(id)adamIDForBundleID:(id)arg1 ;
-(id)initWithAppUsageVectors:(id)arg1 weightTotals:(id)arg2 maxQueryElements:(id)arg3 ;
-(NSDictionary *)appUsageEvents;
-(void)setAppUsageEvents:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)appUsageVectors;
-(void)setAppUsageVectors:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)vectorWeightTotals;
-(void)setVectorWeightTotals:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)adamIDtoBundleID;
-(void)setAdamIDtoBundleID:(NSMutableDictionary *)arg1 ;
@end

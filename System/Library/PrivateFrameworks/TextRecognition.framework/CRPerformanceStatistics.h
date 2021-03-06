/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextRecognition/TextRecognition-Structs.h>
@class NSString, NSDictionary;

@interface CRPerformanceStatistics : NSObject {

	BOOL _measureRecentPeak;
	NSString* _name;
	NSDictionary* _metrics;

}

@property (retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (readonly) BOOL measureRecentPeak;              //@synthesize measureRecentPeak=_measureRecentPeak - In the implementation block
@property (retain) NSDictionary * metrics;                //@synthesize metrics=_metrics - In the implementation block
+(BOOL)_canEnableRecentPeakReset;
-(id)description;
-(NSString *)name;
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSDictionary *)metrics;
-(void)setMetrics:(NSDictionary *)arg1 ;
-(void)measureBlock:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 measureRecentPeak:(BOOL)arg2 ;
-(void)_addMetricWithKey:(id)arg1 name:(id)arg2 unit:(id)arg3 denominator:(double)arg4 pcMetricID:(unsigned long long)arg5 ;
-(BOOL)measureRecentPeak;
-(void)_evaluateEndedSession:(pc_sessionRef)arg1 duration:(double)arg2 ;
-(id)initWithStatistics:(id)arg1 ;
-(void)addStatistics:(id)arg1 ;
@end


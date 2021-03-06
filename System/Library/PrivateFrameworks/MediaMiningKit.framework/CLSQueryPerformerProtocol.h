/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLSQueryPerformerProtocol <NSObject>
@property (nonatomic,readonly) BOOL isCancelled; 
@property (assign,nonatomic) SCD_Struct_CL1 statistics; 
@property (assign,nonatomic) double precision; 
@property (assign,nonatomic) NSObject*<OS_os_log> loggingConnection; 
@required
+(id)queryWithTemplate:(id)arg1 forRegions:(id)arg2;
+(unsigned long long)numberOfRegionsPerBatch;
+(double)defaultPrecision;
-(void)cancel;
-(BOOL)isCancelled;
-(SCD_Struct_CL1)statistics;
-(void)setStatistics:(SCD_Struct_CL1)arg1;
-(double)precision;
-(void)setPrecision:(double)arg1;
-(id)regions;
-(void)submitWithHandler:(/*^block*/id)arg1;
-(NSObject*<OS_os_log>)loggingConnection;
-(BOOL)shouldQueryItemsForRegion:(id)arg1 selectedRegions:(id)arg2;
-(unsigned long long)cacheItems:(id)arg1;
-(void)logAggdGeoLookupCounterAndDurationWithLookupDuration:(id)arg1;
-(void)logAggdGeoLookupFailureResult;
-(void)setLoggingConnection:(id)arg1;

@end


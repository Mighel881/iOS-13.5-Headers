/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HKQuantity;


@protocol _HDDemoDataModuleDelegate <NSObject>
@property (nonatomic,readonly) long long activityType; 
@property (nonatomic,readonly) HKQuantity * speed; 
@required
-(long long)activityType;
-(HKQuantity *)speed;
-(void)demoDataModule:(id)arg1 didProduceDataObject:(id)arg2;

@end


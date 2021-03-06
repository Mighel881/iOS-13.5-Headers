/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol HDHealthPlugin <NSObject>
@property (nonatomic,copy,readonly) NSString * pluginIdentifier; 
@optional
-(void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(/*^block*/id)arg3;
-(id)listenerEndpointForClient:(id)arg1 error:(id*)arg2;
-(BOOL)daemonDidReceiveNotification:(const char*)arg1;
-(id)deepBreathingServerForClient:(id)arg1 configuration:(id)arg2 healthDaemon:(id)arg3 delegate:(id)arg4;
-(id)dataCollectors;

@required
-(NSString *)pluginIdentifier;
-(void)activate;
-(id)initWithHealthDaemon:(id)arg1;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFTask.h>

@interface WFReachabilityConfigurationRequest : WFTask {

	/*^block*/id _resultHandler;

}

@property (nonatomic,copy) id resultHandler;              //@synthesize resultHandler=_resultHandler - In the implementation block
-(void)cleanup;
-(id)resultHandler;
-(void)setResultHandler:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)initWithResultHandler:(/*^block*/id)arg1 ;
-(void)handleResponse:(id)arg1 ;
-(void)startWithService:(id)arg1 ;
-(void)handleCancellation;
@end

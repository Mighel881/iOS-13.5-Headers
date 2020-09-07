/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXAnalyticsReporting.h>

@protocol SXAnalyticsReporting;
@class SXVideoComponent, NSString;

@interface SXVideoComponentAnalyticsReporting : NSObject <SXAnalyticsReporting> {

	SXVideoComponent* _component;
	id<SXAnalyticsReporting> _analyticsReporting;

}

@property (nonatomic,readonly) SXVideoComponent * component;                                    //@synthesize component=_component - In the implementation block
@property (nonatomic,__weak,readonly) id<SXAnalyticsReporting> analyticsReporting;              //@synthesize analyticsReporting=_analyticsReporting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXVideoComponent *)component;
-(void)reportEvent:(id)arg1 ;
-(id<SXAnalyticsReporting>)analyticsReporting;
-(id)initWithComponent:(id)arg1 analyticsProviding:(id)arg2 ;
@end

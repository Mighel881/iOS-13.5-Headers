/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXFileUtil : NSObject
+(BOOL)shouldUpdateCache:(id)arg1 withRefreshRate:(double)arg2 ;
+(BOOL)_shouldUpdateCache:(id)arg1 withRefreshRate:(double)arg2 currentTime:(double)arg3 ;
+(double)cacheAgeForConsumerType:(unsigned char)arg1 ;
+(double)cacheAgeForConsumerType:(unsigned char)arg1 basePath:(id)arg2 ;
+(double)_cacheAgeForCache:(id)arg1 withCurrentTime:(double)arg2 ;
+(BOOL)cachesAreValidForConsumerSubTypes:(id)arg1 ;
+(BOOL)cachesAreValidForBasePath:(id)arg1 consumerSubTypes:(id)arg2 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@interface FCNetworkOperation : FCOperation

@property (nonatomic,readonly) double preferredTimeoutIntervalForRequest; 
-(unsigned long long)maxRetries;
-(BOOL)shouldStartThrottlingWithError:(id)arg1 retryAfter:(double*)arg2 ;
-(BOOL)canRetryWithError:(id)arg1 retryAfter:(id*)arg2 ;
-(BOOL)_canRetryWithError:(id)arg1 retryAfter:(id*)arg2 ;
-(double)preferredTimeoutIntervalForRequest;
@end


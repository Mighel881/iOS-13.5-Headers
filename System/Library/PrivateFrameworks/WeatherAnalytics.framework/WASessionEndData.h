/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class WAEndReason;

@interface WASessionEndData : NSObject <AADataEventType> {

	WAEndReason* _endReason;

}

@property (nonatomic,readonly) WAEndReason * endReason;              //@synthesize endReason=_endReason - In the implementation block
+(id)dataName;
-(WAEndReason *)endReason;
-(id)toDict;
-(id)initWithEndReason:(id)arg1 ;
@end


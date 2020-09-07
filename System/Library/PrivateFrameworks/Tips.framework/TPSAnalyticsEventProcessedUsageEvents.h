/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tips/TPSAnalyticsEvent.h>

@class NSString, NSDate, TPSExperiment;

@interface TPSAnalyticsEventProcessedUsageEvents : TPSAnalyticsEvent {

	BOOL _preHintRangeOutOfBounds;
	BOOL _postHintRangeOutOfBounds;
	NSString* _identifier;
	NSDate* _firstShownDate;
	TPSExperiment* _experiment;
	unsigned long long _desiredOutcomeCount;
	unsigned long long _preHintUsageCount;
	unsigned long long _postHintUsageCount;

}

@property (nonatomic,readonly) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDate * firstShownDate;                             //@synthesize firstShownDate=_firstShownDate - In the implementation block
@property (nonatomic,readonly) TPSExperiment * experiment;                          //@synthesize experiment=_experiment - In the implementation block
@property (nonatomic,readonly) unsigned long long desiredOutcomeCount;              //@synthesize desiredOutcomeCount=_desiredOutcomeCount - In the implementation block
@property (nonatomic,readonly) unsigned long long preHintUsageCount;                //@synthesize preHintUsageCount=_preHintUsageCount - In the implementation block
@property (nonatomic,readonly) unsigned long long postHintUsageCount;               //@synthesize postHintUsageCount=_postHintUsageCount - In the implementation block
@property (nonatomic,readonly) BOOL preHintRangeOutOfBounds;                        //@synthesize preHintRangeOutOfBounds=_preHintRangeOutOfBounds - In the implementation block
@property (nonatomic,readonly) BOOL postHintRangeOutOfBounds;                       //@synthesize postHintRangeOutOfBounds=_postHintRangeOutOfBounds - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)eventName;
-(id)analyticsEventRepresentation;
-(TPSExperiment *)experiment;
-(NSDate *)firstShownDate;
-(id)initWithUsageInfo:(id)arg1 experiment:(id)arg2 preHintUsageCount:(unsigned long long)arg3 postHintUsageCount:(unsigned long long)arg4 preHintRangeOutOfBounds:(BOOL)arg5 postHintRangeOutOfBounds:(BOOL)arg6 date:(id)arg7 ;
-(unsigned long long)desiredOutcomeCount;
-(unsigned long long)preHintUsageCount;
-(unsigned long long)postHintUsageCount;
-(BOOL)preHintRangeOutOfBounds;
-(BOOL)postHintRangeOutOfBounds;
@end

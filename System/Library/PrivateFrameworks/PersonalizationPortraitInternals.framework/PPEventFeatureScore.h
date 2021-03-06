/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface PPEventFeatureScore : NSObject <NSCopying> {

	unsigned long long _ocnt_precomputedHash;
	NSArray* _featureValues;
	double _weightedScore;
	unsigned long long _prominentFeature;

}

@property (nonatomic,readonly) NSArray * featureValues;                          //@synthesize featureValues=_featureValues - In the implementation block
@property (nonatomic,readonly) double weightedScore;                             //@synthesize weightedScore=_weightedScore - In the implementation block
@property (nonatomic,readonly) unsigned long long prominentFeature;              //@synthesize prominentFeature=_prominentFeature - In the implementation block
+(id)eventFeatureScoreWithFeatureValues:(id)arg1 weightedScore:(double)arg2 prominentFeature:(unsigned long long)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)_hash;
-(NSArray *)featureValues;
-(unsigned long long)prominentFeature;
-(double)weightedScore;
-(id)initWithFeatureValues:(id)arg1 weightedScore:(double)arg2 prominentFeature:(unsigned long long)arg3 ;
-(BOOL)isEqualToEventFeatureScore:(id)arg1 ;
@end


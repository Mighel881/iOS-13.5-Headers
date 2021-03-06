/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGMeaningfulEventRequiredCriteria;

@interface PGMeaningfulEventMatchingResult : NSObject {

	BOOL _isMatching;
	BOOL _isReliable;
	double _score;
	PGMeaningfulEventRequiredCriteria* _requiredCriteria;

}

@property (nonatomic,readonly) BOOL isMatching;                                                   //@synthesize isMatching=_isMatching - In the implementation block
@property (nonatomic,readonly) double score;                                                      //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) BOOL isReliable;                                                   //@synthesize isReliable=_isReliable - In the implementation block
@property (nonatomic,readonly) PGMeaningfulEventRequiredCriteria * requiredCriteria;              //@synthesize requiredCriteria=_requiredCriteria - In the implementation block
-(id)description;
-(double)score;
-(BOOL)isReliable;
-(id)initWithIsMatching:(BOOL)arg1 score:(double)arg2 isReliable:(BOOL)arg3 requiredCriteria:(id)arg4 ;
-(BOOL)isMatching;
-(PGMeaningfulEventRequiredCriteria *)requiredCriteria;
@end


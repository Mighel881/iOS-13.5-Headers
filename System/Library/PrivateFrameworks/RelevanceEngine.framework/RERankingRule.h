/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERule.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>

@class REConditionEvaluator, RECondition, REComparisonCondition;

@interface RERankingRule : RERule <REAutomaticExportedInterface> {

	REConditionEvaluator* _leftConditionEvaluator;
	REConditionEvaluator* _rightConditionEvaluator;
	REConditionEvaluator* _comparisonConditionEvaluator;
	RECondition* _leftCondition;
	RECondition* _rightCondition;
	REComparisonCondition* _comparison;
	long long _order;

}

@property (nonatomic,readonly) REConditionEvaluator * leftConditionEvaluator; 
@property (nonatomic,readonly) REConditionEvaluator * rightConditionEvaluator; 
@property (nonatomic,readonly) REConditionEvaluator * comparisonConditionEvaluator; 
@property (nonatomic,readonly) RECondition * leftCondition;                                      //@synthesize leftCondition=_leftCondition - In the implementation block
@property (nonatomic,readonly) RECondition * rightCondition;                                     //@synthesize rightCondition=_rightCondition - In the implementation block
@property (nonatomic,readonly) REComparisonCondition * comparison;                               //@synthesize comparison=_comparison - In the implementation block
@property (nonatomic,readonly) long long order;                                                  //@synthesize order=_order - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)order;
-(REComparisonCondition *)comparison;
-(RECondition *)leftCondition;
-(RECondition *)rightCondition;
-(REConditionEvaluator *)leftConditionEvaluator;
-(REConditionEvaluator *)rightConditionEvaluator;
-(REConditionEvaluator *)comparisonConditionEvaluator;
-(id)initWithLeftCondition:(id)arg1 rightCondition:(id)arg2 comparisonCondition:(id)arg3 order:(long long)arg4 ;
@end


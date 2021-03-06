/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ATXMagicalMomentsPrediction, NSCompoundPredicate;

@interface ATXMagicalMomentsPredictionTableEntry : NSObject <NSSecureCoding> {

	ATXMagicalMomentsPrediction* _prediction;
	NSCompoundPredicate* _compoundPredicate;

}

@property (nonatomic,readonly) ATXMagicalMomentsPrediction * prediction;              //@synthesize prediction=_prediction - In the implementation block
@property (nonatomic,readonly) NSCompoundPredicate * compoundPredicate;               //@synthesize compoundPredicate=_compoundPredicate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)compoundPredicateFromPredicateArray:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ATXMagicalMomentsPrediction *)prediction;
-(NSCompoundPredicate *)compoundPredicate;
-(id)initWithPrediction:(id)arg1 applicablePredicates:(id)arg2 ;
-(id)initWithPrediction:(id)arg1 applicableCompoundPredicate:(id)arg2 ;
@end


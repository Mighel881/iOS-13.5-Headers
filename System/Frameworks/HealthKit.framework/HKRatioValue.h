/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKCodedQuantity;

@interface HKRatioValue : NSObject <NSSecureCoding, NSCopying> {

	HKCodedQuantity* _numerator;
	HKCodedQuantity* _denominator;

}

@property (nonatomic,copy,readonly) HKCodedQuantity * numerator;                //@synthesize numerator=_numerator - In the implementation block
@property (nonatomic,copy,readonly) HKCodedQuantity * denominator;              //@synthesize denominator=_denominator - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)ratioValueWithNumerator:(id)arg1 andDenominator:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithNumerator:(id)arg1 denominator:(id)arg2 ;
-(HKCodedQuantity *)numerator;
-(HKCodedQuantity *)denominator;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <MetricMeasurement/MXMSampleTag.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface MXMSampleTagFilter : MXMSampleTag <NSCopying, NSSecureCoding> {

	BOOL _allowDescendents;
	NSSet* _tagPermutations;

}

@property (nonatomic,readonly) BOOL finite; 
@property (getter=finite,nonatomic,readonly) BOOL isFinite; 
@property (nonatomic,copy) NSSet * tagPermutations;                      //@synthesize tagPermutations=_tagPermutations - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTag:(id)arg1 allowDescendents:(BOOL)arg2 ;
-(BOOL)finite;
-(BOOL)matchesSampleWithTag:(id)arg1 ;
-(NSSet *)tagPermutations;
-(void)setTagPermutations:(NSSet *)arg1 ;
@end


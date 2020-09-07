/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AXMVisionFeatureColorInfo : NSObject <NSSecureCoding> {

	double _remainingColorWeight;
	NSArray* _mainColors;
	NSArray* _mainColorWeights;

}

@property (nonatomic,retain) NSArray * mainColors;                     //@synthesize mainColors=_mainColors - In the implementation block
@property (nonatomic,retain) NSArray * mainColorWeights;               //@synthesize mainColorWeights=_mainColorWeights - In the implementation block
@property (assign,nonatomic) double remainingColorWeight;              //@synthesize remainingColorWeight=_remainingColorWeight - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMainColors:(id)arg1 weights:(id)arg2 ;
-(NSArray *)mainColors;
-(NSArray *)mainColorWeights;
-(void)setMainColors:(NSArray *)arg1 ;
-(void)setMainColorWeights:(NSArray *)arg1 ;
-(void)enumerateMainColors:(/*^block*/id)arg1 ;
-(double)remainingColorWeight;
-(void)setRemainingColorWeight:(double)arg1 ;
@end

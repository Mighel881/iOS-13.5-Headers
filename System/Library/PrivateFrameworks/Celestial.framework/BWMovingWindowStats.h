/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWStats.h>

@interface BWMovingWindowStats : BWStats {

	int _windowSize;
	int _numDataPoints;
	int _dataPointIndex;
	double* _dataPoints;

}

@property (nonatomic,readonly) int windowSize;              //@synthesize windowSize=_windowSize - In the implementation block
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)max;
-(double)min;
-(void)addDataPoint:(double)arg1 ;
-(id)initWithWindowSize:(int)arg1 ;
-(int)windowSize;
@end


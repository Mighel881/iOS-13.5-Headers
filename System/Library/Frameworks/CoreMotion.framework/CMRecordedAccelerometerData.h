/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMAccelerometerData.h>

@class NSDate;

@interface CMRecordedAccelerometerData : CMAccelerometerData {

	double _startDateValue;
	SCD_Struct_CM316 _accelerationValue;
	double _timestampValue;
	unsigned long long _identifier;

}

@property (readonly) double startTime; 
@property (readonly) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSDate * startDate; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)identifier;
-(NSDate *)startDate;
-(double)timestamp;
-(double)startTime;
-(SCD_Struct_CM316)acceleration;
-(void)resetWithData:(CMAccel100*)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4 ;
-(id)initWithData:(CMAccel100*)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4 ;
@end


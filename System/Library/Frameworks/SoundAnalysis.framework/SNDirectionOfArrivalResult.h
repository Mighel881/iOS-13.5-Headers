/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNTimeRangeProvidingWritable.h>
#import <libobjc.A.dylib/SNTimeRangeProviding.h>

@class NSArray, NSString;

@interface SNDirectionOfArrivalResult : NSObject <SNTimeRangeProvidingWritable, SNTimeRangeProviding> {

	float _azimuth;
	NSArray* _spatialSpectrum;
	SCD_Struct_SN4 timeRange;

}

@property (assign,nonatomic) float azimuth;                           //@synthesize azimuth=_azimuth - In the implementation block
@property (nonatomic,retain) NSArray * spatialSpectrum;               //@synthesize spatialSpectrum=_spatialSpectrum - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_SN4 timeRange; 
-(NSString *)description;
-(float)azimuth;
-(void)setTimeRange:(SCD_Struct_SN4)arg1 ;
-(SCD_Struct_SN4)timeRange;
-(void)setAzimuth:(float)arg1 ;
-(NSArray *)spatialSpectrum;
-(void)setSpatialSpectrum:(NSArray *)arg1 ;
@end

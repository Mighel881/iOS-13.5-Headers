/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreGPSTest.framework/CoreGPSTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreGPSTest/CoreGPSTest-Structs.h>
@interface GpsDevice : NSObject {

	GpsFactoryTest* _fTestDevice;
	Options _fTestOptions;

}

@property (assign) GpsFactoryTest* fTestDevice;              //@synthesize fTestDevice=_fTestDevice - In the implementation block
@property (assign) Options fTestOptions;                     //@synthesize fTestOptions=_fTestOptions - In the implementation block
-(void)dealloc;
-(id)init:(id*)arg1 ;
-(BOOL)getGpsConfiguration:(SCD_Struct_Gp8*)arg1 error:(id*)arg2 ;
-(BOOL)testTimeMarkGpio:(id*)arg1 ;
-(BOOL)testApSignalGpio:(id*)arg1 ;
-(BOOL)testCommPing:(id)arg1 error:(id*)arg2 ;
-(BOOL)testGpsCw:(id)arg1 error:(id*)arg2 ;
-(BOOL)testGpsModulated:(id)arg1 gpsPrn:(int)arg2 error:(id*)arg3 ;
-(BOOL)testPeriodic:(id)arg1 error:(id*)arg2 ;
-(BOOL)testPowerMode:(unsigned char)arg1 error:(id*)arg2 ;
-(BOOL)testExternalFreqAssistance:(id*)arg1 ;
-(void)flushLogs;
-(GpsFactoryTest*)fTestDevice;
-(void)setFTestDevice:(GpsFactoryTest*)arg1 ;
-(Options)fTestOptions;
-(void)setFTestOptions:(Options)arg1 ;
@end


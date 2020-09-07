/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <JasperDepth/JasperDepth-Structs.h>
@interface RgbJController : NSObject {

	unsigned _frameCount;
	unsigned _numberOfValidSpotsForValidFrame;
	float _thresholdDepthValue;
	float _thresholdConfidenceValue;
	float _thresholdPrecOfValidSpot;

}

@property (assign,nonatomic) unsigned numberOfValidSpotsForValidFrame;              //@synthesize numberOfValidSpotsForValidFrame=_numberOfValidSpotsForValidFrame - In the implementation block
@property (assign,nonatomic) float thresholdDepthValue;                             //@synthesize thresholdDepthValue=_thresholdDepthValue - In the implementation block
@property (assign,nonatomic) float thresholdConfidenceValue;                        //@synthesize thresholdConfidenceValue=_thresholdConfidenceValue - In the implementation block
@property (assign,nonatomic) float thresholdPrecOfValidSpot;                        //@synthesize thresholdPrecOfValidSpot=_thresholdPrecOfValidSpot - In the implementation block
@property (assign,nonatomic) unsigned frameCount;                                   //@synthesize frameCount=_frameCount - In the implementation block
-(id)init;
-(void)setFrameCount:(unsigned)arg1 ;
-(unsigned)frameCount;
-(BOOL)controllerLogic:(CVBufferRef)arg1 jdpc:(id)arg2 rate:(unsigned)arg3 ;
-(BOOL)isJasperFrameValid:(id)arg1 ;
-(unsigned)numberOfValidSpotsForValidFrame;
-(void)setNumberOfValidSpotsForValidFrame:(unsigned)arg1 ;
-(float)thresholdDepthValue;
-(void)setThresholdDepthValue:(float)arg1 ;
-(float)thresholdConfidenceValue;
-(void)setThresholdConfidenceValue:(float)arg1 ;
-(float)thresholdPrecOfValidSpot;
-(void)setThresholdPrecOfValidSpot:(float)arg1 ;
@end

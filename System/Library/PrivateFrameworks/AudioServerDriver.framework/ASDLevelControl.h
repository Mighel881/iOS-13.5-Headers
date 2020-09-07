/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDControl.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ASDLevelControl : ASDControl {

	float _decibelValue;
	float _minimumDecibelValue;
	float _maximumDecibelValue;
	NSObject*<OS_dispatch_queue> _valueQueue;
	BOOL _settable;

}

@property (assign,nonatomic) float decibelValue; 
@property (assign,nonatomic) float minimumDecibelValue; 
@property (assign,nonatomic) float maximumDecibelValue; 
@property (assign,nonatomic) float scalarValue; 
@property (getter=isSettable,nonatomic,readonly) BOOL settable;              //@synthesize settable=_settable - In the implementation block
+(id)volumeControlWithDecibelValue:(float)arg1 minimumValue:(float)arg2 maximumValue:(float)arg3 isSettable:(BOOL)arg4 forElement:(unsigned)arg5 inScope:(unsigned)arg6 withPlugin:(id)arg7 ;
-(BOOL)hasProperty:(const AudioObjectPropertyAddress*)arg1 ;
-(id)initWithPlugin:(id)arg1 ;
-(void)setScalarValue:(float)arg1 ;
-(id)initWithElement:(unsigned)arg1 inScope:(unsigned)arg2 withPlugin:(id)arg3 ;
-(id)initWithElement:(unsigned)arg1 inScope:(unsigned)arg2 withPlugin:(id)arg3 andObjectClassID:(unsigned)arg4 ;
-(unsigned)dataSizeForProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 andQualifierData:(const void*)arg3 ;
-(BOOL)getProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned*)arg4 andData:(void*)arg5 forClient:(int)arg6 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(unsigned)baseClass;
-(id)driverClassName;
-(BOOL)isPropertySettable:(const AudioObjectPropertyAddress*)arg1 ;
-(BOOL)setProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned)arg4 andData:(const void*)arg5 forClient:(int)arg6 ;
-(BOOL)isSettable;
-(id)initWithDecibelValue:(float)arg1 minimumValue:(float)arg2 maximumValue:(float)arg3 isSettable:(BOOL)arg4 forElement:(unsigned)arg5 inScope:(unsigned)arg6 withPlugin:(id)arg7 andObjectClassID:(unsigned)arg8 ;
-(float)scalarValue;
-(float)decibelValue;
-(float)decibelFromScalar:(float)arg1 ;
-(float)scalarFromDecibel:(float)arg1 ;
-(BOOL)changeScalarValue:(float)arg1 ;
-(float)minimumDecibelValue;
-(float)maximumDecibelValue;
-(BOOL)changeDecibelValue:(float)arg1 ;
-(float)_scalarFromDecibel:(float)arg1 ;
-(float)_decibelFromScalar:(float)arg1 ;
-(id)initWithDecibelValue:(float)arg1 minimumValue:(float)arg2 maximumValue:(float)arg3 isSettable:(BOOL)arg4 forElement:(unsigned)arg5 inScope:(unsigned)arg6 withPlugin:(id)arg7 ;
-(void)setMaximumDecibelValue:(float)arg1 ;
-(void)setMinimumDecibelValue:(float)arg1 ;
-(void)setDecibelValue:(float)arg1 ;
@end

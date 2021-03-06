/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol NURAWImageProperties <NSObject>
@property (readonly) NSString * decoderVersion; 
@property (readonly) NSArray * availableDecoderVersions; 
@property (readonly) double temperature; 
@property (readonly) double tint; 
@property (readonly) id<NURAWNoiseReductionProperties> noiseReductionProperties; 
@required
-(double)temperature;
-(double)tint;
-(NSArray *)availableDecoderVersions;
-(id)inputNeutralXYFromRGB:(const double*)arg1;
-(NSString *)decoderVersion;
-(id<NURAWNoiseReductionProperties>)noiseReductionProperties;

@end


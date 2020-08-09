/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>
#import <libobjc.A.dylib/NUTimeBased.h>

@protocol NUScalePolicy;
@class NSString;

@interface NUFaceDetectionRequest : NURenderRequest <NUTimeBased> {

	long long _maxFaceCount;
	id<NUScalePolicy> _scalePolicy;

}

@property (assign) long long maxFaceCount;                          //@synthesize maxFaceCount=_maxFaceCount - In the implementation block
@property (retain) id<NUScalePolicy> scalePolicy;                   //@synthesize scalePolicy=_scalePolicy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) SCD_Struct_NU6 time; 
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithComposition:(id)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(void)setScalePolicy:(id<NUScalePolicy>)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
-(id<NUScalePolicy>)scalePolicy;
-(long long)maxFaceCount;
-(void)setMaxFaceCount:(long long)arg1 ;
@end

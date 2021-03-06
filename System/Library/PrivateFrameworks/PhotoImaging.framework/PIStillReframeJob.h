/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NURenderJob.h>

@class PIReframeResult, PIStillReframeRequest;

@interface PIStillReframeJob : NURenderJob {

	PIReframeResult* _reframeResult;

}

@property (nonatomic,readonly) PIStillReframeRequest * stillReframeRequest; 
@property (nonatomic,retain) PIReframeResult * reframeResult;                            //@synthesize reframeResult=_reframeResult - In the implementation block
-(id)result;
-(id)cacheKey;
-(BOOL)render:(out id*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)cleanUp;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)scalePolicy;
-(id)initWithStillReframeRequest:(id)arg1 ;
-(PIStillReframeRequest *)stillReframeRequest;
-(PIReframeResult *)reframeResult;
-(void)setReframeResult:(PIReframeResult *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderJob.h>

@class NSDictionary;

@interface NUImageDataJob : NURenderJob {

	NSDictionary* _data;

}
-(id)result;
-(id)cacheKey;
-(BOOL)render:(out id*)arg1 ;
-(void)cleanUp;
-(id)requestOptions;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)scalePolicy;
-(id)extractDataToDictionary:(id)arg1 bounds:(SCD_Struct_NU8)arg2 dataExtractor:(id)arg3 options:(id)arg4 colorSpace:(CGColorSpaceRef)arg5 error:(id*)arg6 ;
@end


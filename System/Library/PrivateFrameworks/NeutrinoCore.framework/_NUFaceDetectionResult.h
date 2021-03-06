/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUFaceDetectionResult.h>

@class NSArray, NSString;

@interface _NUFaceDetectionResult : _NURenderResult <NUFaceDetectionResult> {

	NSArray* _faces;
	SCD_Struct_NU7 _imageSize;

}

@property (retain) NSArray * faces;                                  //@synthesize faces=_faces - In the implementation block
@property (assign) SCD_Struct_NU7 imageSize;                         //@synthesize imageSize=_imageSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
-(void)setFaces:(NSArray *)arg1 ;
-(NSArray *)faces;
-(SCD_Struct_NU7)imageSize;
-(void)setImageSize:(SCD_Struct_NU7)arg1 ;
@end


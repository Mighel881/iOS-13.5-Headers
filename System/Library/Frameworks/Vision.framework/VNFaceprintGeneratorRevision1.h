/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNFaceprintGenerator.h>

@interface VNFaceprintGeneratorRevision1 : VNFaceprintGenerator
+(unsigned)pixelFormat;
+(id)modelPath;
+(int)clusteringConfidence;
+(unsigned long long)numberOfChannels;
+(int)imageType;
+(/*function pointer*/void*)faceDescriptorCreator;
+(CGRect)faceBoundingBox:(id)arg1 ;
+(CVBufferRef)cropFaceBoundingBoxFrom:(id)arg1 cropBounds:(CGRect)arg2 error:(id*)arg3 ;
+(1)frontalizer;
+(/*function pointer*/void*)getFaceJunkClassifier;
+(float)magnifiedBBoxScaleFactor;
@end


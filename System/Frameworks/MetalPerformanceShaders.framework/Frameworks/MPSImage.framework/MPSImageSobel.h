/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@interface MPSImageSobel : MPSUnaryImageKernel {

	float _colVec[3];

}

@property (nonatomic,readonly) const float* colorTransform; 
+(const MPSLibraryInfo*)libraryInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(MPSRegion)sourceRegionForDestinationSize:(SCD_Struct_MP9)arg1 ;
-(id)initWithDevice:(id)arg1 linearGrayColorTransform:(const float*)arg2 ;
-(const float*)colorTransform;
@end


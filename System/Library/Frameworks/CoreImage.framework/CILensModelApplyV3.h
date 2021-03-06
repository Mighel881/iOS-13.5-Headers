/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface CILensModelApplyV3 : CIFilter {

	CIImage* inputImage;
	CIImage* inputLensModelImage;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputLensModelImage; 
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)kernel;
-(CIImage *)inputLensModelImage;
-(void)setInputLensModelImage:(CIImage *)arg1 ;
@end


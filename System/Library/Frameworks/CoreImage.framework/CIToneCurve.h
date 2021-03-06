/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>
#import <libobjc.A.dylib/_CIFilterProperties.h>

@class CIImage, CIVector;

@interface CIToneCurve : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	CIVector* inputPoint0;
	CIVector* inputPoint1;
	CIVector* inputPoint2;
	CIVector* inputPoint3;
	CIVector* inputPoint4;
	CIImage* _curveImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) CIVector * inputPoint0; 
@property (nonatomic,copy) CIVector * inputPoint1; 
@property (nonatomic,copy) CIVector * inputPoint2; 
@property (nonatomic,copy) CIVector * inputPoint3; 
@property (nonatomic,copy) CIVector * inputPoint4; 
+(id)customAttributes;
+(id)curveImageFromPoints:(const CGPoint*)arg1 ;
+(void)splineCurveTable:(double*)arg1 tableSize:(int)arg2 gamma:(double)arg3 from:(const CGPoint*)arg4 ;
+(id)curveImageFromPoints:(const CGPoint*)arg1 linear:(BOOL)arg2 ;
-(void)dealloc;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
-(BOOL)_isIdentity;
-(CIVector *)inputPoint0;
-(CIVector *)inputPoint1;
-(void)setInputPoint0:(CIVector *)arg1 ;
-(void)setInputPoint1:(CIVector *)arg1 ;
-(id)_kernel16;
-(void)setInputPoint2:(CIVector *)arg1 ;
-(void)setInputPoint3:(CIVector *)arg1 ;
-(void)setInputPoint4:(CIVector *)arg1 ;
-(CIVector *)inputPoint2;
-(CIVector *)inputPoint3;
-(CIVector *)inputPoint4;
@end


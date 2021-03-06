/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNPixelBufferObservation.h>

@class NSArray;

@interface VNSaliencyImageObservation : VNPixelBufferObservation {

	CGSize _mOriginalImageSize;
	CGRect _mSalientRegion;
	CGRect _mHighlySalientRegion;
	os_unfair_lock_s _mComputeBoundingBoxesLock;
	NSArray* _mSalientObjects;

}

@property (nonatomic,readonly) CGRect boundingBox; 
@property (nonatomic,readonly) CGRect narrowedBoundingBox; 
@property (nonatomic,readonly) NSArray * salientObjects; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)boundingBox;
-(CVBufferRef)createSaliencyImageAndReturnError:(id*)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 rawSaliencyImage:(CVBufferRef)arg2 originalImageSize:(CGSize)arg3 salientObjectBoundingBoxes:(id)arg4 ;
-(id)salientObjectsAndReturnError:(id*)arg1 ;
-(void)_computeBoundingBoxes;
-(NSArray *)salientObjects;
-(CGRect)narrowedBoundingBox;
@end


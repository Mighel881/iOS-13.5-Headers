/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoVision/PhotoVision-Structs.h>
#import <PhotoVision/PVObject.h>

@class NSData, PVFace;

@interface PVFaceCrop : PVObject {

	NSData* _faceCropData;
	PVFace* _originatingFace;
	CGSize _cachedImageDimensions;
	short _state;

}

@property (assign,nonatomic) short state;              //@synthesize state=_state - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(short)state;
-(void)setState:(short)arg1 ;
-(CGSize)imageDimensions;
-(id)faceCropData;
-(id)originatingFace;
-(id)initWithLocalIdentifier:(id)arg1 faceCropData:(id)arg2 ;
-(id)initWithFaceCropData:(id)arg1 originatingFace:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@interface VNEspressoDetectedObject : NSObject {

	CGRect _bounds;
	float _confidence;
	long long _objectType;

}

@property (assign) long long objectType;              //@synthesize objectType=_objectType - In the implementation block
@property (assign) CGRect bounds;                     //@synthesize bounds=_bounds - In the implementation block
@property (readonly) CGPoint center; 
@property (assign) float confidence;                  //@synthesize confidence=_confidence - In the implementation block
-(float)confidence;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(CGPoint)center;
-(long long)objectType;
-(void)setConfidence:(float)arg1 ;
-(void)setObjectType:(long long)arg1 ;
-(id)initWithObjectType:(long long)arg1 boundingBox:(CGRect)arg2 confidence:(float)arg3 ;
@end


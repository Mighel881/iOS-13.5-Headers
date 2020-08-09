/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ARKit/ARKit-Structs.h>
@interface ARHitTestRaycasting : NSObject
+(id)hitTestFromOrigin:(id)arg1 resultType:(unsigned long long)arg2 origin:(SCD_Struct_AR1)arg3 ;
+(unsigned)fillPointCloud:(const SCD_Struct_AR1*)arg1 cloudFeatures:(id)arg2 vergenceAngleCosines:(const float*)arg3 cloudWorldPoints:(id)arg4 pointsWorld:(vector<CV3DHitTestPoint3D, std::__1::allocator<CV3DHitTestPoint3D> >*)arg5 covariancesWorld:(vector<CV3DHitTestCovariance3D, std::__1::allocator<CV3DHitTestCovariance3D> >*)arg6 cameraCalibration:(id)arg7 ;
+(id)convertHitTestResult:(const CV3DHitTestResult*)arg1 resultType:(unsigned long long)arg2 origin:(SCD_Struct_AR1)arg3 ;
@end

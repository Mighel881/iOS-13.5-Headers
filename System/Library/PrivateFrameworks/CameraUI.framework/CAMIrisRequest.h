/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMIrisRequest <NSObject>
@property (nonatomic,readonly) long long irisMode; 
@required
-(long long)irisMode;
-(id)irisStillImagePersistenceUUIDForEV0:(BOOL)arg1;
-(id)irisVideoPersistenceUUIDForEV0:(BOOL)arg1;
-(BOOL)isEV0LocalVideoDestinationURL:(id)arg1;
-(id)irisIdentifierForEV0:(BOOL)arg1;
-(id)irisLocalVideoDestinationURLForEV0:(BOOL)arg1;
-(id)irisLocalSpatialOverCaptureVideoDestinationForEV0:(BOOL)arg1;
-(BOOL)isLocalSpatialOverCaptureVideoDestinationURL:(id)arg1;

@end


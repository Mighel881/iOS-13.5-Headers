/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIImagePickerCameraViewController <NSObject>
@required
-(BOOL)_showsCameraControls;
-(void)_setShowsCameraControls:(BOOL)arg1;
-(id)_cameraOverlayView;
-(void)_setCameraOverlayView:(id)arg1;
-(CGAffineTransform*)_cameraViewTransform;
-(void)_setCameraViewTransform:(CGAffineTransform)arg1;
-(void)_takePicture;
-(BOOL)_startVideoCapture;
-(void)_stopVideoCapture;
-(long long)_cameraDevice;
-(void)_setCameraDevice:(long long)arg1;
-(long long)_cameraCaptureMode;
-(void)_setCameraCaptureMode:(long long)arg1;
-(long long)_cameraFlashMode;
-(void)_setCameraFlashMode:(long long)arg1;
-(id)initWithInitialImagePickerProperties:(id)arg1;

@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>

@class AVCapturePhotoOutputInternal, NSArray, AVCapturePhotoSettings;

@interface AVCapturePhotoOutput : AVCaptureOutput {

	AVCapturePhotoOutputInternal* _internal;

}

@property (nonatomic,readonly) NSArray * preparedPhotoSettingsArray; 
@property (nonatomic,readonly) NSArray * availablePhotoPixelFormatTypes; 
@property (nonatomic,readonly) NSArray * availablePhotoCodecTypes; 
@property (nonatomic,readonly) NSArray * availableRawPhotoPixelFormatTypes; 
@property (nonatomic,readonly) NSArray * availablePhotoFileTypes; 
@property (nonatomic,readonly) NSArray * availableRawPhotoFileTypes; 
@property (assign,nonatomic) long long maxPhotoQualityPrioritization; 
@property (getter=isStillImageStabilizationSupported,nonatomic,readonly) BOOL stillImageStabilizationSupported; 
@property (nonatomic,readonly) BOOL isStillImageStabilizationScene; 
@property (getter=isVirtualDeviceFusionSupported,nonatomic,readonly) BOOL virtualDeviceFusionSupported; 
@property (getter=isDualCameraFusionSupported,nonatomic,readonly) BOOL dualCameraFusionSupported; 
@property (getter=isVirtualDeviceConstituentPhotoDeliverySupported,nonatomic,readonly) BOOL virtualDeviceConstituentPhotoDeliverySupported; 
@property (getter=isDualCameraDualPhotoDeliverySupported,nonatomic,readonly) BOOL dualCameraDualPhotoDeliverySupported; 
@property (assign,getter=isVirtualDeviceConstituentPhotoDeliveryEnabled,nonatomic) BOOL virtualDeviceConstituentPhotoDeliveryEnabled; 
@property (assign,getter=isDualCameraDualPhotoDeliveryEnabled,nonatomic) BOOL dualCameraDualPhotoDeliveryEnabled; 
@property (getter=isCameraCalibrationDataDeliverySupported,nonatomic,readonly) BOOL cameraCalibrationDataDeliverySupported; 
@property (nonatomic,readonly) NSArray * supportedFlashModes; 
@property (getter=isAutoRedEyeReductionSupported,nonatomic,readonly) BOOL autoRedEyeReductionSupported; 
@property (nonatomic,readonly) BOOL isFlashScene; 
@property (nonatomic,copy) AVCapturePhotoSettings * photoSettingsForSceneMonitoring; 
@property (assign,getter=isHighResolutionCaptureEnabled,nonatomic) BOOL highResolutionCaptureEnabled; 
@property (nonatomic,readonly) unsigned long long maxBracketedCapturePhotoCount; 
@property (getter=isLensStabilizationDuringBracketedCaptureSupported,nonatomic,readonly) BOOL lensStabilizationDuringBracketedCaptureSupported; 
@property (getter=isLivePhotoCaptureSupported,nonatomic,readonly) BOOL livePhotoCaptureSupported; 
@property (assign,getter=isLivePhotoCaptureEnabled,nonatomic) BOOL livePhotoCaptureEnabled; 
@property (assign,getter=isLivePhotoCaptureSuspended,nonatomic) BOOL livePhotoCaptureSuspended; 
@property (assign,getter=isLivePhotoAutoTrimmingEnabled,nonatomic) BOOL livePhotoAutoTrimmingEnabled; 
@property (nonatomic,readonly) NSArray * availableLivePhotoVideoCodecTypes; 
+(void)initialize;
+(id)new;
+(SCD_Struct_AV41)maxLivePhotoMovieDimensions;
+(id)validMetadataTopLevelCGImagePropertiesKeys;
+(CFDictionaryRef)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
+(id)JPEGPhotoDataRepresentationForJPEGSampleBuffer:(opaqueCMSampleBufferRef)arg1 previewPhotoSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
+(id)DNGPhotoDataRepresentationForRawSampleBuffer:(opaqueCMSampleBufferRef)arg1 previewPhotoSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
+(unsigned long long)maxLivePhotoDataSize;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)setSession:(id)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(id)supportedHDRModes;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)connectionMediaTypes;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(BOOL)isDepthDataDeliveryEnabled;
-(id)enabledSemanticSegmentationMatteTypes;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(void)setPortraitEffectsMatteDeliveryEnabled:(BOOL)arg1 ;
-(void)setEnabledSemanticSegmentationMatteTypes:(id)arg1 ;
-(BOOL)isDualCameraDualPhotoDeliveryEnabled;
-(void)setDualCameraDualPhotoDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)isPortraitEffectsMatteDeliveryEnabled;
-(SCD_Struct_AV41)livePhotoMovieDimensions;
-(BOOL)isAutoRedEyeReductionSupported;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(BOOL)isLivePhotoCaptureEnabled;
-(SCD_Struct_AV7)livePhotoMovieDuration;
-(SCD_Struct_AV7)livePhotoMovieVideoFrameDuration;
-(BOOL)isLivePhotoAutoTrimmingEnabled;
-(id)figCaptureIrisPreparedSettings;
-(BOOL)optimizesImagesForOfflineVideoStabilization;
-(void)setOptimizesImagesForOfflineVideoStabilization:(BOOL)arg1 ;
-(BOOL)isHighResolutionCaptureEnabled;
-(BOOL)isFilterRenderingEnabled;
-(void)setFilterRenderingEnabled:(BOOL)arg1 ;
-(BOOL)isVirtualDeviceConstituentPhotoDeliveryEnabled;
-(BOOL)isMovieRecordingEnabled;
-(long long)maxPhotoQualityPrioritization;
-(BOOL)isDeferredProcessingEnabled;
-(void)setDeferredProcessingEnabled:(BOOL)arg1 ;
-(BOOL)isDigitalFlashCaptureEnabled;
-(void)setDigitalFlashCaptureEnabled:(BOOL)arg1 ;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(BOOL)isCameraCalibrationDataDeliverySupported;
-(BOOL)isStillImageStabilizationScene;
-(BOOL)isStillImageStabilizationSupported;
-(BOOL)isLensStabilizationDuringBracketedCaptureSupported;
-(BOOL)isDepthDataDeliverySupported;
-(NSArray *)availablePhotoPixelFormatTypes;
-(NSArray *)availablePhotoCodecTypes;
-(NSArray *)availableRawPhotoPixelFormatTypes;
-(NSArray *)availablePhotoFileTypes;
-(NSArray *)availableRawPhotoFileTypes;
-(NSArray *)supportedFlashModes;
-(id)supportedDigitalFlashModes;
-(unsigned long long)maxBracketedCapturePhotoCount;
-(NSArray *)availableLivePhotoVideoCodecTypes;
-(SCD_Struct_AV41)optimizedImageDimensionsForOfflineStabilization;
-(BOOL)isFlashScene;
-(BOOL)isHDRScene;
-(long long)digitalFlashStatus;
-(id)digitalFlashExposureTimes;
-(AVCapturePhotoSettings *)photoSettingsForSceneMonitoring;
-(void)_incrementObserverCountForKeyPath:(id)arg1 ;
-(void)_decrementObserverCountForKeyPath:(id)arg1 ;
-(id)_figCaptureIrisStillImageSettingsForAVCapturePhotoSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3 ;
-(void)_dispatchFailureCallbacksForPhotoSettings:(id)arg1 toDelegate:(id)arg2 withError:(id)arg3 ;
-(id)_figCaptureIrisPreparedSettingsForRequest:(id)arg1 ;
-(void)_handlePreparationCompleteNotificationWithPayload:(id)arg1 settingsID:(long long)arg2 ;
-(BOOL)isVirtualDeviceConstituentPhotoDeliverySupported;
-(void)_updateCameraCalibrationDataDeliverySupportedForSourceDevice:(id)arg1 ;
-(BOOL)isDualCameraDualPhotoDeliverySupported;
-(BOOL)isDeferredProcessingSupported;
-(void)_updateSceneMonitoringForSourceDevice:(id)arg1 ;
-(BOOL)isLivePhotoCaptureSupported;
-(void)setFigCaptureSessionSectionProperty:(CFStringRef)arg1 withHostTime:(SCD_Struct_AV7)arg2 settingStateVariableToNoOnFailure:(BOOL*)arg3 ;
-(id)availableSemanticSegmentationMatteTypes;
-(id)_figCaptureMovieFileRecordingSettingsForAVMomentCaptureMovieRecordingSettings:(id)arg1 momentCaptureSettings:(id)arg2 delegate:(id)arg3 connections:(id)arg4 ;
-(void)_dispatchFailureCallbacksForMovieRecordingSettings:(id)arg1 momentCaptureSettings:(id)arg2 toDelegate:(id)arg3 withError:(id)arg4 ;
-(BOOL)isLivePhotoCaptureSuspended;
-(void)setLivePhotoCaptureSuspended:(BOOL)arg1 ;
-(void)capturePhotoWithSettings:(id)arg1 delegate:(id)arg2 ;
-(void)_updateSupportedPropertiesForSourceDevice:(id)arg1 ;
-(void)_resetLivePhotoMovieProcessingSuspended;
-(void)_resetLivePhotoCaptureSuspended;
-(void)_dispatchFailureCallbacks:(unsigned)arg1 forPhotoRequest:(id)arg2 withError:(id)arg3 cleanupRequest:(BOOL)arg4 ;
-(void)_dispatchFailureCallbacks:(unsigned)arg1 forMovieRequest:(id)arg2 withError:(id)arg3 cleanupRequest:(BOOL)arg4 ;
-(void)_updateSupportedHDRModesForSourceDevice:(id)arg1 ;
-(void)_updateLivePhotoCaptureSupportedForSourceDevice:(id)arg1 ;
-(void)_updateLivePhotoMovieDimensionsForSourceDevice:(id)arg1 ;
-(void)_updateAvailableLivePhotoVideoCodecTypesForSourceDevice:(id)arg1 ;
-(void)_updateAvailableRawPhotoPixelFormatTypesForSourceDevice:(id)arg1 ;
-(void)_updateAvailableRawPhotoFileTypesForSourceDevice:(id)arg1 ;
-(void)_setIsFlashScene:(BOOL)arg1 firingKVO:(BOOL)arg2 ;
-(void)_setIsHDRScene:(BOOL)arg1 firingKVO:(BOOL)arg2 ;
-(void)_setIsStillImageStabilizationScene:(BOOL)arg1 firingKVO:(BOOL)arg2 ;
-(void)_setDigitalFlashScene:(id)arg1 fireStatusKVO:(BOOL)arg2 fireExposureTimesKVO:(BOOL)arg3 ;
-(void)_updateAvailablePhotoPixelFormatTypesForSourceDevice:(id)arg1 ;
-(void)_updateAvailablePhotoCodecTypesForSourceDevice:(id)arg1 ;
-(void)_updateAvailablePhotoFileTypesForSourceDevice:(id)arg1 ;
-(void)_updateAutoRedReductionSupportedForSourceDevice:(id)arg1 ;
-(void)_updateStillImageStabilizationSupportedForSourceDevice:(id)arg1 ;
-(void)_updateVirtualDeviceFusionSupportedForSourceDevice:(id)arg1 ;
-(void)_updateDualCameraDualPhotoDeliverySupportedForSourceDevice:(id)arg1 ;
-(void)_updateVirtualDeviceConstituentPhotoDeliverySupportedForSourceDevice:(id)arg1 ;
-(void)_updateSupportedFlashModesForSourceDevice:(id)arg1 ;
-(void)_updateSupportedDigitalFlashModesForSourceDevice:(id)arg1 ;
-(void)_updateMaxBracketedCapturePhotoCountForSourceDevice:(id)arg1 ;
-(void)_updateLensStabilizationDuringBracketedCaptureSupportedForSourceDevice:(id)arg1 ;
-(void)_updateOfflineVISSupportedForSourceDevice:(id)arg1 ;
-(void)_updateDepthDataDeliverySupportedForSourceDevice:(id)arg1 ;
-(void)_updateMovieRecordingSupportedForSourceDevice:(id)arg1 ;
-(void)_updateDeferredProcessingSupportedForSourceDevice:(id)arg1 ;
-(void)_updateProcessedPhotoZoomWithoutUpscalingSupportedForSourceDevice:(id)arg1 ;
-(BOOL)_HEVCAndHEIFAreAvailableForSourceDevice:(id)arg1 ;
-(id)_sanitizedSettingsForSettings:(id)arg1 ;
-(id)_photoRequestForUniqueID:(long long)arg1 ;
-(id)_movieRequestForUniqueID:(long long)arg1 ;
-(void)_handleWillBeginCaptureNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleWillCaptureStillImageNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleDidCaptureStillImageNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleStillImageCompleteNotification:(id)arg1 withPayload:(id)arg2 forRequest:(id)arg3 ;
-(void)_handleDidRecordIrisMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleDidFinishRecordingVideoNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleDidFinishRecordingIrisMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleDidBeginRecordingMomentCaptureMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleDidFinishRecordingMomentCaptureMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleDidFinishWritingMomentCaptureMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(id)_errorForFigCaptureSessionNotificationPayloadErrorStatus:(int)arg1 userInfo:(id)arg2 ;
-(void)_handleDidFinishCaptureNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(id)_avErrorUserInfoDictionaryForError:(int)arg1 photoRequest:(id)arg2 payload:(id)arg3 isOriginalMovie:(BOOL)arg4 ;
-(id)_avErrorUserInfoDictionaryForError:(int)arg1 movieRequest:(id)arg2 payload:(id)arg3 isSpatialOverCaptureMovie:(BOOL)arg4 ;
-(void)_handleDidFinishMovieCaptureMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(NSArray *)preparedPhotoSettingsArray;
-(void)setPreparedPhotoSettingsArray:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)supportedPhotoPixelFormatTypesForFileType:(id)arg1 ;
-(id)supportedPhotoCodecTypesForFileType:(id)arg1 ;
-(id)supportedRawPhotoPixelFormatTypesForFileType:(id)arg1 ;
-(void)setMaxPhotoQualityPrioritization:(long long)arg1 ;
-(BOOL)isVirtualDeviceFusionSupported;
-(BOOL)isDualCameraFusionSupported;
-(void)setVirtualDeviceConstituentPhotoDeliveryEnabled:(BOOL)arg1 ;
-(void)setPhotoSettingsForSceneMonitoring:(AVCapturePhotoSettings *)arg1 ;
-(void)setHighResolutionCaptureEnabled:(BOOL)arg1 ;
-(void)setLivePhotoCaptureEnabled:(BOOL)arg1 ;
-(void)setLivePhotoAutoTrimmingEnabled:(BOOL)arg1 ;
-(BOOL)isLivePhotoMovieProcessingSuspended;
-(void)setLivePhotoMovieProcessingSuspended:(BOOL)arg1 ;
-(BOOL)isPortraitEffectsMatteDeliverySupported;
-(BOOL)isImageOptimizationForOfflineVideoStabilizationSupported;
-(void)userInitiatedCaptureRequestAtTime:(unsigned long long)arg1 ;
-(BOOL)isMovieRecordingSupported;
-(void)setMovieRecordingEnabled:(BOOL)arg1 ;
-(void)beginMomentCaptureWithSettings:(id)arg1 ;
-(void)commitMomentCaptureWithUniqueID:(long long)arg1 toPhotoCaptureWithSettings:(id)arg2 delegate:(id)arg3 ;
-(void)commitMomentCaptureWithUniqueID:(long long)arg1 toMovieRecordingWithSettings:(id)arg2 delegate:(id)arg3 ;
-(void)cancelMomentCaptureWithUniqueID:(long long)arg1 ;
-(void)endMomentCaptureWithUniqueID:(long long)arg1 ;
-(BOOL)isVideoCaptureSupported;
-(void)setVideoCaptureEnabled:(BOOL)arg1 ;
-(BOOL)isVideoCaptureEnabled;
-(void)initiateCaptureWithSettings:(id)arg1 ;
-(void)commitCaptureWithSettings:(id)arg1 delegate:(id)arg2 ;
-(void)endCaptureWithUniqueID:(long long)arg1 ;
-(BOOL)isProcessedPhotoZoomWithoutUpscalingSupported;
@end

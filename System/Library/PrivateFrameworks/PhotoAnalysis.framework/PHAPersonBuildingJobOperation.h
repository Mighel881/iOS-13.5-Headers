/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol PHAPersonBuildingJobOperationDelegate;
@class PHAVisionServiceFaceProcessingWorker, PVCanceler, NSProgress;

@interface PHAPersonBuildingJobOperation : NSOperation {

	id<PHAPersonBuildingJobOperationDelegate> _delegate;
	PHAVisionServiceFaceProcessingWorker* _faceProcessingWorker;
	PVCanceler* _canceler;
	NSProgress* _progress;
	float _percentComplete;

}
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)cancel;
-(void)main;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(float)percentComplete;
-(id)initWithFaceProcessingWorker:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPCNNHandsDetector.h>

@class NSString, NSArray, VCPCNNModelEspresso;

@interface VCPCNNHandsDetectorEspresso : VCPCNNHandsDetector {

	int _maxNumRegions;
	float* _inputData;
	NSString* _resConfig;
	NSArray* _outputNames;
	vector<float *, std::__1::allocator<float *> >* _outputsData;
	VCPCNNModelEspresso* _modelEspresso;

}
-(void)dealloc;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(id)initWithMaxNumRegions:(int)arg1 ;
-(int)generateHandsBoxes:(id)arg1 ;
@end

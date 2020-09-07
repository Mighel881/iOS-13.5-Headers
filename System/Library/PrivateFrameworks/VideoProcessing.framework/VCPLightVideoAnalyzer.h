/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class AVAsset, NSArray, NSMutableDictionary, NSDictionary;

@interface VCPLightVideoAnalyzer : NSObject {

	unsigned long long _requestedAnalyses;
	AVAsset* _avAsset;
	CGAffineTransform _transform;
	NSArray* _metaTracks;
	NSMutableDictionary* _publicMutableResults;
	NSMutableDictionary* _privateMutableResults;

}

@property (nonatomic,readonly) NSDictionary * publicResults; 
@property (nonatomic,readonly) NSDictionary * privateResults; 
-(NSDictionary *)privateResults;
-(id)findMetaTrackforType:(id)arg1 ;
-(NSDictionary *)publicResults;
-(int)processMetaTrackForType:(id)arg1 cancel:(/*^block*/id)arg2 flags:(unsigned long long*)arg3 ;
-(int)checkTimeRangeConsistency;
-(id)initWithAVAsset:(id)arg1 forAnalysisTypes:(unsigned long long)arg2 ;
-(int)analyzeAsset:(/*^block*/id)arg1 flags:(unsigned long long*)arg2 ;
@end

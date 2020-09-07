/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SNAnalyzerProviding.h>
#import <libobjc.A.dylib/SNRequest.h>

@class SNSoundClassifier, NSString;

@interface SNClassifySoundRequest : NSObject <SNAnalyzerProviding, SNRequest> {

	SNSoundClassifier* _classifier;

}

@property (assign) double overlapFactor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<SNAnalyzing> analyzer; 
-(id)initWithMLModel:(id)arg1 error:(id*)arg2 ;
-(id<SNAnalyzing>)analyzer;
-(double)overlapFactor;
-(void)setOverlapFactor:(double)arg1 ;
@end

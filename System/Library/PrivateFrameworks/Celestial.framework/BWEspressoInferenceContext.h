/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSString;

@interface BWEspressoInferenceContext : NSObject {

	int _executionTarget;
	void* _espressoContext;
	unsigned long long _options;
	BOOL _shareIntermediateBuffer;
	void* _rootIntermediateBufferPlan;
	NSString* _sharedBufferNetworksPath;

}

@property (nonatomic,readonly) int executionTarget;                          //@synthesize executionTarget=_executionTarget - In the implementation block
@property (nonatomic,readonly) void* espressoContext; 
@property (getter=isPrepared,nonatomic,readonly) BOOL prepared; 
+(void)initialize;
-(void)dealloc;
-(id)description;
-(void*)espressoContext;
-(BOOL)isPrepared;
-(int)executionTarget;
-(id)initWithExecutionTarget:(int)arg1 shareIntermediateBuffer:(BOOL)arg2 ;
-(id)initWithExecutionTarget:(int)arg1 ;
-(int)prepareForInferenceUsingProcessingSession:(OpaqueFigCaptureISPProcessingSessionRef)arg1 ;
-(int)configureIntermediateBufferSharingForPlanPrebuild:(void*)arg1 ;
-(int)configureIntermediateBufferSharingForPlanPostbuild:(void*)arg1 ;
-(int)enableIntermediateBufferSharingWithNetworksLoadedFromPath:(id)arg1 ;
@end


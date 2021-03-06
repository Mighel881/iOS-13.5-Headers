/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSURL;

@interface ETModelDefinition : NSObject {

	NSArray* _layerNames;
	NSArray* _inputs;
	NSArray* _outputs;
	NSURL* _modelURL;

}

@property (readonly) NSArray * layerNames;              //@synthesize layerNames=_layerNames - In the implementation block
@property (readonly) NSArray * inputs;                  //@synthesize inputs=_inputs - In the implementation block
@property (readonly) NSArray * outputs;                 //@synthesize outputs=_outputs - In the implementation block
@property (readonly) NSURL * modelURL;                  //@synthesize modelURL=_modelURL - In the implementation block
-(NSURL *)modelURL;
-(NSArray *)inputs;
-(NSArray *)outputs;
-(id)initWithInferenceNetworkPath:(id)arg1 inferenceInputs:(id)arg2 inferenceOutputs:(id)arg3 error:(id*)arg4 ;
-(NSArray *)layerNames;
-(id)initWithInferenceNetworkPath:(id)arg1 error:(id*)arg2 ;
@end


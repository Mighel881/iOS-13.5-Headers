/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/MLClassifier.h>

@class MLSVMEngine;

@interface MLSupportVectorClassifier : MLClassifier {

	MLSVMEngine* _engine;

}

@property (retain) MLSVMEngine * engine;              //@synthesize engine=_engine - In the implementation block
+(id)featureValueWithObject:(id)arg1 ;
-(MLSVMEngine *)engine;
-(id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)setEngine:(MLSVMEngine *)arg1 ;
-(id)initWithEngine:(id)arg1 interface:(id)arg2 metadata:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
@end

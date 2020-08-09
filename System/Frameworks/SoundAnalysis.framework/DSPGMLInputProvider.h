/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet, MLFeatureDescription, MLMultiArray;

@interface DSPGMLInputProvider : NSObject <MLFeatureProvider> {

	MLFeatureDescription* _featureDescription;
	MLMultiArray* _input;

}

@property (nonatomic,retain) MLMultiArray * input;                //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(MLMultiArray *)input;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(void)setInput:(MLMultiArray *)arg1 ;
-(id)initWithFeatureDescription:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface CRTextRecognizerModelInput : NSObject <MLFeatureProvider> {

	MLMultiArray* _img_input;

}

@property (nonatomic,retain) MLMultiArray * img_input;              //@synthesize img_input=_img_input - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithImg_input:(id)arg1 ;
-(MLMultiArray *)img_input;
-(void)setImg_input:(MLMultiArray *)arg1 ;
@end


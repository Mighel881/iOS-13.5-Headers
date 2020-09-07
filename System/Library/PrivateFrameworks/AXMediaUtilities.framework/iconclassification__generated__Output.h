/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSString, NSSet;

@interface iconclassification__generated__Output : NSObject <MLFeatureProvider> {

	NSDictionary* _output1;
	NSString* _classLabel;

}

@property (nonatomic,retain) NSDictionary * output1;              //@synthesize output1=_output1 - In the implementation block
@property (nonatomic,retain) NSString * classLabel;               //@synthesize classLabel=_classLabel - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(NSString *)classLabel;
-(NSDictionary *)output1;
-(id)initWithOutput1:(id)arg1 classLabel:(id)arg2 ;
-(void)setOutput1:(NSDictionary *)arg1 ;
-(void)setClassLabel:(NSString *)arg1 ;
@end

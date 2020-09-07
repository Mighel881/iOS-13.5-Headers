/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PGSharingFeatures : NSObject <NSSecureCoding> {

	NSArray* _classes;
	NSArray* _momentFeatureVectors;
	NSArray* _assetFeatureVectors;

}

@property (nonatomic,readonly) NSArray * classes;                           //@synthesize classes=_classes - In the implementation block
@property (nonatomic,readonly) NSArray * momentFeatureVectors;              //@synthesize momentFeatureVectors=_momentFeatureVectors - In the implementation block
@property (nonatomic,readonly) NSArray * assetFeatureVectors;               //@synthesize assetFeatureVectors=_assetFeatureVectors - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)classes;
-(id)initWithClasses:(id)arg1 momentFeatureVectors:(id)arg2 assetFeatureVectors:(id)arg3 ;
-(NSArray *)momentFeatureVectors;
-(NSArray *)assetFeatureVectors;
@end

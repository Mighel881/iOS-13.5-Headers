/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@class NSDate, NSData;

@interface PHAssetSceneAnalysisProperties : PHAssetPropertySet {

	unsigned long long _sceneAnalysisVersion;
	NSDate* _sceneAnalysisTimestamp;
	NSData* _distanceIdentity;

}

@property (nonatomic,readonly) unsigned long long sceneAnalysisVersion;              //@synthesize sceneAnalysisVersion=_sceneAnalysisVersion - In the implementation block
@property (nonatomic,readonly) NSDate * sceneAnalysisTimestamp;                      //@synthesize sceneAnalysisTimestamp=_sceneAnalysisTimestamp - In the implementation block
@property (nonatomic,readonly) NSData * distanceIdentity;                            //@synthesize distanceIdentity=_distanceIdentity - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
-(NSDate *)sceneAnalysisTimestamp;
-(unsigned long long)sceneAnalysisVersion;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(NSData *)distanceIdentity;
@end


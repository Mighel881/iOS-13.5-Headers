/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MPCPlayerPath, MPPropertySet, NSString;


@protocol MPCMediaRemoteMiddlewareMetadataOperationConfiguration <NSObject>
@property (nonatomic,readonly) MPCPlayerPath * playerPath; 
@property (readonly) SCD_Struct_MP0 tracklistRange; 
@property (nonatomic,readonly) MPPropertySet * playingItemProperties; 
@property (nonatomic,readonly) MPPropertySet * queueItemProperties; 
@property (nonatomic,readonly) MPPropertySet * queueSectionProperties; 
@property (nonatomic,readonly) NSString * preferredFallbackItemRelationship; 
@optional
-(NSString *)preferredFallbackItemRelationship;

@required
-(MPCPlayerPath *)playerPath;
-(SCD_Struct_MP0)tracklistRange;
-(MPPropertySet *)playingItemProperties;
-(MPPropertySet *)queueItemProperties;
-(MPPropertySet *)queueSectionProperties;

@end


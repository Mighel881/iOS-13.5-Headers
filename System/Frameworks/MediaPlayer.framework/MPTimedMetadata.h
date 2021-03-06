/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVMetadataItem, NSString, NSDictionary;

@interface MPTimedMetadata : NSObject {

	AVMetadataItem* _metadataItem;

}

@property (nonatomic,readonly) NSString * key; 
@property (nonatomic,readonly) NSString * keyspace; 
@property (nonatomic,readonly) id value; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) NSDictionary * allMetadata; 
-(id)init;
-(NSString *)key;
-(id)value;
-(double)timestamp;
-(id)_initWithMetadataItem:(id)arg1 ;
-(NSString *)keyspace;
-(NSDictionary *)allMetadata;
@end


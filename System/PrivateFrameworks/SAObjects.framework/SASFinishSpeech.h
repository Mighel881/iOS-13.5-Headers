/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSArray, NSDictionary;

@interface SASFinishSpeech : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * endpoint; 
@property (nonatomic,copy) NSArray * featuresAtEndpoint; 
@property (nonatomic,copy) NSArray * orderedContext; 
@property (assign,nonatomic) long long packetCount; 
@property (nonatomic,copy) NSDictionary * serverFeatureLatencyDistribution; 
@property (assign,nonatomic) double totalAudioRecorded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)finishSpeech;
+(id)finishSpeechWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)endpoint;
-(id)groupIdentifier;
-(void)setEndpoint:(NSString *)arg1 ;
-(void)setPacketCount:(long long)arg1 ;
-(long long)packetCount;
-(id)encodedClassName;
-(void)setOrderedContext:(NSArray *)arg1 ;
-(BOOL)requiresResponse;
-(NSArray *)featuresAtEndpoint;
-(void)setFeaturesAtEndpoint:(NSArray *)arg1 ;
-(NSArray *)orderedContext;
-(NSDictionary *)serverFeatureLatencyDistribution;
-(void)setServerFeatureLatencyDistribution:(NSDictionary *)arg1 ;
-(double)totalAudioRecorded;
-(void)setTotalAudioRecorded:(double)arg1 ;
@end


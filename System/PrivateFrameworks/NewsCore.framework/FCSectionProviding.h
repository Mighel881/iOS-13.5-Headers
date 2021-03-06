/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, FCSectionSupergroupKnobs;


@protocol FCSectionProviding <FCTagProviding>
@property (nonatomic,copy,readonly) NSString * parentID; 
@property (nonatomic,readonly) NSString * supergroupKnobsJson; 
@property (nonatomic,readonly) FCSectionSupergroupKnobs * supergroupKnobs; 
@required
-(NSString *)parentID;
-(NSString *)supergroupKnobsJson;
-(FCSectionSupergroupKnobs *)supergroupKnobs;

@end


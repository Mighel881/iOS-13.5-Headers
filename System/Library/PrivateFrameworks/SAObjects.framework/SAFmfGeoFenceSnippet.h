/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class SAFmfGeoFence, NSNumber, NSString, NSURL;

@interface SAFmfGeoFenceSnippet : SAUISnippet

@property (nonatomic,retain) SAFmfGeoFence * aceFmfGeoFence; 
@property (nonatomic,copy) NSNumber * enable; 
@property (nonatomic,copy) NSString * fenceType; 
@property (nonatomic,copy) NSNumber * oneTimeOnly; 
@property (nonatomic,copy) NSURL * searchContext; 
+(id)geoFenceSnippet;
+(id)geoFenceSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSNumber *)enable;
-(NSURL *)searchContext;
-(void)setSearchContext:(NSURL *)arg1 ;
-(void)setEnable:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSString *)fenceType;
-(void)setFenceType:(NSString *)arg1 ;
-(NSNumber *)oneTimeOnly;
-(void)setOneTimeOnly:(NSNumber *)arg1 ;
-(SAFmfGeoFence *)aceFmfGeoFence;
-(void)setAceFmfGeoFence:(SAFmfGeoFence *)arg1 ;
@end

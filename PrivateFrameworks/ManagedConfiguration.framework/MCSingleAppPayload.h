/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCAppWhitelistPayloadBase.h>

@class NSString;

@interface MCSingleAppPayload : MCAppWhitelistPayloadBase

@property (nonatomic,readonly) NSString * applicationBundleID; 
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)restrictions;
-(BOOL)mustInstallNonInteractively;
-(NSString *)applicationBundleID;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SAAppsGetRestrictedApps : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * appIds; 
@property (nonatomic,copy) NSString * executionEnvironment; 
+(id)getRestrictedApps;
+(id)getRestrictedAppsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSString *)executionEnvironment;
-(void)setExecutionEnvironment:(NSString *)arg1 ;
-(NSArray *)appIds;
-(void)setAppIds:(NSArray *)arg1 ;
@end

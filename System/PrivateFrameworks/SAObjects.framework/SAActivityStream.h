/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAActivityStream : SABaseCommand <SAServerBoundCommand, SAAceSerializable>

@property (nonatomic,copy) NSArray * activities; 
@property (nonatomic,copy) NSString * taskType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)activityStream;
+(id)activityStreamWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)activities;
-(void)setTaskType:(NSString *)arg1 ;
-(void)setActivities:(NSArray *)arg1 ;
-(NSString *)taskType;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end


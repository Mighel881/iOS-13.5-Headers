/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SASmsGroupName : SADomainObject

@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,copy) NSString * groupNameId; 
+(id)groupName;
+(id)groupNameWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)groupNameId;
-(void)setGroupNameId:(NSString *)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, SAIntentGroupProtobufMessage, NSString;

@interface SAIntentGroupResolveAppForIntent : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * appsList; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * intent; 
@property (nonatomic,copy) NSString * jsonEncodedIntent; 
+(id)resolveAppForIntent;
+(id)resolveAppForIntentWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAIntentGroupProtobufMessage *)intent;
-(void)setIntent:(SAIntentGroupProtobufMessage *)arg1 ;
-(NSArray *)appsList;
-(void)setAppsList:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)jsonEncodedIntent;
-(void)setJsonEncodedIntent:(NSString *)arg1 ;
@end

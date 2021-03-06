/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SAUIFetchSpeechAlternatives : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * requestId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)fetchSpeechAlternatives;
+(id)fetchSpeechAlternativesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)requestId;
-(id)encodedClassName;
-(void)setRequestId:(NSString *)arg1 ;
-(BOOL)requiresResponse;
@end


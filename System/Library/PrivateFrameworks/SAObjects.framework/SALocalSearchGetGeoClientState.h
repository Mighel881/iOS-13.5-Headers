/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAGetSingleClientState.h>

@class SALocalSearchGeoClientState, NSString, NSArray;

@interface SALocalSearchGetGeoClientState : SABaseClientBoundCommand <SAGetSingleClientState>

@property (nonatomic,retain) SALocalSearchGeoClientState * clientState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
+(id)getGeoClientState;
+(id)getGeoClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setClientState:(SALocalSearchGeoClientState *)arg1 ;
-(SALocalSearchGeoClientState *)clientState;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@interface SAMPSetState : SADomainCommand

@property (assign,nonatomic) int state; 
+(id)setState;
+(id)setStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(int)state;
-(id)groupIdentifier;
-(void)setState:(int)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

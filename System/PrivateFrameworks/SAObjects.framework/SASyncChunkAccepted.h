/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASyncAnchor;

@interface SASyncChunkAccepted : SABaseClientBoundCommand

@property (nonatomic,retain) SASyncAnchor * current; 
+(id)chunkAccepted;
+(id)chunkAcceptedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SASyncAnchor *)current;
-(void)setCurrent:(SASyncAnchor *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end


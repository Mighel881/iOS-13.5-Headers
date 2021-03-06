/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAccessResource.h>

@class ICScheme;

@interface WFUlyssesAccessResource : WFAccessResource {

	ICScheme* _scheme;

}

@property (nonatomic,readonly) ICScheme * scheme;              //@synthesize scheme=_scheme - In the implementation block
+(BOOL)refreshesAvailabilityOnApplicationResume;
-(void)dealloc;
-(ICScheme *)scheme;
-(id)initWithDefinition:(id)arg1 ;
-(id)associatedAppIdentifier;
-(unsigned long long)globalLevelStatus;
-(id)protectedResourceDescription;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBTestRecipe.h>

@class NSString;

@interface SBFaceIDCoachingConditionRecipe : NSObject <SBTestRecipe>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
-(id)title;
-(BOOL)_overrideCoachingConditionEnabled;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(void)_setOverrideCoachingConditionEnabled:(BOOL)arg1 ;
-(void)_setOverrideCoachingEvent:(unsigned long long)arg1 ;
@end

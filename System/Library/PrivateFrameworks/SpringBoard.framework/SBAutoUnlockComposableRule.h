/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBAutoUnlockRule.h>

@class NSMutableSet, NSString;

@interface SBAutoUnlockComposableRule : NSObject <SBAutoUnlockRule> {

	NSMutableSet* _rules;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)shouldAutoUnlockForSource:(int)arg1 ;
-(void)addAutoUnlockRule:(id)arg1 ;
-(void)removeAutoUnlockRule:(id)arg1 ;
@end

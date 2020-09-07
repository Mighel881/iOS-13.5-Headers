/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>
#import <libobjc.A.dylib/FBApplicationProcessLaunchTransactionObserver.h>

@class NSMapTable, NSMutableSet, NSString;

@interface SBSuspendedWorkspaceTransaction : SBMainWorkspaceTransaction <FBApplicationProcessLaunchTransactionObserver> {

	NSMapTable* _launchTransactionToSceneEntityMap;
	NSMutableSet* _outstandingProcessLaunchTransactions;
	NSMutableSet* _incompleteProcessLaunchTransactions;
	BOOL _anyLaunchFailed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_begin;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)_didComplete;
-(void)transaction:(id)arg1 willLaunchProcess:(id)arg2 ;
-(void)_sendActivationResultWithSuccess:(BOOL)arg1 ;
@end

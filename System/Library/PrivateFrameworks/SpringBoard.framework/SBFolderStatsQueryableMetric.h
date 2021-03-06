/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBFAnalyticsBackendEventHandling.h>

@class PETDistributionEventTracker, NSString;

@interface SBFolderStatsQueryableMetric : NSObject <SBFAnalyticsBackendEventHandling> {

	PETDistributionEventTracker* _dockAppsTracker;
	PETDistributionEventTracker* _dockFoldersTracker;
	PETDistributionEventTracker* _dockItemsTracker;
	PETDistributionEventTracker* _pageTracker;
	PETDistributionEventTracker* _folderTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)handleEvent:(unsigned long long)arg1 withContext:(id)arg2 ;
@end


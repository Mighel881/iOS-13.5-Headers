/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLDiagnostics : NSObject
+(id)diagnosticsURLs;
+(void)fileRadarUserNotificationWithHeader:(id)arg1 message:(id)arg2 radarTitle:(id)arg3 radarDescription:(id)arg4 ;
+(id)logDirectoryURL;
+(void)enumerateDiagnosticsURLsIncludingPropertyiesForKeys:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)matchingNameExpression;
+(id)excludingNameExpression;
+(unsigned long long)addOSStateHandlerWithTitle:(id)arg1 queue:(id)arg2 propertyListHandler:(/*^block*/id)arg3 ;
+(void)tapToRadarWithTitle:(id)arg1 description:(id)arg2 ;
+(BOOL)shouldSuppressRadarUserNotificationWithMessage:(id)arg1 radarTitle:(id)arg2 ;
+(id)_memoriesRelatedOutputPathBaseDirectoryWithPathManager:(id)arg1 ;
+(id)memoriesAndRelatedDiagnosticsOutputURLWithPathManager:(id)arg1 ;
+(id)createOrEmptyMemoriesRelatedSnapshotOutputFolderWithPathManager:(id)arg1 ;
+(void)collectMomentsStatWithLibraryContext:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)collectCollectionsStatWithLibraryContext:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)collectYearsStatWithLibraryContext:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

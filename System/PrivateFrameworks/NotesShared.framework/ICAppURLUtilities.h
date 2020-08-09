/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICAppURLUtilities : NSObject
+(id)firstQueryItemInURL:(id)arg1 withURLScheme:(id)arg2 andHost:(id)arg3 andQueryItemName:(id)arg4 ;
+(BOOL)isShowNoteURL:(id)arg1 ;
+(BOOL)isShowHTMLNoteURL:(id)arg1 ;
+(BOOL)isQuickNoteModeURL:(id)arg1 ;
+(id)urlForAppURLAction:(long long)arg1 ;
+(long long)appURLActionFromURL:(id)arg1 ;
+(id)appURLForNote:(id)arg1 ;
+(id)predicateForNoteMentionedInURL:(id)arg1 ;
+(id)appURLForHTMLNote:(id)arg1 ;
+(id)objectIDURIRepresentationForHTMLNoteMentionedInURL:(id)arg1 ;
+(id)appURLForFolderList;
+(BOOL)isShowFolderListURL:(id)arg1 ;
+(BOOL)isShowLegacyNoteURL:(id)arg1 ;
+(id)urlForQuickNoteWithOptions:(id)arg1 ;
+(BOOL)isLaunchingQuickNoteViaPencil:(id)arg1 ;
+(BOOL)quickNoteURLShouldShowList:(id)arg1 ;
+(BOOL)quickNoteURLShouldShowShareSheet:(id)arg1 ;
+(BOOL)quickNoteURLShouldShowiCloudShareSheet:(id)arg1 ;
+(id)attachmentIdentifierFromQuickNoteURL:(id)arg1 ;
+(id)noteIdentifierFromQuickNoteURL:(id)arg1 ;
+(id)contentOffsetFromQuickNoteURL:(id)arg1 ;
+(id)referralURLForSnapshotBackgroundTask;
@end

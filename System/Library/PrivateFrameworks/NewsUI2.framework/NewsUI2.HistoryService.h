/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCReadingHistoryObserving.h>

@interface NewsUI2.HistoryService : NSObject <FCReadingHistoryObserving> {

	 observers;
	 readingHistory;
	 issueReadingHistory;
	 clearReadingHistoryManager;
	 headlineStreamingResults;
	 headlineModelFactory;
	 headlineService;

}
-(void)readingHistory:(id)arg1 didRemoveArticlesWithIDs:(id)arg2 ;
-(void)readingHistory:(id)arg1 didAddArticlesWithIDs:(id)arg2 ;
-(void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2 ;
-(id)init;
@end

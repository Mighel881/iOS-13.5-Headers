/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebBookmarksXPCConnection;

@interface SSReadingList : NSObject {

	WebBookmarksXPCConnection* _connection;

}
+(BOOL)supportsURL:(id)arg1 ;
+(id)defaultReadingList;
-(id)init;
-(id)_init;
-(BOOL)addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 error:(id*)arg4 ;
-(BOOL)_addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 ;
-(void)_setUpConnectionIfNeeded;
@end

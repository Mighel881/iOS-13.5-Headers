/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/_MFDAMSBasicConsumer.h>
#import <libobjc.A.dylib/DASearchQueryConsumer.h>

@class NSDate, MFConditionLock, MFMailMessageStoreSearchResult;

@interface _MFDAMSSearchResponseConsumer : _MFDAMSBasicConsumer <DASearchQueryConsumer> {

	NSDate* latestDateToAdd;
	NSDate* earliestDateAdded;
	MFConditionLock* doneCondition;
	double timeReceivedLastResponse;
	unsigned totalCount;
	MFMailMessageStoreSearchResult* searchResult;

}

@property (nonatomic,retain) NSDate * latestDateToAdd; 
@property (nonatomic,readonly) NSDate * earliestDateAdded; 
@property (nonatomic,readonly) MFMailMessageStoreSearchResult * searchResult; 
-(MFMailMessageStoreSearchResult *)searchResult;
-(void)searchQuery:(id)arg1 returnedResults:(id)arg2 ;
-(void)searchQuery:(id)arg1 finishedWithError:(id)arg2 ;
-(void)searchQuery:(id)arg1 returnedTotalCount:(id)arg2 ;
-(id)initWithMaximumSize:(unsigned)arg1 latency:(double)arg2 ;
-(BOOL)handleItems:(id)arg1 ;
-(void)waitUntilDone;
-(BOOL)waitUntilDoneBeforeDate:(id)arg1 ;
-(void)setLatestDateToAdd:(NSDate *)arg1 ;
-(void)resetDoneCondition;
-(NSDate *)latestDateToAdd;
-(NSDate *)earliestDateAdded;
@end


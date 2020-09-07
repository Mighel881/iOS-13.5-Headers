/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDIterator.h>

@class WDIterator;

@interface WDCombinedIterator : WDIterator {

	WDIterator* mParentIterator;
	WDIterator* mChildIterator;

}

@property (nonatomic,retain) WDIterator * childIterator; 
-(id)next;
-(BOOL)hasNext;
-(WDIterator *)childIterator;
-(id)initWithParentIterator:(id)arg1 ;
-(id)childIteratorFrom:(id)arg1 ;
-(id)newChildIteratorFrom:(id)arg1 ;
-(void)incrementChildIterator;
-(void)setChildIterator:(WDIterator *)arg1 ;
@end

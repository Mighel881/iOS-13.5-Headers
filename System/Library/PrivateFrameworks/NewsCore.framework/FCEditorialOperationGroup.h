/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCSectionProviding;
@class NSArray, NSDate;

@interface FCEditorialOperationGroup : NSObject {

	id<FCSectionProviding> _section;
	NSArray* _headlines;
	NSDate* _publishDate;

}

@property (nonatomic,retain) id<FCSectionProviding> section;              //@synthesize section=_section - In the implementation block
@property (nonatomic,retain) NSArray * headlines;                         //@synthesize headlines=_headlines - In the implementation block
@property (nonatomic,retain) NSDate * publishDate;                        //@synthesize publishDate=_publishDate - In the implementation block
-(id<FCSectionProviding>)section;
-(void)setSection:(id<FCSectionProviding>)arg1 ;
-(NSDate *)publishDate;
-(void)setPublishDate:(NSDate *)arg1 ;
-(NSArray *)headlines;
-(void)setHeadlines:(NSArray *)arg1 ;
@end


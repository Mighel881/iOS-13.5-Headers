/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSString, SALocalSearchReviewList;

@interface SAMovieV2ReviewListSnippet : SAUISnippet

@property (nonatomic,copy) NSString * movieName; 
@property (nonatomic,retain) SALocalSearchReviewList * reviewList; 
+(id)reviewListSnippet;
+(id)reviewListSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)movieName;
-(void)setMovieName:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setReviewList:(SALocalSearchReviewList *)arg1 ;
-(SALocalSearchReviewList *)reviewList;
@end

